// //creating the data structure called linked list using classes
// #include<iostream>
// #include<string>
// using namespace std;
// class node{
//    public: 
//    int data;
//    node *next; //create the pointer of same datatype 
// };
// //driver code
// int main(){
//     //declare three pointers with the datatype node
//     // node *head,*first,*second,*third;
//     // //create  four nodes dynamically using new keyword
//     // //allocate fresh memory location to three pointers
//     // head = new node();
//     // first = new node();
//     // second = new node();
//     // third = new node();
//     // //fill the data in each node and link them with each other using arrow operator
//     // head->data = 0;
//     // // head->next = first;

//     // //node 2
//     // first->data = 1;
//     // first->next = second;

//     // //node 3
//     // second->data = 2;
//     // second ->next = third;

//     // //node 4
//     // third->data = 3;
//     // third->next = NULL;    

//     // //insert node at the start
//     // cout<<"Here the node 4 is inserted at the start \n";
//     // //create new node
//     // node *fourth;
//     // fourth = new node();
//     // head->next = fourth;
//     // fourth->data = 4;
//     // fourth->next = first;

//     node *head,*first,*second;

//     head = new node();
//     first = new node();
//     second = new node();

//     head->data = 0;
//     head->next = first;

//     first->data = 1;
//     first->next = second;

//     second->data = 2;
//     second->next = NULL;

//     //insert the node at the end

//     // node *third;
//     // third = new node();

//     // second->next = third;

//     // third->data = 3;
//     // third->next = NULL;

//     //reverse the linked list


    
//     //     //print the linked list
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         if(head->next==NULL)
//             cout<<endl;
//         head = head->next;
//     }
    
//         return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node *createList();
        void printList(node *x);
        node *head, *one ,*two,*three,*temp;
};

node * node::createList(){
    node *head, *one ,*two,*three,*temp;
    head = new node();
    one = new node();
    two = new node();
    three = new node();
    //linking nodes
    head->data = 0;
    head->next = one;
    one->data = 1;
    one->next = two;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = NULL;
    return head;
}

void node ::printList(node *head){
        cout<<"print list :\n";
        while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){

    node obj;
    node *headPointer = obj.createList();
    obj.printList(headPointer);
    return 0;
}