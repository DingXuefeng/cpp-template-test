/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/27/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#ifndef CPP_TEMPLATE_TEST_C_TPP
#define CPP_TEMPLATE_TEST_C_TPP

namespace C {
  template<class T>
  std::map<std::string, T> A::store<T>::m = {};

  template<class T>
  void A::set(std::string key, T value) {
    store<T>::m[key] = value;
  }

  template<class T>
  T A::get(std::string key) {
    return store<T>::m.at(key);
  }
}// namespace C

#endif