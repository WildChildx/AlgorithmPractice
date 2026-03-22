#include <iostream>
using namespace std;

//the swapping function
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//the partition function
int partition(int arr[],int lb,int ub){
    int start=lb,end=ub,pivot=arr[lb];
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>=pivot){
            end--;
        }
    if(arr[start]>=arr[end]){
        swap(&arr[start],&arr[end]);
    }
    }
    swap(&arr[end],&pivot);
    return end;
}

//the quicksort function
void quicksort(int arr[],int lb, int ub){
    int location = partition(arr,lb,ub);  //location of pivot element 
    quicksort(arr,lb,location-1);   //calling quicksort recursively
    quicksort(arr,location+1,ub);
}

void printarray(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={12,34,23,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lb=0,ub=n;
    quicksort(arr,lb,ub);
    printarray(arr,n);
    return 0;
}