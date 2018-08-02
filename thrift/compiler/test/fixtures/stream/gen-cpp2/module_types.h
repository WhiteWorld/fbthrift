/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class FooEx;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class FooEx final : private apache::thrift::detail::st::ComparisonOperators<FooEx>, public apache::thrift::TException {
 public:

  FooEx() {}
  // FragileConstructor for use in initialization lists only.
  FooEx(apache::thrift::FragileConstructor);

  FooEx(FooEx&&) = default;

  FooEx(const FooEx&) = default;

  FooEx& operator=(FooEx&&) = default;

  FooEx& operator=(const FooEx&) = default;
  void __clear();
  bool operator==(const FooEx& rhs) const;
  bool operator<(const FooEx& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return " ::cpp2::FooEx";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< FooEx >;
};

void swap(FooEx& a, FooEx& b);
extern template void FooEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t FooEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t FooEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t FooEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void FooEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t FooEx::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t FooEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t FooEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t FooEx::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::FooEx>::clear( ::cpp2::FooEx* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::FooEx>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::FooEx>::write(Protocol* proto,  ::cpp2::FooEx const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::FooEx>::read(Protocol* proto,  ::cpp2::FooEx* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::FooEx>::serializedSize(Protocol const* proto,  ::cpp2::FooEx const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::FooEx>::serializedSizeZC(Protocol const* proto,  ::cpp2::FooEx const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
