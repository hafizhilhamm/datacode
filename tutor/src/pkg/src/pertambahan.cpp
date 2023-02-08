#include <ros/ros.h>
#include <std_msgs/String.h>
#include <pkg/pertambahan.h>
bool tambah(pkg::pertambahan::Request &req, pkg::pertambahan::Response &res){
    res.sum = req.a+req.b;
    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "service");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("tambah",tambah);
    ros::spin();
    return 0; 
}
