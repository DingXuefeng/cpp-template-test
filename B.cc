/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/26/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#include "B.h"
#include <iostream>

namespace Test {
  template<Type type, int N>
  void Run<type,N>::run() {
      std::cout << "Type: [" << static_cast<int>(type) << "] (" << N << ")" << std::endl;
  };

  template<int N>
  class Run<Type::a, N> {
    static void run() {
      std::cout << "Type a" << N << std::endl;
    }// namespace Test
  };

  template<int N>
  class Run<Type::b, N> {
    static void run() {
      std::cout << "Type b" << N << std::endl;
    }
  };

  template class Run<Type::c,9>;
  template class Run<Type::a,3>;
}// namespace Test