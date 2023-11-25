#include<iostream>
using namespace std;
/*
void print(int* arr, int size) {
	cout << "Printing Array...\n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

bool RecursiveBinarySearch(int arr[], int start, int end, int key) {
	

	if (start > end) {
		return false;
	}
	int mid = (start + end) / 2;
	if (arr[mid] == key) {
		return true;
	}
	else if (arr[mid] < key) {
		RecursiveBinarySearch(arr, mid + 1, end, key);
	}
	else if (arr[mid] > key) {
		RecursiveBinarySearch(arr, start, end-1, key);
	}
}
int main()
{
	int arr[6] = { 2,4,6,10,14,16 };
	int size = 6;
	int key = 6;
	cout << "present or not " << RecursiveBinarySearch(arr, 0, 6, key) << endl;
	return 0;
}
