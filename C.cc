/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/28/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/
#include <iostream>
#include "C.h"
namespace C {
  template<class T>
  static void job(T x) {
    std::cout << x << std::endl;
  }
  template<>
  void A::special<double>(double x) {
    job<double>(x);
  }
  template<>
  void A::special<std::string>(std::string x) {
    job<std::string>(x);
  }

}// namespace C