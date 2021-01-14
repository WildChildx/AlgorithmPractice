#include<iostream>
#include<vector>
using namespace std;
int main(){
    //program to form list and iterate throught it using iterator
    vector<int>list;   //list declaration of type int
    vector<int>::iterator itr;    //declaring iterator
    cout<<"Enter 10 numbers :";
    for(int i=0;i<10;i++){  //forming the list of 10 elements
        int t;
        cin>>t;
        list.push_back(t); //appending element to the list
    }
    //list is formed
    cout<<"\nPrinting the list :";
    for(itr = list.begin();itr<list.end();itr++){
        cout<<*itr<<" ";
    }
}