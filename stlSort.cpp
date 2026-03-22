#include<iostream>
#include<algorithm>
using namespace std;
void show(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"\n Array before sorting :\n";
    show(a,size);
    sort(a,a+size);
    cout<<"\n Array after sorting :\n";
    show(a,size);

}