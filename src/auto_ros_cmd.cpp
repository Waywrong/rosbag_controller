#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <ros/ros.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "auto_ros_cmd");
    ros::NodeHandle n;

    system("rosservice call /bag_go");
    sleep(500);
    for(int i=0;i<2000;i++)
    {
        system("rosservice call /bag_go");
        sleep(2);
        system("rosservice call /pause_bag");
        sleep(18);
    }
    system("rosservice call /bag_go");
    return 0;
}
