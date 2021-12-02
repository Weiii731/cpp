#include <cassert>
#include <stdexcept>
#include <string>
using std::string;

// TODO: Define "Student" class
class Student {
 public:
  // constructor
  Student(string name, int grade, float gpa) : name_(name), grade_(grade), GPA_(gpa) {
      Validate();
  }
  // accessors
  string getName() const {return name_;}
  int getGrade() const {return grade_;}
  float getGPA() const {return GPA_;}
  // mutators
  void setName(string name) {
      name_ = name;
      Validate();
  }

  void setGrade(int grade) {
      grade_ = grade;
      Validate();
  }

  void setGPA(int gpa) {
      GPA_ = gpa;
      Validate();
  }
 private:
  // name
  // grade
  // GPA
  string name_;
  int grade_;
  float GPA_;
  void Validate() {
      if (grade_ <= 0 || grade_ > 12) {
          throw std::invalid_argument("Grade entered is invalid");
      }
      if (GPA_ < 0.0 || GPA_ > 4.0) {
          throw std::invalid_argument("GPA can't be negative or GPA can't be higher than 4.0");
      }
  }
};

// TODO: Test
int main() 
{
  Student student("Weiyang Li", 12, 4.0);
  assert(student.getName() == "Weiyang Li");
  assert(student.getGrade() == 12);
  assert(student.getGPA() == 4.0);

  bool flag = false;
  try {
      Student invalid("Weiyang Lin", 13, 5.5);
  } catch(...) {
      flag = true;
  }
  assert(flag);
}