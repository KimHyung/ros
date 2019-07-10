#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
    //노드초기화, 노드이름은 고유해야함.
    ros::init(argc, argv, "example1_a");
    //프로세스핸들러-> make code and env 상호작용
    ros::NodeHandle n;
    ros::Publisher chatter_pub =
            n.advertise<std_msgs::String>("message",1000);
    ros::Rate loop_rate(10);
    //program halt clt+c, or halt node
    while(ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss << "I am the example1_a node ";
        msg.data = ss.str();
        //ROS_INFO("%s",msg.data.c_str());
        chatter_pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}