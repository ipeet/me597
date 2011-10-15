/* Auto-generated by genmsg_cpp for file /home/ahmed/me597/ROS_packages/clearpath_horizon/msg/DifferentialSpeed.msg */
#ifndef CLEARPATH_HORIZON_MESSAGE_DIFFERENTIALSPEED_H
#define CLEARPATH_HORIZON_MESSAGE_DIFFERENTIALSPEED_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"

namespace clearpath_horizon
{
template <class ContainerAllocator>
struct DifferentialSpeed_ : public ros::Message
{
  typedef DifferentialSpeed_<ContainerAllocator> Type;

  DifferentialSpeed_()
  : header()
  , left_speed(0.0)
  , right_speed(0.0)
  , left_accel(0.0)
  , right_accel(0.0)
  {
  }

  DifferentialSpeed_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , left_speed(0.0)
  , right_speed(0.0)
  , left_accel(0.0)
  , right_accel(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef double _left_speed_type;
  double left_speed;

  typedef double _right_speed_type;
  double right_speed;

  typedef double _left_accel_type;
  double left_accel;

  typedef double _right_accel_type;
  double right_accel;


private:
  static const char* __s_getDataType_() { return "clearpath_horizon/DifferentialSpeed"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4b62e763320bacb9c7f63f6ebd46ceba"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
float64 left_speed\n\
float64 right_speed\n\
float64 left_accel\n\
float64 right_accel\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, left_speed);
    ros::serialization::serialize(stream, right_speed);
    ros::serialization::serialize(stream, left_accel);
    ros::serialization::serialize(stream, right_accel);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, left_speed);
    ros::serialization::deserialize(stream, right_speed);
    ros::serialization::deserialize(stream, left_accel);
    ros::serialization::deserialize(stream, right_accel);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(left_speed);
    size += ros::serialization::serializationLength(right_speed);
    size += ros::serialization::serializationLength(left_accel);
    size += ros::serialization::serializationLength(right_accel);
    return size;
  }

  typedef boost::shared_ptr< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator>  const> ConstPtr;
}; // struct DifferentialSpeed
typedef  ::clearpath_horizon::DifferentialSpeed_<std::allocator<void> > DifferentialSpeed;

typedef boost::shared_ptr< ::clearpath_horizon::DifferentialSpeed> DifferentialSpeedPtr;
typedef boost::shared_ptr< ::clearpath_horizon::DifferentialSpeed const> DifferentialSpeedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace clearpath_horizon

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4b62e763320bacb9c7f63f6ebd46ceba";
  }

  static const char* value(const  ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4b62e763320bacb9ULL;
  static const uint64_t static_value2 = 0xc7f63f6ebd46cebaULL;
};

template<class ContainerAllocator>
struct DataType< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > {
  static const char* value() 
  {
    return "clearpath_horizon/DifferentialSpeed";
  }

  static const char* value(const  ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float64 left_speed\n\
float64 right_speed\n\
float64 left_accel\n\
float64 right_accel\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.left_speed);
    stream.next(m.right_speed);
    stream.next(m.left_accel);
    stream.next(m.right_accel);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DifferentialSpeed_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::clearpath_horizon::DifferentialSpeed_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "left_speed: ";
    Printer<double>::stream(s, indent + "  ", v.left_speed);
    s << indent << "right_speed: ";
    Printer<double>::stream(s, indent + "  ", v.right_speed);
    s << indent << "left_accel: ";
    Printer<double>::stream(s, indent + "  ", v.left_accel);
    s << indent << "right_accel: ";
    Printer<double>::stream(s, indent + "  ", v.right_accel);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CLEARPATH_HORIZON_MESSAGE_DIFFERENTIALSPEED_H
