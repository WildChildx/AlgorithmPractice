//the program to create the linked list dynamically 
// here the user will send data and the new head node will be added to the list
#include<iostream>
using namespace std;
class node{
    public:
    int data; 
    node *next;
    void pushHead(node **x);
    void printList(node * x);
};

void node::printList(node * head) {
  cout<<"\nUpdated linked list :\n";
  while (head != NULL) {
    cout << head -> data << " ";
    head = head -> next;
  }
  cout << endl;
}

void node :: pushHead(node **head_ref){    //head reference pointer store the address of the head node
    int new_data;
    cout<<"\nEnter data for the new node :";
    cin>>new_data;
    //create new node
    node *new_node;                              //new_data is taken from the user
    new_node = new node();
    new_node -> data = new_data;
    new_node -> next = *head_ref;       //address of previous head node
    *head_ref = new_node;
}


int main(){
    node obj, *head;
    head = new node();
    head -> data = 0;
    int n;
    cout<<"\nHow many nodes you want to create :";
    cin>>n;
  for(int i=0;i<n;i++){
    obj.pushHead(&head);
    obj.printList(head); 
  }   
    return 0;
}