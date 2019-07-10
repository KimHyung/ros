//
// Created by hyungseok_kim on 19. 7. 9.
//
#include "ros/ros.h"
#include "chapter2_tutorials/chapter2_srv1.h"
#include <cstdlib>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "add_3_ints_client");
    if(argc != 4)
    {
        ROS_INFO("usage: add_3_ints_client A B C");
        return 1;
    }
    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<chapter2_tutorials::chapter2_srv1>("add_3_ints");
    chapter2_tutorials::chapter2_srv1 srv;

    srv.request.A = atoll(argv[1]);
    srv.request.B = atoll(argv[2]);
    srv.request.C = atoll(argv[3]);

    if(client.call(srv))
    {
        ROS_INFO("Sum: %1d", (long int)srv.response.sum);
    }
    else
    {
        ROS_ERROR("Falied to call service add_3_ints");
        return 1;
    }
    return 0;
}

