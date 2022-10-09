#pragma once
#include "common/subtraction.h"
#include <iostream>
class DoSub {
public:
  DoSub();
  ~DoSub();
  void GetSubResult(int a, int b);

private:
  Subtraction subtraction_;
};