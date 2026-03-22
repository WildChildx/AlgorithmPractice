#include<iostream>
using namespace std;
class node{    //setting up a static linked list
    public:
    int data;
    node *next;
    node * createList();
    void printList(node *ptr);
    node * reverseList(node *ptr);
};

node *node :: createList(){
    node *head , *first , *second , *third ; //declaring pointers
    //creating nodes
    head = new node(); first = new node(); second = new node();third = new node();
    //linking the nodes
    head -> data = 0;
    head -> next = first;
    first -> data = 1;
    first -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;
    cout<<"List created !";
    return head;
    }

void node::printList(node *head_ref){
    cout<<"\nPrinting the list ...\n";
    while(head_ref!=NULL){
        cout<<head_ref -> data<<" ";
        head_ref = head_ref -> next;
    }
    cout<<endl;
}

node * node :: reverseList(node *head){
    //source logic gfg
    //create three pointers 
    node *prev = NULL , *cur = head,*next = NULL,*new_head;
    while(cur!=NULL){
    //set the next node
    next = cur -> next;
    //current node is the head node
    cur -> next = prev;
    //move to next node 
    prev = cur ;
    cur = next ;
    //current goes to NULL and prev remains before it
    }
    //previous node will become the new head
    new_head = prev;
    cout<<"\nLinked list reversed ...\n";
    return new_head;
}

//driver code
int main(){
    node obj;
    node *head = obj.createList();
    obj.printList(head);
    node *new_head = obj.reverseList(head);
    obj.printList(new_head);
    return 0;
}