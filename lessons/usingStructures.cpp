#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
};

class LinkedList {
 public:
  Node* head;
  Node* tail;

  LinkedList() {
    head = NULL;
    tail = NULL;
  }

  void insert(int data, int index) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
      tail = newNode;
      return;
    }

    if (index == 0) {
      newNode->next = head;
      head = newNode;
      return;
    }

    Node* current = head;
    for (int i = 0; i < index - 1; i++) {
      current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
  }
};

int main() {
  LinkedList list;
  list.insert(1, 0);
  list.insert(2, 1);
  list.insert(3, 2);

  Node* current = list.head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  return 0;
}
