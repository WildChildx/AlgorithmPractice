//deletion of element form linked list
#include<iostream>

#include<string>

using namespace std;

class node {
  int data;
  node * next;
  public:
    node * createList();
  void printList(node * x);
  node * deletefirst(node * x);
  void deleteLast(node * x);
  node *deleteSpecific(node *x);

};

node * node::createList() {
  node * head, * one, * two, * three, * four,*five , * temp;
  head = new node();
  one = new node();
  two = new node();
  three = new node();
  four = new node();
  five = new node();
  //linking nodes
  head -> data = 0;
  head -> next = one;
  one -> data = 1;
  one -> next = two;
  two -> data = 2;
  two -> next = three;
  three -> data = 3;
  three -> next = four;
  four -> data = 4;
  four -> next = five;
  five -> data = 5;
  five -> next = NULL;
  cout << "\nPrinting list ..." << endl;
  return head; //returns the head node
}

void node::printList(node * head) {
  while (head != NULL) {
    cout << head -> data << " ";
    head = head -> next;
  }
  cout << endl;
}

//delete first node
node * node::deletefirst(node * head) {
  node * temp;
  temp = head;
  head = head -> next;
  free(temp);
  cout << "\nDeleting first node ..." << endl;
  return head; //returns the new head node

}

//delete last node 
void node::deleteLast(node * head) {
  node * temp = head, * prev;
  while (temp -> next != NULL) {
    prev = temp;
    temp = temp -> next;
  }
  delete(prev -> next);
  prev -> next = NULL;
  cout << "\nDeleting last node ..." << endl;
}

//deletes the node at the given position 
node *node::deleteSpecific(node * head){
  node *temp,*prev; int pos,i=0;
  temp = head;
  cout<<"Enter position you want to enter \n";
  cin>>pos;
  if(pos == 1){                 // if the node is first node
    head = head -> next;
    free(temp);
    return head;
  }
  while(i<pos-1){
    prev = temp;
    temp = temp -> next;
    i++;
  }
  prev -> next = temp -> next;   //updating the address of the previous node
  free(temp);
  return head;
}
int main() {

  node obj;
  node * head = obj.createList();
  obj.printList(head);
  node * newhead = obj.deletefirst(head); //stores the newhead parameter
  obj.printList(newhead);
  obj.deleteLast(newhead);
  obj.printList(newhead);
  node *Newhead = obj.deleteSpecific(newhead);
  obj.printList(Newhead);  
  return 0;
}