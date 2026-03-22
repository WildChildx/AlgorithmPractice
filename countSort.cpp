#include<iostream>
using namespace std;
//count sort
void countSort(int arr[],int size){
    //traverse through give array and find largest integer
    int i=0,k=arr[0];
    for(i=0;i<size;i++){
        k=max(k,arr[i]);
    }
    //make the count array
    int count[10]={0};
    for(i=0;i<k;i++){
        count[arr[i]]++;
    }
    //modify the count array and convert it into position array
    for(i=0;i<k;i++){
        count[i]+=count[i-1]; //this is position array
    }

    //create output array
    int output[10]={0};
    //predecrement the count array and then save that value to the ouput array
    for(i=size-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    for(i=0;i<size;i++){
        cout<<output[i]<<"\t";
    }
}
int main(){
    int arr[]={1,2,4,1,2,6,4,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the size of array is ="<<n<<"\n";
    countSort(arr,n);
    return 0;
}