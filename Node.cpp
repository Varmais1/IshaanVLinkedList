#include "Node.h"
#include <iostream>

Node::Node() {
  student = NULL;
  next = NULL;
}

Node::Node(Student* nstudent, Node* nnext) {
  student = nstudent;
  next = nnext;
}

Student* Node::getStudent() {
  return student;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* nnext) {
  next = nnext;
}
