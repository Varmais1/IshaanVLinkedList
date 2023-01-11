#include <cstring>
#include "Student.h"

class Node {
 public:
  Node();
  Node(Student* nstudent, Node* nnext);
  Student* getStudent();
  Node* getNext();
  void setNext(Node* nnext);
 private:
  Student* student;
  Node* next;
}
