#include <ros/ros.h>
#include <std_msgs/String.h>
#include <pkg/Num.h>

int main(int argc, char  **argv)
{
    ros::init(argc, argv, "publisher");
    ros::NodeHandle nh;
    ros::Publisher publish = nh.advertise<pkg::Num>("pkg/event_out",1);
    int a=10;
    int b=12;
    int z = a + b;
    ros::Rate loop_rate(10);
    while(ros::ok()){
        pkg::Num msg;
        msg.sapaan="hallo";
        msg.angka = z;
        publish.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();

    }
    return 0;
}
