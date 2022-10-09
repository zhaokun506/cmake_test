#pragma once

#include "common/addition.h"
#include <iostream>
class DoAdd {
public:
  DoAdd();
  ~DoAdd();
  void GetAddResult(int a, int b);

private:
  Addition addition_;
};