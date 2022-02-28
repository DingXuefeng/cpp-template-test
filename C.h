/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/27/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#ifndef CPP_TEMPLATE_TEST_C_H
#define CPP_TEMPLATE_TEST_C_H
#include <map>
#include <string>

namespace C {
  struct A {
    template<class T>
    void set(std::string, T t);

    template<class T>
    T get(std::string);

    template<class T>
    void special(T t) = delete;

  private:
    template<class T>
    struct store {
      static std::map<std::string, T> m;
    };
  };

  template<> void A::special<double>(double);
  template<> void A::special<std::string>(std::string);
}// namespace C

#include "C.tpp"
#endif//CPP_TEMPLATE_TEST_C_H
