//如果调用的头文件在当前目录则不需要，写完整搜索路径
#include "do_sub.h"

DoSub::DoSub() {}
DoSub::~DoSub() {}
void DoSub::GetSubResult(int a, int b) {
  std::cout << subtraction_.Sub(a, b) << std::endl;
}