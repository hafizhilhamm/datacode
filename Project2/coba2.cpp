#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

    int bmin=0,gmin=0,rmin=168;
    int bmax=172,gmax=111,rmax=255,max=255;
    int iSliderValue1 = 50;
    int iSliderValue2 = 50;

    void trackbar(std::string window){
        cv::namedWindow("trackbar warna",1); 
        cv::createTrackbar("lowhue","trackbar warna",&bmin,max);
        cv::createTrackbar("highhuue","trackbar warna",&bmax,max );
        cv::createTrackbar("lowgsat","trackbar warna",&gmin,max );
        cv::createTrackbar("highsat","trackbar warna",&gmax,max );
        cv::createTrackbar("lowvalue","trackbar warna",&rmin,max );
        cv::createTrackbar("highvalue","trackbar warna",&rmax,max );
        cv::createTrackbar("brightness","trackbar warna",&iSliderValue1,100);
        cv::createTrackbar("contrast","trackbar warna",&iSliderValue2,100);
    }

int main()
{
    //cv::VideoCapture cap("/home/hafizh/Downloads/lapangann.mp4");//
    cv::VideoCapture cap(0);
    cv::Mat frame;


    while(true){
    cap >> frame;
    //cv::resize(frame,frame,cv::Size(1000,700));//

        std::cout << frame.size() << std::endl;
         int iBrightness  = iSliderValue1 - 50;
         double dContrast = iSliderValue2 / 50.0;
         frame.convertTo(frame, -1, dContrast, iBrightness); 

         cv::Mat blur;
         cv::GaussianBlur(frame,blur,cv::Size(5,5),10,10);

         cv::Mat imgCanny;
         cv::Canny(blur,imgCanny,100,100);      


         cv::Mat hsv;
         cvtColor(frame, hsv, cv:: COLOR_BGR2HSV);

         cv::Scalar lower(bmin, gmin, rmin);
         cv::Scalar upper(bmax, gmax, rmax);

         cv::Mat thresh; 
         cvtColor(frame, thresh, cv:: COLOR_BGR2GRAY);
        
         trackbar("trackbar");
         cv::inRange(hsv, lower, upper, thresh);
        
         std::vector<std::vector<cv::Point>> contour;
         cv::findContours(thresh, contour,cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
        
         cv::Mat kontur;
         frame.copyTo(kontur);
         drawContours(kontur, contour, -1, cv::Scalar(255,0,0), 2);
         cv::Moments m = moments(thresh,true);
         cv::Point p(m.m10/m.m00, m.m01/m.m00);
         circle(kontur,p,5,cv::Scalar(128,0,0),-1);

         cv::Mat dst, dst_norm, dst_norm_scaled;
         dst = cv::Mat::zeros( frame.size(), CV_32FC1 );
           int blockSize = 2;
           int apertureSize = 3;
           double k = 0.04;
           cornerHarris( thresh, dst, blockSize, apertureSize, k, cv::BORDER_DEFAULT );
             normalize( dst, dst_norm, 0, 255, cv::NORM_MINMAX, CV_32FC1, cv::Mat() );
             convertScaleAbs( dst_norm, dst_norm_scaled );
          for( int j = 0; j < dst_norm.rows ; j++ )
     { 
            for( int i = 0; i < dst_norm.cols; i++ )
     {
            if( (int) dst_norm.at<float>(j,i) > 200 )
              {
               circle( dst_norm_scaled, cv::Point( i, j ), 5,  cv::Scalar(0), 2, 8, 0 );
              }
          }
     }

         imshow("webcam frame",frame);
         imshow("img blur", blur);
         imshow("edge detector",imgCanny);
         imshow("hsv",hsv);
         imshow("trackbar",thresh);
         imshow("kontur",kontur);
         imshow("harris",dst_norm_scaled);
         cv::waitKey(10);
}
}

