#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere {
 public:
  Sphere(int radius) : radius_(radius) {
    volume();
    validate();
  }

  int Radius() const { return radius_; }
  int Volume() const { return volume_; }

  // TODO: mutators
  void Radius(int radius) {
      radius_ = radius;
      validate();
      volume();
  }
  static float const pi_;
 private:
  int radius_;
  float volume_;
  void validate() {
      if (radius_ <= 0) throw std::invalid_argument("radius must be positive");
  }
  void volume() {
      volume_ = pi_ * 4 / 3 * pow(radius_, 3);
  }
};

float const Sphere::pi_ {3.14};
// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);

  sphere.Radius(3);
  assert(sphere.Radius() == 3);
  assert(abs(sphere.Volume() - 113.1) < 1);

  bool caught{false};
  try {
    sphere.Radius(-1);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}