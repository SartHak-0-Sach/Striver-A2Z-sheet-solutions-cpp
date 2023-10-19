// C++ program to check whether a number
// is prime or not using recursion
#include <iostream>
using namespace std;

// function check whether a number
// is prime or not
bool isPrime(int n)
{
	static int i = 2;

	// corner cases
	if (n == 0 || n == 1)
	{
		return false;
	}

	// Checking Prime
	if (n == i)
		return true;

	// base cases
	if (n % i == 0)
	{
		return false;
	}
	i++;
	return isPrime(n);
}

// Driver Code
int main()
{

	isPrime(35) ? cout << " true\n" : cout << " false\n";
	return 0;
}

/*
// A school method based C++ program to
// check if a number is prime


#include <bits/stdc++.h>
using namespace std;

// Function check whether a number
// is prime or not
bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to square root of n
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}

// Driver Code
int main()
{
	isPrime(11) ? cout << "true\n" : cout << "false\n";
	return 0;
}


// A school method based C++ program to
// check if a number is prime
#include <bits/stdc++.h>
using namespace std;

// Function check whether a number
// is prime or not
bool isPrime(int n)
{
	// Check if n=1 or n=0
	if (n <= 1)
		return false;
	// Check if n=2 or n=3
	if (n == 2 || n == 3)
		return true;
	// Check whether n is divisible by 2 or 3
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	// Check from 5 to square root of n
	// Iterate i by (i+6)
	for (int i = 5; i <= sqrt(n); i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// Driver Code
int main()
{
	isPrime(11) ? cout << "true\n" : cout << "false\n";
	return 0;
}


// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

// Driver Code
int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
*/