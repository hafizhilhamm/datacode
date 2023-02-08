// Generated by gencpp from file pkg/pertambahanRequest.msg
// DO NOT EDIT!


#ifndef PKG_MESSAGE_PERTAMBAHANREQUEST_H
#define PKG_MESSAGE_PERTAMBAHANREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pkg
{
template <class ContainerAllocator>
struct pertambahanRequest_
{
  typedef pertambahanRequest_<ContainerAllocator> Type;

  pertambahanRequest_()
    : a(0)
    , b(0)  {
    }
  pertambahanRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::pkg::pertambahanRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pkg::pertambahanRequest_<ContainerAllocator> const> ConstPtr;

}; // struct pertambahanRequest_

typedef ::pkg::pertambahanRequest_<std::allocator<void> > pertambahanRequest;

typedef boost::shared_ptr< ::pkg::pertambahanRequest > pertambahanRequestPtr;
typedef boost::shared_ptr< ::pkg::pertambahanRequest const> pertambahanRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pkg::pertambahanRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pkg::pertambahanRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pkg::pertambahanRequest_<ContainerAllocator1> & lhs, const ::pkg::pertambahanRequest_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pkg::pertambahanRequest_<ContainerAllocator1> & lhs, const ::pkg::pertambahanRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pkg::pertambahanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pkg::pertambahanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pkg::pertambahanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pkg::pertambahanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg::pertambahanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg::pertambahanRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pkg::pertambahanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d09b846be0b371c5f190354dd3153e";
  }

  static const char* value(const ::pkg::pertambahanRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
  static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
};

template<class ContainerAllocator>
struct DataType< ::pkg::pertambahanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pkg/pertambahanRequest";
  }

  static const char* value(const ::pkg::pertambahanRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pkg::pertambahanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n"
"int64 b\n"
;
  }

  static const char* value(const ::pkg::pertambahanRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pkg::pertambahanRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pertambahanRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pkg::pertambahanRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pkg::pertambahanRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PKG_MESSAGE_PERTAMBAHANREQUEST_H
