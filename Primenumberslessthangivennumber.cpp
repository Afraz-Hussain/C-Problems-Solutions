#include<iostream>
using namespace std;

bool checkprime(int num) {
	if (num <2) {
		return false;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0)
				return false;
		}
		return true;
	}
}

//prime numbers less than that number
int countprime(int num) {
	int count = 0;
	{int i = 2;
		for (; i < num; i++) {
			if (checkprime(i))
				//cout << "Numbers are " << i << " ";
				count++;
		}
		
	}
	return count;
}
void getprime(int num) {
	cout << "\n These Numbers are\n ";
	for (int i = 2; i < num; i++) {

		if (checkprime(i))
			cout << i << " ";
		
	}
	
	
}

int main()
{
	int num = 5;
	
	if (checkprime(num)) {
		cout << num<<"PRIME NUMBER\n";
		cout << "\nPrime numbers less than " << num << "are " << countprime(num) << " ";
	}
	else {
		cout << num<<"Not prime number\n";
		cout << "\nNon Prime number less than " << num << "are " << countprime(num) << " ";

	}

	getprime(num);
	

	return 0;
}
