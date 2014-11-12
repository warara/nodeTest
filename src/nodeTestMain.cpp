/*
 * nodeTestMain.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: urs
 */



#include "ros/ros.h"
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Pose.h>
#include "Commands.h"
#include "CommandSrv.h"
#include <cstdlib>

int main(int argc, char **argv)
{
	ROS_INFO("start");
  ros::init(argc, argv, "nodeTest");


  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<ros_mavlink::CommandSrv>("/quad/cmds");
  ros_mavlink::CommandSrv srv;
  Commands cmd = GOTO;
  srv.request.command = cmd;

  geometry_msgs::Pose pose;
  pose.position.x = 1; pose.position.z = 2; pose.position.y = 3;
  pose.orientation.w = 0.1;  pose.orientation.x = 0.1;  pose.orientation.y = 0.2;  pose.orientation.z = -0.1;
  srv.request.pose = pose;

ROS_INFO("send service");
  if (client.call(srv))
  {
    ROS_INFO("Command succesfully returned");
  }
  else
  {
    ROS_ERROR("Failed to call service %d", srv.response.result);
    return 1;
  }

  return 0;
}
