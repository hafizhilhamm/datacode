#include <ros/ros.h>
#include <std_msgs/String.h>
#include <pkg/Num.h>
void pubsubcallback(const pkg::Num::ConstPtr& msg){
    ROS_INFO("subscribe : %s dan %d", msg->sapaan.c_str(),msg->angka);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscriber");
    ros::NodeHandle nh;

    ros::Subscriber subs = nh.subscribe("pkg/event_out",1,pubsubcallback);
    ros::spin();
    return 0;
}
