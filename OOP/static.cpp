#include <cassert>

class Foo {
 public:
  static int count;
  Foo() { count += 1; }
};

int Foo::count = 0;

int main() {
  Foo f{};
  assert(f.count == 1);
}