/* Name: Ishaan Varma
   Date: 1/17/2023
   Purpose: Where the program is run.
 */
#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

int main() {
  //create character arrays to hold the first and last names of students
  char firstName[60];
  char lastName[60];
  //initialize a student and a node, the node will be the next for another node
  strcpy(firstName, "Ishaan");
  strcpy(lastName, "Varma");
  Student* student1 = new Student(firstName, lastName, 418487, 4.00);
  Node* second = new Node(student1, NULL);
  //initialize the second student and node, and make the node that was already created the next node for the new node that is created
  strcpy(firstName, "Henry");
  strcpy(lastName, "John");
  Student* student2 = new Student(firstName, lastName, 234234, 3.55);
  Node* first = new Node(student2, second);
  //printing things to see if the program works
  cout << "student1 first name: "<< student1->firstName << endl;
  cout << first->getStudent()->firstName; 
  return 0;
}
