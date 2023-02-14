#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

int main()
{
    cv::VideoCapture cap (0);
    cv::Mat vid;
    while(true){
    cap >> vid;
    cv::imshow("vid",vid);
    cv::waitKey(10);
    }
}
