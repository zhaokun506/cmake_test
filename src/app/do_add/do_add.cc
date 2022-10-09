#include "do_add.h"
DoAdd::DoAdd() {}

DoAdd::~DoAdd() {}

void DoAdd::GetAddResult(int a, int b) {

  std::cout << addition_.Add(a, b) << std::endl;
}
