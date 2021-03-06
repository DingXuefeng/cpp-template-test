/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Insitute: Department of Physics, Princeton University
// Date: 2/12/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/
#include "main.h"
#include <iostream>
void A::set(const std::string &key, const std::string &v) { m_data[key] = v; }
template<typename T>
T convert(const std::string &v) {
  static_assert(std::is_same<T, double>::value ||
                        std::is_same<T, std::string>::value,
                "Only std::string and double are allowed");
  return v;
}

template<>
double convert(const std::string &v) { return std::stod(v); }

template<typename T>
T A::get(const std::string &key) const {
  if (m_data.find(key) != m_data.end()) {
    return convert<T>(m_data.at(key));
  } else {
    return T();
  }
}

#include "B.h"
void testA();
void testB();
#include "C.h"
void testC();

int main(int argc, char **argv) {
  testA();
  testB();
  testC();
  return 0;
}

void testA() {
  A a;
  a.set("a", "93");
  a.set("b", "abc");
  std::cout << a.get("a") << " " << a.get("b") << " " << a.get<double>("a")
            << std::endl;
}

void testB() {
  Test::Run<Test::Type::a, 3>::run();
  Test::Run<Test::Type::c, 9>::run();
}

void testC() {
  C::A a;
  a.set("A", "hi");
  a.set("A", std::string("hi"));
  a.set("A", 13);
  a.set("A", 1.5);
  a.set("B", 1.5);
  std::cout << a.get<const char *>("A") << std::endl;
  a.special(3.);
  a.special(std::string("yes"));
}