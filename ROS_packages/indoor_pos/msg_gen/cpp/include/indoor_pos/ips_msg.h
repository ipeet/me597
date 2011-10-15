/* Auto-generated by genmsg_cpp for file /home/ahmed/me597/ROS_packages/indoor_pos/msg/ips_msg.msg */
#ifndef INDOOR_POS_MESSAGE_IPS_MSG_H
#define INDOOR_POS_MESSAGE_IPS_MSG_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"

namespace indoor_pos
{
template <class ContainerAllocator>
struct ips_msg_ : public ros::Message
{
  typedef ips_msg_<ContainerAllocator> Type;

  ips_msg_()
  : header()
  , X(0.0)
  , Y(0.0)
  , Yaw(0.0)
  {
  }

  ips_msg_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , X(0.0)
  , Y(0.0)
  , Yaw(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _X_type;
  float X;

  typedef float _Y_type;
  float Y;

  typedef float _Yaw_type;
  float Yaw;


private:
  static const char* __s_getDataType_() { return "indoor_pos/ips_msg"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "bbe3bb11305e11f0c913565ed1efb960"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
\n\
float32 X\n\
float32 Y\n\
float32 Yaw\n\
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
    ros::serialization::serialize(stream, X);
    ros::serialization::serialize(stream, Y);
    ros::serialization::serialize(stream, Yaw);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, X);
    ros::serialization::deserialize(stream, Y);
    ros::serialization::deserialize(stream, Yaw);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(X);
    size += ros::serialization::serializationLength(Y);
    size += ros::serialization::serializationLength(Yaw);
    return size;
  }

  typedef boost::shared_ptr< ::indoor_pos::ips_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::indoor_pos::ips_msg_<ContainerAllocator>  const> ConstPtr;
}; // struct ips_msg
typedef  ::indoor_pos::ips_msg_<std::allocator<void> > ips_msg;

typedef boost::shared_ptr< ::indoor_pos::ips_msg> ips_msgPtr;
typedef boost::shared_ptr< ::indoor_pos::ips_msg const> ips_msgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::indoor_pos::ips_msg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::indoor_pos::ips_msg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace indoor_pos

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::indoor_pos::ips_msg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bbe3bb11305e11f0c913565ed1efb960";
  }

  static const char* value(const  ::indoor_pos::ips_msg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xbbe3bb11305e11f0ULL;
  static const uint64_t static_value2 = 0xc913565ed1efb960ULL;
};

template<class ContainerAllocator>
struct DataType< ::indoor_pos::ips_msg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "indoor_pos/ips_msg";
  }

  static const char* value(const  ::indoor_pos::ips_msg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::indoor_pos::ips_msg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
float32 X\n\
float32 Y\n\
float32 Yaw\n\
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

  static const char* value(const  ::indoor_pos::ips_msg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::indoor_pos::ips_msg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::indoor_pos::ips_msg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::indoor_pos::ips_msg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.X);
    stream.next(m.Y);
    stream.next(m.Yaw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ips_msg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::indoor_pos::ips_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::indoor_pos::ips_msg_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "X: ";
    Printer<float>::stream(s, indent + "  ", v.X);
    s << indent << "Y: ";
    Printer<float>::stream(s, indent + "  ", v.Y);
    s << indent << "Yaw: ";
    Printer<float>::stream(s, indent + "  ", v.Yaw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // INDOOR_POS_MESSAGE_IPS_MSG_H
