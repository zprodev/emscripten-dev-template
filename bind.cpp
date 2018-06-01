#include <emscripten/bind.h>

using namespace emscripten;

int
hello(void)
{
  printf("Hello, World!\n");
  return 0;
}

EMSCRIPTEN_BINDINGS(my_module) {
  function("hello", &hello);
}
