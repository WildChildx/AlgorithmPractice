//this code will explain all about pointers
#include<iostream>
using namespace std;

int main(){
    int a = 100;
    int *ptr = &a;
    int **ptr_ref = &ptr;
    //prints the address of a
    cout<<"The address of a is "<<ptr<<endl;
    //prints the value of a
    //dereferencing 
    cout<<"The value of a is "<<*ptr<<endl;
    //address of pointer variable
    cout<<"The address of the ptr is "<<&ptr<<endl;
    //print address of pointer using pointer of pointer
    cout<<"The address stored in ptr of ptr is "<<ptr_ref<<endl;
    //printing the value stored in the ptr using ptr_ref 
    cout<<"The value stored in that address is "<<*ptr_ref<<endl;
    //prints the value of the address stored in ptr using ptr_ref
    cout<<"The value stored in the address of the address is "<<**ptr_ref<<endl;
    return 0;
}