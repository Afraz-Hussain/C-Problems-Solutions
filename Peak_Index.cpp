//852. Peak Index in a Mountain Array
#include<iostream>
using namespace std;
int Bs(int arr[],int size){
    int start=1;
    int end=size-2;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid]){
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
    
int arr[6]={0,10,5,2};
int size=6;
int res=Bs(arr,size);
if(res){
cout<<"Peak of a mountain is "<<res<<endl;
}
    return 0;
}
