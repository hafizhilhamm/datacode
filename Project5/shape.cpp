#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>


std::string path = ("/home/hafizh/Pictures/shape.jpeg");
cv::Mat img = cv::imread(path);
cv::Mat thresh,blur,canny,dil,erode;

void kontur(cv::Mat dil,cv::Mat img){
    std::vector<std::vector<cv::Point>> contour;
    std::vector<std::Vec4i> hierarchy;

    cv::findContours(dil,contour,hierarchy,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE);
    cv::drawContours(img,contour,-1,cv::Scalar(0,0,255),2);

}

int main(){
//tahap prepoccesing//
cv::resize(img,img,cv::Size(550,512));
cv::cvtColor(img,thresh,cv::COLOR_BGR2GRAY);
cv::GaussianBlur(thresh,blur, cv::Size(3,3),5,0);
cv::Canny(blur,canny,50,100);
cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT,cv::Size(3,3));
cv::dilate(canny,dil,kernel);

kontur(dil,img);

cv::imshow("img",img);
/*cv::imshow("blur",blur);
cv::imshow("canny",canny);
cv::imshow("dillate",dil);*/
cv::waitKey(0);


}