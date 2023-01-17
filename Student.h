#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include <iostream>

using namespace std;

class Student {
 public:
  char firstName[60];
  char lastName[60];
  int id;
  float GPA;
  Student();
  Student(char nfirstName[60], char nlastName[60], int nid, float nGPA);
};

#endif
