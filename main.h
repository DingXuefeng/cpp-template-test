/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Insitute: Department of Physics, Princeton University
// Date: 2/12/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#ifndef CPP_TEMPLATE_TEST_MAIN_H
#define CPP_TEMPLATE_TEST_MAIN_H

#include <string>
#include <map>
class A {
public:
  void set(const std::string& key, const std::string &v);
  template<typename T = std::string> T get(const std::string &key) const;
private:
  std::map<std::string,std::string> m_data;
};

#endif // CPP_TEMPLATE_TEST_MAIN_H
