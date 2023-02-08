#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

int main(){
	//cv::VideoCapture cap(0);
	//cv::Mat img;
	//while(true){//
	std::string path("/home/hafizh/Pictures/pov.png");
	cv::Mat img= cv::imread(path);
	//cap >> img;//
	cv::resize(img,img,cv::Size(700,700));
	//cv::circle(img,cv::Point(256,256),200, cv::Scalar(255,0,0),cv::FILLED);//
	cv::rectangle(img,cv::Point(200,700),cv::Point(450,350), cv::Scalar(0,0,0),5);
	cv::line(img,cv::Point(205,450),cv::Point(445,450), cv::Scalar(0,255,0),5);
	cv::line(img,cv::Point(205,550),cv::Point(445,550), cv::Scalar(0,255,255),8);
	cv::line(img,cv::Point(205,650),cv::Point(445,650), cv::Scalar(0,0,255),5);
	imshow("image",img);
	cv::waitKey(0);
	//}//
}