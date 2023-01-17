#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

int main() {
  char firstName[60];
  char lastName[60];
  strcpy(firstName, "Ishaan");
  strcpy(lastName, "Varma");
  Student* student1 = new Student(firstName, lastName, 418487, 4.00);
  Node* second = new Node(student1, NULL);
  strcpy(firstName, "Henry");
  strcpy(lastName, "John");
  Student* student2 = new Student(firstName, lastName, 234234, 3.55);
  Node* first = new Node(student2, second);
  cout << "student1 first name: "<< student1->firstName << endl;
  cout << first->getStudent()->firstName; 
  return 0;
}
