#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

int main()
{
    std::string path = ("/home/hafizh/Pictures/shape4.jpg");
    cv::Mat vid= cv::imread(path);

    while(true){
        /*cv::VideoCapture cap(0);
        cv::Mat vid;*/
        //cap >> vid;//
        std::string str;
        cv::resize(vid,vid,cv::Size(900,850));
        cv::CascadeClassifier faceCascade;
        faceCascade.load("/home/hafizh/cvcv/haarcascade_frontalface_default.xml");
        if (faceCascade.empty()) {std::cout << "no xml" << std::endl;}
        std::vector<cv::Rect> faces;
        faceCascade.detectMultiScale(vid,faces,1.1,10);
        std::vector<cv::Rect> boundRect(faces.size());
        for(int i=0; i<faces.size(); i++){
            cv::rectangle(vid, faces[i].tl(),faces[i].br(),cv::Scalar(255,0,0),3);
            cv::putText(vid ,  "faces"  ,  {faces[i].x,faces[i].y+15} , cv::FONT_HERSHEY_DUPLEX, 0.3, cv::Scalar(0,255,0),1);
        }
        cv::imshow("vid",vid);
        cv::waitKey(0);
    }
}

