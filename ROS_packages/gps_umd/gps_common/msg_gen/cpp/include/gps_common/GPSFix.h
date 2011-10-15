/* Auto-generated by genmsg_cpp for file /home/ahmed/me597/ROS_packages/gps_umd/gps_common/msg/GPSFix.msg */
#ifndef GPS_COMMON_MESSAGE_GPSFIX_H
#define GPS_COMMON_MESSAGE_GPSFIX_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"

namespace gps_common
{
template <class ContainerAllocator>
struct GPSFix_ : public ros::Message
{
  typedef GPSFix_<ContainerAllocator> Type;

  GPSFix_()
  : header()
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  , track(0.0)
  , speed(0.0)
  , climb(0.0)
  , pitch(0.0)
  , roll(0.0)
  , dip(0.0)
  , time(0.0)
  , gdop(0.0)
  , pdop(0.0)
  , hdop(0.0)
  , vdop(0.0)
  , tdop(0.0)
  , err(0.0)
  , err_horz(0.0)
  , err_vert(0.0)
  , err_track(0.0)
  , err_speed(0.0)
  , err_climb(0.0)
  , err_time(0.0)
  , err_pitch(0.0)
  , err_roll(0.0)
  , err_dip(0.0)
  {
  }

  GPSFix_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  , track(0.0)
  , speed(0.0)
  , climb(0.0)
  , pitch(0.0)
  , roll(0.0)
  , dip(0.0)
  , time(0.0)
  , gdop(0.0)
  , pdop(0.0)
  , hdop(0.0)
  , vdop(0.0)
  , tdop(0.0)
  , err(0.0)
  , err_horz(0.0)
  , err_vert(0.0)
  , err_track(0.0)
  , err_speed(0.0)
  , err_climb(0.0)
  , err_time(0.0)
  , err_pitch(0.0)
  , err_roll(0.0)
  , err_dip(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef double _latitude_type;
  double latitude;

  typedef double _longitude_type;
  double longitude;

  typedef double _altitude_type;
  double altitude;

  typedef double _track_type;
  double track;

  typedef double _speed_type;
  double speed;

  typedef double _climb_type;
  double climb;

  typedef double _pitch_type;
  double pitch;

  typedef double _roll_type;
  double roll;

  typedef double _dip_type;
  double dip;

  typedef double _time_type;
  double time;

  typedef double _gdop_type;
  double gdop;

  typedef double _pdop_type;
  double pdop;

  typedef double _hdop_type;
  double hdop;

  typedef double _vdop_type;
  double vdop;

  typedef double _tdop_type;
  double tdop;

  typedef double _err_type;
  double err;

  typedef double _err_horz_type;
  double err_horz;

  typedef double _err_vert_type;
  double err_vert;

  typedef double _err_track_type;
  double err_track;

  typedef double _err_speed_type;
  double err_speed;

  typedef double _err_climb_type;
  double err_climb;

  typedef double _err_time_type;
  double err_time;

  typedef double _err_pitch_type;
  double err_pitch;

  typedef double _err_roll_type;
  double err_roll;

  typedef double _err_dip_type;
  double err_dip;


private:
  static const char* __s_getDataType_() { return "gps_common/GPSFix"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "0ae01adfd96ac75f78c023bbead08337"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
\n\
# Latitude (degrees). Positive is north of equator; negative is south.\n\
float64 latitude\n\
\n\
# Longitude (degrees). Positive is east of prime meridian, negative south.\n\
float64 longitude\n\
\n\
# Altitude (meters). Positive is above reference (e.g., sea level).\n\
float64 altitude\n\
\n\
# Direction (degrees from north)\n\
float64 track\n\
\n\
# Ground speed (meters/second)\n\
float64 speed\n\
\n\
# Vertical speed (meters/second)\n\
float64 climb\n\
\n\
# Device orientation (units in degrees)\n\
float64 pitch\n\
float64 roll\n\
float64 dip\n\
\n\
# GPS time\n\
float64 time\n\
\n\
# Total (positional-temporal) dilution of precision\n\
float64 gdop\n\
\n\
# Positional (3D) dilution of precision\n\
float64 pdop\n\
\n\
# Horizontal dilution of precision\n\
float64 hdop\n\
\n\
# Vertical dilution of precision\n\
float64 vdop\n\
\n\
# Temporal dilution of precision\n\
float64 tdop\n\
\n\
# Spherical position uncertainty (meters) [epe]\n\
float64 err\n\
\n\
# Horizontal position uncertainty (meters) [eph]\n\
float64 err_horz\n\
\n\
# Vertical position uncertainty (meters) [epv]\n\
float64 err_vert\n\
\n\
# Track uncertainty (degrees) [epd]\n\
float64 err_track\n\
\n\
# Ground speed uncertainty (meters/second) [eps]\n\
float64 err_speed\n\
\n\
# Vertical speed uncertainty (meters/second) [epc]\n\
float64 err_climb\n\
\n\
# Temporal uncertainty [ept]\n\
float64 err_time\n\
\n\
# Orientation uncertainty (degrees)\n\
float64 err_pitch\n\
float64 err_roll\n\
float64 err_dip\n\
\n\
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
    ros::serialization::serialize(stream, latitude);
    ros::serialization::serialize(stream, longitude);
    ros::serialization::serialize(stream, altitude);
    ros::serialization::serialize(stream, track);
    ros::serialization::serialize(stream, speed);
    ros::serialization::serialize(stream, climb);
    ros::serialization::serialize(stream, pitch);
    ros::serialization::serialize(stream, roll);
    ros::serialization::serialize(stream, dip);
    ros::serialization::serialize(stream, time);
    ros::serialization::serialize(stream, gdop);
    ros::serialization::serialize(stream, pdop);
    ros::serialization::serialize(stream, hdop);
    ros::serialization::serialize(stream, vdop);
    ros::serialization::serialize(stream, tdop);
    ros::serialization::serialize(stream, err);
    ros::serialization::serialize(stream, err_horz);
    ros::serialization::serialize(stream, err_vert);
    ros::serialization::serialize(stream, err_track);
    ros::serialization::serialize(stream, err_speed);
    ros::serialization::serialize(stream, err_climb);
    ros::serialization::serialize(stream, err_time);
    ros::serialization::serialize(stream, err_pitch);
    ros::serialization::serialize(stream, err_roll);
    ros::serialization::serialize(stream, err_dip);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, latitude);
    ros::serialization::deserialize(stream, longitude);
    ros::serialization::deserialize(stream, altitude);
    ros::serialization::deserialize(stream, track);
    ros::serialization::deserialize(stream, speed);
    ros::serialization::deserialize(stream, climb);
    ros::serialization::deserialize(stream, pitch);
    ros::serialization::deserialize(stream, roll);
    ros::serialization::deserialize(stream, dip);
    ros::serialization::deserialize(stream, time);
    ros::serialization::deserialize(stream, gdop);
    ros::serialization::deserialize(stream, pdop);
    ros::serialization::deserialize(stream, hdop);
    ros::serialization::deserialize(stream, vdop);
    ros::serialization::deserialize(stream, tdop);
    ros::serialization::deserialize(stream, err);
    ros::serialization::deserialize(stream, err_horz);
    ros::serialization::deserialize(stream, err_vert);
    ros::serialization::deserialize(stream, err_track);
    ros::serialization::deserialize(stream, err_speed);
    ros::serialization::deserialize(stream, err_climb);
    ros::serialization::deserialize(stream, err_time);
    ros::serialization::deserialize(stream, err_pitch);
    ros::serialization::deserialize(stream, err_roll);
    ros::serialization::deserialize(stream, err_dip);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(latitude);
    size += ros::serialization::serializationLength(longitude);
    size += ros::serialization::serializationLength(altitude);
    size += ros::serialization::serializationLength(track);
    size += ros::serialization::serializationLength(speed);
    size += ros::serialization::serializationLength(climb);
    size += ros::serialization::serializationLength(pitch);
    size += ros::serialization::serializationLength(roll);
    size += ros::serialization::serializationLength(dip);
    size += ros::serialization::serializationLength(time);
    size += ros::serialization::serializationLength(gdop);
    size += ros::serialization::serializationLength(pdop);
    size += ros::serialization::serializationLength(hdop);
    size += ros::serialization::serializationLength(vdop);
    size += ros::serialization::serializationLength(tdop);
    size += ros::serialization::serializationLength(err);
    size += ros::serialization::serializationLength(err_horz);
    size += ros::serialization::serializationLength(err_vert);
    size += ros::serialization::serializationLength(err_track);
    size += ros::serialization::serializationLength(err_speed);
    size += ros::serialization::serializationLength(err_climb);
    size += ros::serialization::serializationLength(err_time);
    size += ros::serialization::serializationLength(err_pitch);
    size += ros::serialization::serializationLength(err_roll);
    size += ros::serialization::serializationLength(err_dip);
    return size;
  }

  typedef boost::shared_ptr< ::gps_common::GPSFix_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gps_common::GPSFix_<ContainerAllocator>  const> ConstPtr;
}; // struct GPSFix
typedef  ::gps_common::GPSFix_<std::allocator<void> > GPSFix;

typedef boost::shared_ptr< ::gps_common::GPSFix> GPSFixPtr;
typedef boost::shared_ptr< ::gps_common::GPSFix const> GPSFixConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::gps_common::GPSFix_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::gps_common::GPSFix_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace gps_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::gps_common::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0ae01adfd96ac75f78c023bbead08337";
  }

  static const char* value(const  ::gps_common::GPSFix_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0ae01adfd96ac75fULL;
  static const uint64_t static_value2 = 0x78c023bbead08337ULL;
};

template<class ContainerAllocator>
struct DataType< ::gps_common::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gps_common/GPSFix";
  }

  static const char* value(const  ::gps_common::GPSFix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gps_common::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
# Latitude (degrees). Positive is north of equator; negative is south.\n\
float64 latitude\n\
\n\
# Longitude (degrees). Positive is east of prime meridian, negative south.\n\
float64 longitude\n\
\n\
# Altitude (meters). Positive is above reference (e.g., sea level).\n\
float64 altitude\n\
\n\
# Direction (degrees from north)\n\
float64 track\n\
\n\
# Ground speed (meters/second)\n\
float64 speed\n\
\n\
# Vertical speed (meters/second)\n\
float64 climb\n\
\n\
# Device orientation (units in degrees)\n\
float64 pitch\n\
float64 roll\n\
float64 dip\n\
\n\
# GPS time\n\
float64 time\n\
\n\
# Total (positional-temporal) dilution of precision\n\
float64 gdop\n\
\n\
# Positional (3D) dilution of precision\n\
float64 pdop\n\
\n\
# Horizontal dilution of precision\n\
float64 hdop\n\
\n\
# Vertical dilution of precision\n\
float64 vdop\n\
\n\
# Temporal dilution of precision\n\
float64 tdop\n\
\n\
# Spherical position uncertainty (meters) [epe]\n\
float64 err\n\
\n\
# Horizontal position uncertainty (meters) [eph]\n\
float64 err_horz\n\
\n\
# Vertical position uncertainty (meters) [epv]\n\
float64 err_vert\n\
\n\
# Track uncertainty (degrees) [epd]\n\
float64 err_track\n\
\n\
# Ground speed uncertainty (meters/second) [eps]\n\
float64 err_speed\n\
\n\
# Vertical speed uncertainty (meters/second) [epc]\n\
float64 err_climb\n\
\n\
# Temporal uncertainty [ept]\n\
float64 err_time\n\
\n\
# Orientation uncertainty (degrees)\n\
float64 err_pitch\n\
float64 err_roll\n\
float64 err_dip\n\
\n\
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

  static const char* value(const  ::gps_common::GPSFix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::gps_common::GPSFix_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::gps_common::GPSFix_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gps_common::GPSFix_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.latitude);
    stream.next(m.longitude);
    stream.next(m.altitude);
    stream.next(m.track);
    stream.next(m.speed);
    stream.next(m.climb);
    stream.next(m.pitch);
    stream.next(m.roll);
    stream.next(m.dip);
    stream.next(m.time);
    stream.next(m.gdop);
    stream.next(m.pdop);
    stream.next(m.hdop);
    stream.next(m.vdop);
    stream.next(m.tdop);
    stream.next(m.err);
    stream.next(m.err_horz);
    stream.next(m.err_vert);
    stream.next(m.err_track);
    stream.next(m.err_speed);
    stream.next(m.err_climb);
    stream.next(m.err_time);
    stream.next(m.err_pitch);
    stream.next(m.err_roll);
    stream.next(m.err_dip);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GPSFix_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gps_common::GPSFix_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::gps_common::GPSFix_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "track: ";
    Printer<double>::stream(s, indent + "  ", v.track);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "climb: ";
    Printer<double>::stream(s, indent + "  ", v.climb);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "dip: ";
    Printer<double>::stream(s, indent + "  ", v.dip);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "gdop: ";
    Printer<double>::stream(s, indent + "  ", v.gdop);
    s << indent << "pdop: ";
    Printer<double>::stream(s, indent + "  ", v.pdop);
    s << indent << "hdop: ";
    Printer<double>::stream(s, indent + "  ", v.hdop);
    s << indent << "vdop: ";
    Printer<double>::stream(s, indent + "  ", v.vdop);
    s << indent << "tdop: ";
    Printer<double>::stream(s, indent + "  ", v.tdop);
    s << indent << "err: ";
    Printer<double>::stream(s, indent + "  ", v.err);
    s << indent << "err_horz: ";
    Printer<double>::stream(s, indent + "  ", v.err_horz);
    s << indent << "err_vert: ";
    Printer<double>::stream(s, indent + "  ", v.err_vert);
    s << indent << "err_track: ";
    Printer<double>::stream(s, indent + "  ", v.err_track);
    s << indent << "err_speed: ";
    Printer<double>::stream(s, indent + "  ", v.err_speed);
    s << indent << "err_climb: ";
    Printer<double>::stream(s, indent + "  ", v.err_climb);
    s << indent << "err_time: ";
    Printer<double>::stream(s, indent + "  ", v.err_time);
    s << indent << "err_pitch: ";
    Printer<double>::stream(s, indent + "  ", v.err_pitch);
    s << indent << "err_roll: ";
    Printer<double>::stream(s, indent + "  ", v.err_roll);
    s << indent << "err_dip: ";
    Printer<double>::stream(s, indent + "  ", v.err_dip);
  }
};


} // namespace message_operations
} // namespace ros

#endif // GPS_COMMON_MESSAGE_GPSFIX_H
