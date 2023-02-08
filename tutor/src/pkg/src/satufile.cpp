#include <ros/ros.h>
#include <std_msgs/String.h>

class Satufile{
private:
ros::Publisher pub;
ros::Subscriber sub;

public:

Satufile(ros::NodeHandle *nh){
    pub = nh->advertise<std_msgs::String>("out",1);
    sub = nh->subscribe("out",1,&Satufile::pesan,this);
}

void pesan(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("subscribe? %s", msg->data.c_str());
}  

void message(){ 
    std_msgs::String msg;
    msg.data = "test";
    pub.publish(msg);
    ros::spinOnce();
 }
};

int main(int argc, char **argv)
{
        ros::init(argc,argv,"pubsubsatufile");
        ros::NodeHandle nh;
        Satufile nc(&nh);
        while (1)
        {
            nc.message();
        }
        
        ros::spin();
    return 0;
}
