#include <string>
#ifndef _person_h
#define _person_h
class Person {
private:
  std::string firstname;
  std::string lastname;
  int age;

public:
  Person(std::string first,
    std::string last,
    int agenum);
  std::string GetName();
  int GetNumber() {return age;}
  void SetNumber(int number) {age = number;}
  bool operator<(Person& p);
  bool operator<(int i);
};

bool operator<(int i, Person& p);
#endif
