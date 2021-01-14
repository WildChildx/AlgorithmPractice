//bubble sort algorithm
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *a = temp;
}

void bubblesort(int arr[],int length){
    int i=0;
    for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(arr[j]<arr[i])
                swap(&arr[i],&arr[j]);
        }
    }
   
}

void print(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int arr[]={12,45,76,234,809},length=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,length);
     print(arr,length);
    return 0;
}