/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/urs/catkin_ws/src/ros_mavlink/srv/CommandSrv.srv
 *
 */


#ifndef ROS_MAVLINK_MESSAGE_COMMANDSRVRESPONSE_H
#define ROS_MAVLINK_MESSAGE_COMMANDSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_mavlink
{
template <class ContainerAllocator>
struct CommandSrvResponse_
{
  typedef CommandSrvResponse_<ContainerAllocator> Type;

  CommandSrvResponse_()
    : success(false)
    , answer(0)  {
    }
  CommandSrvResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , answer(0)  {
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int8_t _answer_type;
  _answer_type answer;




  typedef boost::shared_ptr< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CommandSrvResponse_

typedef ::ros_mavlink::CommandSrvResponse_<std::allocator<void> > CommandSrvResponse;

typedef boost::shared_ptr< ::ros_mavlink::CommandSrvResponse > CommandSrvResponsePtr;
typedef boost::shared_ptr< ::ros_mavlink::CommandSrvResponse const> CommandSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_mavlink

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ee02f94dacd96faff36fe426698f8897";
  }

  static const char* value(const ::ros_mavlink::CommandSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xee02f94dacd96fafULL;
  static const uint64_t static_value2 = 0xf36fe426698f8897ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mavlink/CommandSrvResponse";
  }

  static const char* value(const ::ros_mavlink::CommandSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
int8 answer\n\
\n\
";
  }

  static const char* value(const ::ros_mavlink::CommandSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.answer);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CommandSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mavlink::CommandSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mavlink::CommandSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "answer: ";
    Printer<int8_t>::stream(s, indent + "  ", v.answer);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MAVLINK_MESSAGE_COMMANDSRVRESPONSE_H
