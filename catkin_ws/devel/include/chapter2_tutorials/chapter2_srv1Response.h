// Generated by gencpp from file chapter2_tutorials/chapter2_srv1Response.msg
// DO NOT EDIT!


#ifndef CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_SRV1RESPONSE_H
#define CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_SRV1RESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chapter2_tutorials
{
template <class ContainerAllocator>
struct chapter2_srv1Response_
{
  typedef chapter2_srv1Response_<ContainerAllocator> Type;

  chapter2_srv1Response_()
    : sum(0)  {
    }
  chapter2_srv1Response_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> const> ConstPtr;

}; // struct chapter2_srv1Response_

typedef ::chapter2_tutorials::chapter2_srv1Response_<std::allocator<void> > chapter2_srv1Response;

typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_srv1Response > chapter2_srv1ResponsePtr;
typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_srv1Response const> chapter2_srv1ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chapter2_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'chapter2_tutorials': ['/home/hyungseok_kim/dev/catkin_ws/src/chapter2_tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ba699c25c9418c0366f3595c0c8e8ec";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
  static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
};

template<class ContainerAllocator>
struct DataType< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chapter2_tutorials/chapter2_srv1Response";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 sum\n\
";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct chapter2_srv1Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chapter2_tutorials::chapter2_srv1Response_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_SRV1RESPONSE_H
