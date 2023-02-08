#include <ros/ros.h>
#include <std_msgs/String.h>
#include <pkg/Num.h>

void satu(const pkg::Num::ConstPtr& msg){
     ROS_INFO("%s %d" ,msg->sapaan.c_str(),msg->angka);
}

int main(int argc, char  **argv)
{
    ros::init(argc,argv,"node");
    ros::NodeHandle nh;

    ros::Publisher pub=nh.advertise<pkg::Num>("out",1);
    ros::Subscriber sub=nh.subscribe("out",1,satu);
    ros::Rate loop_rate(10);

    while(ros::ok()){
    pkg::Num msg;
    msg.sapaan = "owowow";
    msg.angka = 10;
    pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    }

    return 0;
}
