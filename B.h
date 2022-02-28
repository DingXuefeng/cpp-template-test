/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/26/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#ifndef CPP_TEMPLATE_TEST_B_H
#define CPP_TEMPLATE_TEST_B_H

namespace Test {
  enum class Type { a, b, c, d, e };
  template<Type type,int N> struct Run {
    static void run();
  };
}

#endif//CPP_TEMPLATE_TEST_B_H
