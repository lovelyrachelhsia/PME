// Generated by gencpp from file tircgo_uart/Lidar_level_reply.msg
// DO NOT EDIT!


#ifndef TIRCGO_UART_MESSAGE_LIDAR_LEVEL_REPLY_H
#define TIRCGO_UART_MESSAGE_LIDAR_LEVEL_REPLY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tircgo_uart
{
template <class ContainerAllocator>
struct Lidar_level_reply_
{
  typedef Lidar_level_reply_<ContainerAllocator> Type;

  Lidar_level_reply_()
    : header()
    , is_legal_op(false)
    , is_activated(false)
    , error_code(0)
    , level_reply()  {
    }
  Lidar_level_reply_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , is_legal_op(false)
    , is_activated(false)
    , error_code(0)
    , level_reply(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _is_legal_op_type;
  _is_legal_op_type is_legal_op;

   typedef uint8_t _is_activated_type;
  _is_activated_type is_activated;

   typedef int16_t _error_code_type;
  _error_code_type error_code;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _level_reply_type;
  _level_reply_type level_reply;





  typedef boost::shared_ptr< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> const> ConstPtr;

}; // struct Lidar_level_reply_

typedef ::tircgo_uart::Lidar_level_reply_<std::allocator<void> > Lidar_level_reply;

typedef boost::shared_ptr< ::tircgo_uart::Lidar_level_reply > Lidar_level_replyPtr;
typedef boost::shared_ptr< ::tircgo_uart::Lidar_level_reply const> Lidar_level_replyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator1> & lhs, const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.is_legal_op == rhs.is_legal_op &&
    lhs.is_activated == rhs.is_activated &&
    lhs.error_code == rhs.error_code &&
    lhs.level_reply == rhs.level_reply;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator1> & lhs, const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tircgo_uart

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7aa95d61bc2cb196568e05ff123f7f43";
  }

  static const char* value(const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7aa95d61bc2cb196ULL;
  static const uint64_t static_value2 = 0x568e05ff123f7f43ULL;
};

template<class ContainerAllocator>
struct DataType< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tircgo_uart/Lidar_level_reply";
  }

  static const char* value(const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"bool is_legal_op\n"
"bool is_activated\n"
"int16 error_code\n"
"int16[] level_reply\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.is_legal_op);
      stream.next(m.is_activated);
      stream.next(m.error_code);
      stream.next(m.level_reply);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lidar_level_reply_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tircgo_uart::Lidar_level_reply_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tircgo_uart::Lidar_level_reply_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "is_legal_op: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_legal_op);
    s << indent << "is_activated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_activated);
    s << indent << "error_code: ";
    Printer<int16_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "level_reply[]" << std::endl;
    for (size_t i = 0; i < v.level_reply.size(); ++i)
    {
      s << indent << "  level_reply[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.level_reply[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TIRCGO_UART_MESSAGE_LIDAR_LEVEL_REPLY_H
