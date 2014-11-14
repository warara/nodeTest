/*
 * nodeTestMain.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: urs
 */



#include "ros/ros.h"
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Pose.h>
#include "quad_finite_state.h"
#include "CommandSrv.h"
#include <cstdlib>

int main(int argc, char **argv)
{
	ROS_INFO("start");
  ros::init(argc, argv, "nodeTest");


  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<ros_mavlink::CommandSrv>("/quad/cmds");
  ros_mavlink::CommandSrv srv;

  srv.request.command = CALIBRATE;

ROS_INFO("send service");
  if (client.call(srv))
  {
    ROS_INFO("Command succesfully returned %d", srv.response.success);
  }
  else
  {
    ROS_ERROR("Failed to call service %d", srv.response.success);
    return 1;
  }


 // ros_mavlink::CommandSrv srv;

  srv.request.command = TOGGLE_ARM;

ROS_INFO("send service");
  if (client.call(srv))
  {
    ROS_INFO("Command succesfully returned %d", srv.response.success);
  }
  else
  {
    ROS_ERROR("Failed to call service %d", srv.response.success);
    return 1;
  }

  return 0;
}
