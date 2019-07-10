//
// Created by hyungseok_kim on 19. 7. 9.
//
#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>
#include "chapter2_tutorials/chapter2Config.h"

void callback(chapter2_tutorials::chapter2Config &config, uint32_t level)
{
    ROS_INFO("Reconfigure Request: %d %f %s %s %d",
            config.int_param,
            config.double_param,
            config.str_param.c_str(),
            config.bool_param?"True":"False",
            config.size);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "example4_dynmaic_reconfigure");
    dynamic_reconfigure::Server<chapter2_tutorials::chapter2Config> server;
    dynamic_reconfigure::Server<chapter2_tutorials::chapter2Config>::CallbackType f;

    f = boost::bind(&callback, _1, _2);
    server.setCallback(f);

    ros::spin();
    return 0;
}