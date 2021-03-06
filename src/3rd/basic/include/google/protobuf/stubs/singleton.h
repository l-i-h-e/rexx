
#ifndef GOOGLE_PROTOBUF_STUBS_SINGLETON_H__
#define GOOGLE_PROTOBUF_STUBS_SINGLETON_H__

#include <google/protobuf/stubs/atomicops.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>

namespace google {
namespace protobuf {
namespace internal {
template<typename T>
class Singleton {
 public:
  static T* get() {
    GoogleOnceInit(&once_, &Singleton<T>::Init);
    return instance_;
  }
  static void ShutDown() {
    delete instance_;
    instance_ = NULL;
  }
 private:
  static void Init() {
    instance_ = new T();
  }
  static ProtobufOnceType once_;
  static T* instance_;
};

template<typename T>
ProtobufOnceType Singleton<T>::once_;

template<typename T>
T* Singleton<T>::instance_ = NULL;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_STUBS_SINGLETON_H__
