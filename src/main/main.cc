//#pragma once
//#include "app/do_add/do_add.h"
//#include "app/do_sub/do_sub.h"
#include "app/do_add/do_add.h"
#include "app/do_sub/do_sub.h"
#include "common/addition.h"
#include "common/subtraction.h"

#include <iostream>
#include <memory>
using namespace std;
int main(int argc, char const *argv[]) {
  /* code */

  int a = 10;
  int b = 5;
  auto ptr_add = std::make_unique<Addition>();
  auto ptr_sub = std::make_unique<Subtraction>();

  cout << "直接调用加法" << ptr_add->Add(a, b) << endl;
  cout << "直接调用减法" << ptr_sub->Sub(a, b) << endl;

  auto ptr_app_add = std::make_unique<DoAdd>();
  auto ptr_app_sub = std::make_unique<DoSub>();

  ptr_app_add->GetAddResult(10, 5);
  ptr_app_sub->GetSubResult(10, 5);

  return 0;
}
