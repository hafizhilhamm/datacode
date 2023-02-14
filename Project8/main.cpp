#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

void kontur(cv::Mat dil,cv::Mat vid){
    std::vector<std::vector<cv::Point>> contour;
    std::vector<cv::Vec4i> hierarchy;
    cv::findContours(dil,contour,hierarchy,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE);



}

int main()
{
    cv::VideoCapture cap (0);
    cv::Mat vid;
    while(true){
    cap >> vid;
    cv::Mat thresh;
    cv::cvtColor(vid,thresh,cv::COLOR_BGR2GRAY);
    cv::Mat blur;
    cv::GaussianBlur(thresh,blur,cv::Size(3,3),5,0);
    cv::Mat canny;
    cv::Canny(blur,canny,50,100);
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT,cv::Size(3,3));
    cv::Mat dil;
    cv::dilate(canny,dil,kernel);
    
    kontur(dil,vid);

    cv::imshow("vid",vid);
    cv::imshow("canny",canny);
    cv::imshow("dil",dil);
    cv::waitKey(10);
    }
}
