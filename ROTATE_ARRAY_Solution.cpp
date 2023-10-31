//ROTATE ARRAY IN C++
#include<iostream>
using namespace std;
void Reverse_Array(int arr[], int start, int end) {
	
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		//also do in this form....swap(arr[start],arr[end])
	}
 }
void Rotate_Array(int arr[], int size, int target) {
	target = target % 10;
	//1. REVERSE WHOLE ARRAY...
	
	Reverse_Array(arr, 0, size - 1);
	//Reverse 0 to targe-1 ...
	Reverse_Array(arr, 0, target - 1);
	//Reverse 2nd poetion 
	Reverse_Array(arr, target, size-1);
}
void printing(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int data[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(data) / sizeof(data[0]);
	int target = 3;
	Rotate_Array(data, size, target);
	printing(data, size);
}