#include "Student.h"
#include <cstring>

Student::Student() {
  strcpy(firstName, " ");
  strcpy(lastName, " ");
  id = 0;
  GPA = 0.00
}

Student::Student(char nfirstName[60], char nlastName[60], int nid, float nGPA) {
  strcpy(firstName,nfirstName);
  strcpy(lastName,nlastName);
  id = nid;
  GPA = nGPA;
}
