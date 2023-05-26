#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return true;
		}
		
	}

	return false;
}

int main()
{

	int arr[100];
	int size = 0;
	cout << "Enter How many values you want to insert in array\n";
	cin >> size;

	cout << "Enter" << size << "Values in Array\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << "Your Current Array is" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" ";
	}

	int key = 0;
	cout << "Enter Value you want to search" << endl;
	cin >> key;

	 bool find=linearsearch( arr,  size,  key);
	 if (find==1) {
		 cout << "Value found in array\n";
	}
	 else {
		 cout << "Value not present\n";
	 }

	return 0;




}