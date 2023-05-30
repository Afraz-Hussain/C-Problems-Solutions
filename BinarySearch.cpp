#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
	int start = 0;
	int end = size - 1;
	int mid = (start + end) / 2;
	while (start <= end)
	{
		if (key == arr[mid])
		{
			return mid;
		}
		//GO IN RIGHT PART 
		if (key > arr[mid]) {

			start = mid + 1;
		}
		else {
			//if key is less than arr[i]
			//then we need to search in left part
			end = mid - 1;
		}
		//Updating Our Mid because Start and end will be updated

		mid = (start + end) / 2;
	}
	
	return -1;
}

int main()
{
	int arr[40];


	int size = 0;
	cout << "Enter Size Of Array" << endl;
	cin >> size;

	cout << "Enter " << size << " Elements in Array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Your Current Array is" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	int key = 0;
	cout << "Enter Value you want to find in your array" << endl;
	cin >> key;


	int Find = BinarySearch(arr, size, key);

	if (Find == -1) {

		
		cout << "Value Not found on any index" << endl;
	}
	else
	{
		cout << "Value Found on index  " << Find << endl;
	}

	 
	return 0;
}