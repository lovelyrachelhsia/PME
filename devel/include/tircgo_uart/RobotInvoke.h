// Generated by gencpp from file tircgo_uart/RobotInvoke.msg
// DO NOT EDIT!


#ifndef TIRCGO_UART_MESSAGE_ROBOTINVOKE_H
#define TIRCGO_UART_MESSAGE_ROBOTINVOKE_H

#include <ros/service_traits.h>


#include <tircgo_uart/RobotInvokeRequest.h>
#include <tircgo_uart/RobotInvokeResponse.h>


namespace tircgo_uart
{

struct RobotInvoke
{

typedef RobotInvokeRequest Request;
typedef RobotInvokeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RobotInvoke
} // namespace tircgo_uart


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tircgo_uart::RobotInvoke > {
  static const char* value()
  {
    return "3fb5b8bd341accb019477d3b6414a198";
  }

  static const char* value(const ::tircgo_uart::RobotInvoke&) { return value(); }
};

template<>
struct DataType< ::tircgo_uart::RobotInvoke > {
  static const char* value()
  {
    return "tircgo_uart/RobotInvoke";
  }

  static const char* value(const ::tircgo_uart::RobotInvoke&) { return value(); }
};


// service_traits::MD5Sum< ::tircgo_uart::RobotInvokeRequest> should match
// service_traits::MD5Sum< ::tircgo_uart::RobotInvoke >
template<>
struct MD5Sum< ::tircgo_uart::RobotInvokeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tircgo_uart::RobotInvoke >::value();
  }
  static const char* value(const ::tircgo_uart::RobotInvokeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tircgo_uart::RobotInvokeRequest> should match
// service_traits::DataType< ::tircgo_uart::RobotInvoke >
template<>
struct DataType< ::tircgo_uart::RobotInvokeRequest>
{
  static const char* value()
  {
    return DataType< ::tircgo_uart::RobotInvoke >::value();
  }
  static const char* value(const ::tircgo_uart::RobotInvokeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tircgo_uart::RobotInvokeResponse> should match
// service_traits::MD5Sum< ::tircgo_uart::RobotInvoke >
template<>
struct MD5Sum< ::tircgo_uart::RobotInvokeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tircgo_uart::RobotInvoke >::value();
  }
  static const char* value(const ::tircgo_uart::RobotInvokeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tircgo_uart::RobotInvokeResponse> should match
// service_traits::DataType< ::tircgo_uart::RobotInvoke >
template<>
struct DataType< ::tircgo_uart::RobotInvokeResponse>
{
  static const char* value()
  {
    return DataType< ::tircgo_uart::RobotInvoke >::value();
  }
  static const char* value(const ::tircgo_uart::RobotInvokeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TIRCGO_UART_MESSAGE_ROBOTINVOKE_H