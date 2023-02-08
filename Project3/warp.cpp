#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>
 float w = 250;
 float h = 350;
 cv::Mat mat1,mat2;
 cv::Mat imgwarp1,imgwarp2;
int main(){

 std::string path = ("/home/hafizh/Pictures/card.jpg");
 cv::Mat img = cv::imread(path);
 cv::Point2f src1[4] = {{15,16},{117,17},{16,169},{118,171}};
 cv::Point2f src2[4] = {{131,15},{232,17},{131,171},{234,171}};
 cv::Point2f dst[4] = {{0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h}};
 mat1 = cv::getPerspectiveTransform(src1,dst);
 mat2 = cv::getPerspectiveTransform(src2,dst);
 cv::warpPerspective(img,imgwarp1,mat1,cv::Point(w,h));
 cv::warpPerspective(img,imgwarp2,mat2,cv::Point(w,h));
 for(int i=0; i<4; i++){
    cv::circle(img,src1[i],10, cv::Scalar(255,0,0),cv::FILLED);
    cv::circle(img,src2[i],10, cv::Scalar(255,0,0),cv::FILLED);
 }

 cv::imshow("img",img);
 cv::imshow("imgwarp1",imgwarp1);
 cv::imshow("imgwarp2",imgwarp2); 
 cv::waitKey(0);

}