#include<iostream>
using namespace std;

void doswap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubblesort(int arr[], int size) {
	//this loop will iterate from 0 to size-1
	for (int i = 0; i < size; i++) {
		bool isswapped = false;
		//This loop will compare adjucent variables if greater than swap
		for (int j = 0; j < size - i - 1; j++) {
			//Ascending order 
			if (arr[j] > arr[j + 1]) {
				doswap(arr[j], arr[j + 1]);
				isswapped = true;
			}
		}
		if (isswapped == false) {
			break;
		}
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}
int main() {
	int data[5] = { 0,-2,45,11,-9 };
	int size = 5;
	bubblesort(data, size);
	cout << "Sorted array is\n ";
	printArray(data, size);
}