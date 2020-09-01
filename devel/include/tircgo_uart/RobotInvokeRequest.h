// Generated by gencpp from file tircgo_uart/RobotInvokeRequest.msg
// DO NOT EDIT!


#ifndef TIRCGO_UART_MESSAGE_ROBOTINVOKEREQUEST_H
#define TIRCGO_UART_MESSAGE_ROBOTINVOKEREQUEST_H


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
struct RobotInvokeRequest_
{
  typedef RobotInvokeRequest_<ContainerAllocator> Type;

  RobotInvokeRequest_()
    : header()
    , operation(0)
    , argument()  {
    }
  RobotInvokeRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , operation(0)
    , argument(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _operation_type;
  _operation_type operation;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _argument_type;
  _argument_type argument;





  typedef boost::shared_ptr< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RobotInvokeRequest_

typedef ::tircgo_uart::RobotInvokeRequest_<std::allocator<void> > RobotInvokeRequest;

typedef boost::shared_ptr< ::tircgo_uart::RobotInvokeRequest > RobotInvokeRequestPtr;
typedef boost::shared_ptr< ::tircgo_uart::RobotInvokeRequest const> RobotInvokeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator1> & lhs, const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.operation == rhs.operation &&
    lhs.argument == rhs.argument;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator1> & lhs, const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tircgo_uart

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25a35ca13096b4101a9058e94d79f627";
  }

  static const char* value(const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25a35ca13096b410ULL;
  static const uint64_t static_value2 = 0x1a9058e94d79f627ULL;
};

template<class ContainerAllocator>
struct DataType< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tircgo_uart/RobotInvokeRequest";
  }

  static const char* value(const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"char operation\n"
"int16[] argument\n"
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

  static const char* value(const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.operation);
      stream.next(m.argument);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotInvokeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tircgo_uart::RobotInvokeRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "operation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.operation);
    s << indent << "argument[]" << std::endl;
    for (size_t i = 0; i < v.argument.size(); ++i)
    {
      s << indent << "  argument[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.argument[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TIRCGO_UART_MESSAGE_ROBOTINVOKEREQUEST_H
