/// @file
/// @brief This is a sample file for testing doxygen and plantuml with CMake.

#ifndef __SAMPLE_H_INCL__
#define __SAMPLE_H_INCL__

#include <cstdint>

#pragma pack(push)
#pragma pack(8)

namespace N {

// @startuml
// @enduml
// class A

/// @brief  This is a sample base class.
class A
{
public:
   /// @brief This is a sample constructor.
   virtual ~A() {}

protected:
   /// @brief This is a sample function.
   /// @return This is a sample return value.
   virtual int32_t func() const = 0;
};

/// @brief  This is a sample derived class.
class B : public A
{
public:
   /// @brief  This is a sample function.
   /// @return This is a sample return value.
   virtual int32_t func() const override;
};

} // namespace N

#pragma pack(pop)

#endif // #ifndef __SAMPLE_H_INCL__
