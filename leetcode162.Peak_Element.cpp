//162..Find Peak Element
#include<iostream>
using namespace std;
int Bs(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
         if(arr[mid]<arr[mid+1]){
            start=mid+1;
         }
         else{
            end=mid-1;
         }
    }
    return -1;
}
int main()
{
    int arr[5]={1,0,4,3,2};
    int size=5;
    int res=Bs(arr,size);
    if(!res){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}
