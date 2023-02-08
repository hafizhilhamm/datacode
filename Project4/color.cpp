#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

int hmin = 0 , smin = 0, vmin = 0;
int hmax = 255, smax = 255, vmax = 255, max = 225;

void trackbar(std::string window){
cv::namedWindow("Trackbar",1);
cv::createTrackbar("low hue","Trackbar",&hmin,max);
cv::createTrackbar("low sat","Trackbar",&smin,max);
cv::createTrackbar("low val","Trackbar",&vmin,max);
cv::createTrackbar("high hue","Trackbar",&hmax,max);
cv::createTrackbar("high sat","Trackbar",&smax,max);
cv::createTrackbar("high val","Trackbar",&vmax,max);

}

int main()
{

 //cv::VideoCapture cap(0);//
 //cv::Mat img;// 
 std::string path = ("/home/hafizh/Pictures/card.jpg");
 cv::Mat img = cv::imread(path);
 while(true)
 {
 //cap >> img;//
 cv::Mat hsv;
 cv::cvtColor(img,hsv,cv::COLOR_BGR2HSV);
 cv::Mat thresh;
 cv::cvtColor(img,thresh,cv::COLOR_BGR2GRAY);
 cv::Scalar lower(hmin,smin,vmin);
 cv::Scalar upper(hmax,smax,vmax);
 trackbar("Trackbar");
 cv::inRange(hsv,lower,upper,thresh);


 cv::imshow("img",img);
 cv::imshow("hsv",hsv);
 cv::imshow("Trackbar",thresh);
 cv::waitKey(10);



 }
}