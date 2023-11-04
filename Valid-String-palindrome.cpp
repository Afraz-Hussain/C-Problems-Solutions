/* checking if string is palindrome or not*/


#include<iostream>
using namespace std;
char tolowercase(char ch) {
	if (ch >='A' && ch <= 'Z') {
		char temp = ch - 'A' + 'a';
		return temp;
	}
	else {
		
		return ch;
	}
}
bool checkpalindrome(char arr[], int size) {
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		if (tolowercase(arr[start]) != tolowercase(arr[end])) {
			return false;
		}
		else {
			start++;
			end--;

		}
	}
	return true;
}



int main() {
	char name[] = { "Mam" };
	int size = sizeof (name)-1;
	
	
	cout << "Checking if string is palindrom or not  " << endl;
	if (!checkpalindrome(name, size)) {
		cout << "NOT A PALINDROME  "  << endl;
	}
	else {
		cout << "IT'S PALINDROME\n";
	}

}


