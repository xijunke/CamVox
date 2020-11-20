// Generated by gencpp from file inertial_sense/INL2States.msg
// DO NOT EDIT!


#ifndef INERTIAL_SENSE_MESSAGE_INL2STATES_H
#define INERTIAL_SENSE_MESSAGE_INL2STATES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace inertial_sense
{
template <class ContainerAllocator>
struct INL2States_
{
  typedef INL2States_<ContainerAllocator> Type;

  INL2States_()
    : header()
    , quatEcef()
    , velEcef()
    , posEcef()
    , gyroBias()
    , accelBias()
    , baroBias(0.0)
    , magDec(0.0)
    , magInc(0.0)  {
    }
  INL2States_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , quatEcef(_alloc)
    , velEcef(_alloc)
    , posEcef(_alloc)
    , gyroBias(_alloc)
    , accelBias(_alloc)
    , baroBias(0.0)
    , magDec(0.0)
    , magInc(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _quatEcef_type;
  _quatEcef_type quatEcef;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velEcef_type;
  _velEcef_type velEcef;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _posEcef_type;
  _posEcef_type posEcef;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroBias_type;
  _gyroBias_type gyroBias;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _accelBias_type;
  _accelBias_type accelBias;

   typedef float _baroBias_type;
  _baroBias_type baroBias;

   typedef float _magDec_type;
  _magDec_type magDec;

   typedef float _magInc_type;
  _magInc_type magInc;





  typedef boost::shared_ptr< ::inertial_sense::INL2States_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inertial_sense::INL2States_<ContainerAllocator> const> ConstPtr;

}; // struct INL2States_

typedef ::inertial_sense::INL2States_<std::allocator<void> > INL2States;

typedef boost::shared_ptr< ::inertial_sense::INL2States > INL2StatesPtr;
typedef boost::shared_ptr< ::inertial_sense::INL2States const> INL2StatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inertial_sense::INL2States_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inertial_sense::INL2States_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace inertial_sense

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'inertial_sense': ['/home/zyw/catkin_ws/src/isee_camvox/inertial-sense-ros/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::inertial_sense::INL2States_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inertial_sense::INL2States_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inertial_sense::INL2States_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inertial_sense::INL2States_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inertial_sense::INL2States_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inertial_sense::INL2States_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inertial_sense::INL2States_<ContainerAllocator> >
{
  static const char* value()
  {
    return "06de6b8d1957718b78007390d5c6fc67";
  }

  static const char* value(const ::inertial_sense::INL2States_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x06de6b8d1957718bULL;
  static const uint64_t static_value2 = 0x78007390d5c6fc67ULL;
};

template<class ContainerAllocator>
struct DataType< ::inertial_sense::INL2States_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inertial_sense/INL2States";
  }

  static const char* value(const ::inertial_sense::INL2States_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inertial_sense::INL2States_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header                       # GPS time of week (since Sunday morning) in seconds\n\
geometry_msgs/Quaternion quatEcef   # Quaternion body rotation with respect to ECEF\n\
geometry_msgs/Vector3 velEcef       # (m/s) Velocity in ECEF frame\n\
geometry_msgs/Vector3 posEcef       # (m) Position in ECEF frame\n\
geometry_msgs/Vector3 gyroBias      # (rad/s) Gyro bias\n\
geometry_msgs/Vector3 accelBias     # (m/s^2) Accelerometer bias\n\
float32 baroBias                    # (m) Barometer bias\n\
float32 magDec                      # (rad) Magnetic declination\n\
float32 magInc                      # (rad) Magnetic inclination\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::inertial_sense::INL2States_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inertial_sense::INL2States_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.quatEcef);
      stream.next(m.velEcef);
      stream.next(m.posEcef);
      stream.next(m.gyroBias);
      stream.next(m.accelBias);
      stream.next(m.baroBias);
      stream.next(m.magDec);
      stream.next(m.magInc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct INL2States_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inertial_sense::INL2States_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inertial_sense::INL2States_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "quatEcef: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.quatEcef);
    s << indent << "velEcef: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velEcef);
    s << indent << "posEcef: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.posEcef);
    s << indent << "gyroBias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroBias);
    s << indent << "accelBias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.accelBias);
    s << indent << "baroBias: ";
    Printer<float>::stream(s, indent + "  ", v.baroBias);
    s << indent << "magDec: ";
    Printer<float>::stream(s, indent + "  ", v.magDec);
    s << indent << "magInc: ";
    Printer<float>::stream(s, indent + "  ", v.magInc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INERTIAL_SENSE_MESSAGE_INL2STATES_H