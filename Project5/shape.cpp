#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>


std::string path = ("/home/hafizh/Pictures/shape3.jpg");
cv::Mat img = cv::imread(path);
cv::Mat thresh,blur,canny,dil,erode;

void kontur(cv::Mat dil,cv::Mat img){
    std::vector<std::vector<cv::Point>> contour;
    std::vector<cv::Vec4i> hierarchy;
    cv::findContours(dil,contour,hierarchy,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE);


    for(int i=0; i < contour.size(); i++){
            std::vector<std::vector<cv::Point>> conpoly(contour.size());
            std::vector<cv::Rect> boundRect(contour.size());
            std::string objtype;
        int area = cv::contourArea(contour[i]); 
        std::cout << area << std::endl;

            if(area > 1500){

            float peri = cv::arcLength(contour[i],true);
            cv::approxPolyDP(contour[i],conpoly[i],0.02 * peri,true);
            
            boundRect[i] = cv::boundingRect(conpoly[i]);
            

            int obj = (int)conpoly[i].size();

            if(obj == 3){objtype = "triangle";}
            else if(obj == 4){
                float ratio = (float)boundRect[i].width/(float)boundRect[i].height;
                std::cout << ratio << std::endl;
                if (ratio == 0.95 && ratio<1.05){objtype = "square";}
                else{objtype = "rectangle";}};
            if(obj  >= 5){objtype = "circle";};



            cv::drawContours(img,conpoly,i,cv::Scalar(0,0,255),2);
            cv::rectangle(img, boundRect[i].tl() , boundRect[i].br(),cv::Scalar(255,0,0),2);
            cv::putText(img , objtype , {boundRect[i].x,boundRect[i].y+15}, cv::FONT_HERSHEY_DUPLEX, 0.3, cv::Scalar(0,255,0),1);
            std::cout << conpoly[i].size() << std::endl;
        }
    }
}

int main(){
//tahap prepoccesing//
cv::resize(img,img,cv::Size(600,560));
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
//ATBBcrxc3MSQbmUK6TUFFpX7wnJs8955F364//
cv::waitKey(0);


}