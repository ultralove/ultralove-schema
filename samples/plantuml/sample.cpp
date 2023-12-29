
#include <iostream>

#include "config.in.h"
#include "sample.h"

int main()
{
   N::B b;
   std::cout << b.func() << std::endl;
   return 0;
}

namespace N {

int32_t B::func() const
{
   return 23;
}

} // namespace N
