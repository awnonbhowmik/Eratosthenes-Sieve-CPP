#include<iostream>
#include<cmath>

using namespace std;

bool primetest(int n)
{
	bool isprime = true;					//suppose that the number that we are checking is prime
	if (n == 1)							   // n = 1 is non-prime
		isprime = false;
	else if (n == 2)					  // n = 2 is prime
		isprime = true;
	else {
		for (int i = 2; i <= sqrt(n); i++)	// loop through [2,sqrt(n)], check for divisors
		{									// in that interval. If a divisor is found,
			if (n%i == 0) {					// then the number is non-prime.
				isprime = false;
				break;
			}
		}
	}
	return isprime;							// return the primality type of the number
}

int main()
{
	int dimension;
	cout << "Enter dimension of matrix:";
	cin >> dimension;

	int n = 1;
	for (int i = 0; i < dimension; i++){			//make an (n x n) matrix
		for (int j = 0; j < dimension; j++) {
			if (primetest(n))						//if the number is prime
				cout << "*";						//print '*', else print space ' '
			else
				cout << " ";
			n++;									//move over to the next
		}											//number before running the loop
		cout << endl;
	}

	system("pause");
	return 0;
}