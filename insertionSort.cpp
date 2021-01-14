//insertion sort algorithm
//here the pro is no swap function required
#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int i,temp,j;
    for(i=1;i<n;i++){
    temp = arr[i];
    j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {71,62,53,44,35,26,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}