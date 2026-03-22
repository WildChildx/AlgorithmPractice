#include<iostream>
using namespace std;
void getarray(int arr[],int n){
    cout<<"\nEnter 4 integer:";
    for(int i=0;i<n;i++){
        cout<<"\n Element "<<i<<":";
        cin>>arr[i];
    }
    
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y = temp;
}
void selectionsort(int arr[],int n){
    int i,j,min_ind;
    for(i=0;i<n-1;i++){     //Number of passes
        min_ind=i;
        for(j=i+1;j<n;j++){   //Number  of comparisions in each pass
            if(arr[j]<arr[min_ind]){  
                swap(&arr[min_ind],&arr[j]); //swaps the value with minimum index at that iteration 
                min_ind=j;                   //minimum index at this iteration
            }
        }

    }
}
void printarray(int arr[],int size){
    cout<<"\n";
    for(int i=0;i<size;i++){

        cout<<arr[i]<<",";
    }
}
int main(){

    int arr[]={},n=4;
    getarray(arr,n);
    // selectionsort(arr,n);
    printarray(arr,n);
    return 0;    
}