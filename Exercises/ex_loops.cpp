#include <iostream>
#include <math.h>

using std::cin; 
using std::cout; 
using std::endl; 

const double EPS = 0.0001; 

int main()
{
	//task1 Display the numbers from 0 to 10 

	/*
	for (unsigned i = 0; i < 11; i++)
	{
		cout << i << " "; 
	}
	*/

	//task2 read a positive integer number N and display the numbers from 0 to N 

	/*
	unsigned int N; 
	cin >> N; 
	for (unsigned i = 0; i <= N; i++)
	{
		cout << i << " "; 
	}
	*/

	//task3 read two positive integer numbers N and M and display the numbers from N to M 
	/*
	unsigned N, M; 
	cin >> N >> M; 
	
	if (N > M)
	{
		cout << "N should be smaller than M. You will get nothing displayed!\n"; 
	}
	for (unsigned i = N; i <= M; i++)
	{
		cout << i << " "; 
	}
	*/

	//task4 Print the ASCII table symbols (0-127)
	/*
	const unsigned char LAST_CHAR = 127;

	for (unsigned char ch = 0; ch <= LAST_CHAR; ch++)
	{
		cout << ch << ' ';
	}
	*/

	//task5 read two unsigned int numbers N, M and find the sum from N to M 

	/*
	unsigned N, M; 
	cin >> N >> M;

	unsigned sum = 0; 
	if (N > M)
	{
		cout << "N should be smaller than M. You will get sum of 0!\n";
	}
	for (unsigned i = N; i <= M; i++)
	{
		sum += i; 
	}
	cout << sum; 
	*/

	//task6 read a positive integer N and display a square with side with length N*# 

	/*
	unsigned N; 
	cin >> N; 

	for (unsigned i = 1; i <= N; i++)
	{
		if (i == 1 || i == N)
		{
			for (unsigned j = 0; j < N; j++)
			{
				cout << "#"; 
			}
		}
		else
		{
			cout << "#";
			for (unsigned k = 0; k < N - 2; k++)
			{
				cout << " ";
			}
			cout << "#";
		}
		cout << endl; 
	}
	*/

	//task7 Read a sequence of positive int numbers separated by a comma and ending in a ';'.Print the Max, 
	//Min and Average of the sequence.

	/*
	int bufferNum, minNum, maxNum;
	int sum = 0, counter = 0;   
	char bufferChar;

	do {
		cin >> bufferNum;
		cin >> bufferChar;

		if (bufferChar != ',' && bufferChar != ';') 
		{
			cout << "Invalid input" << endl;
			return 1;
		}

		sum += bufferNum;

		if (counter == 0)
		{
			minNum = bufferNum;
			maxNum = bufferNum;
		}
		else 
		{
			if (bufferNum < minNum)
			{
				minNum = bufferNum;
			}

			if (bufferNum > maxNum)
			{
				maxNum = bufferNum;
			}
		}
		counter++;

	} while (bufferChar != ';'); 

	double average = sum / (double)counter;

	cout << "Min is " << minNum << endl;
	cout << "Max is " << maxNum << endl;
	cout << "Average is " << average << endl;
	*/

	//task8 Read a whole positive integer N and then N positive int numbers and print the highest of them
	
	/*
	unsigned N, curr;
	unsigned max = 0, i = 0;

	cin >> N;

	do
	{
		cin >> curr; 

		if (curr > max)
		{
			max = curr; 
		}

		i++; 

	} while (i < N);

	cout << max; 
	*/

	//task9 Read a positive integer N and then N integer numbers and print their average

	/*
	unsigned N; 
	cin >> N;
	int curr; 
	long long sum = 0; 
	for (unsigned i = 0; i < N; i++)
	{
		cin >> curr; 
		sum += curr; 
	}
	double average = sum / (double)N; 
	cout << average; 
	*/

	//task10 Read a positive int number and print the number of divisors of that number

	/*
	unsigned N; 
	cin >> N; 

	unsigned countDivisors = 2; //we count 1 and N 

	for (unsigned i = 2; i < ceil(N / 2) + 1; i++)
	{
		if (N % i == 0)
		{
			countDivisors++; 
		}
	}

	cout << countDivisors; 
	*/

	//task11 Read a positive int number N and print a right angle triangle with a side N 
	//and increasing numbers as side elements
	
	/*
	unsigned N;
	cin >> N; 
	unsigned curr = 1; 
	for (unsigned i = 0; i < N; i++)
	{
		for (unsigned j = 0; j < i + 1; j++)
		{
			cout << curr << " ";
			curr++; 
		}

		cout << endl; 
	}
	*/

	//task12 Read four positive int numbers limit, div1, div2 and div3 
	//and print all numbers from 0 to limit that are divisible by div1, div2 and div3 at the same time
	
	/*
	unsigned limit, div1, div2, div3; 
	cin >> limit >> div1 >> div2 >> div3;
	if (div1 == 0 || div2 == 0 || div3 == 0)
	{
		cout << "We can't divide by 0\n";
		return 1; 
	}
	for (unsigned i = 0; i <= limit; i++)
	{
		if (i % div1 == 0 && i % div2 == 0 && i % div3 == 0)
		{
			cout << i << " "; 
		}
	}
	*/

	//task13 Read two positive int numbers N and M and print the result of N to the power of M
	
	/*
	unsigned long long N, M;
	cin >> N >> M; 
	unsigned long long result = 1; 
	for (unsigned i = 0; i < M; i++)
	{
		result *= N; 
	}
	cout << result; 
	*/

	//task14  Read a positive int number and print wheter or not it's a prime 
	
	/*
	unsigned int n;
	cin >> n; 
	bool isPrime = true;
	if (n <= 1)
	{
		isPrime = false; 
	}

	for (unsigned i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
		}
	}

	if (isPrime)
	{
		cout << "Is prime\n";
	}
	else
	{
		cout << "Not prime\n"; 
	}
	*/

	//task15 Read a whole non-negative number N and print N factorial
	
	/*
	unsigned N;
	cin >> N;

	unsigned long long result = 1; 

	for (unsigned i = 1; i <= N; i++)
	{
		result *= i; 
	}

	cout << result; 
	*/

	//task16  Read a positive int number N and print N terms from the Fibonacci sequence

	/*
	unsigned N;
	cin >> N; 
	unsigned long long n1 = 0, n2 = 1;
	unsigned long long temp;

	for (int i = 0; i < N; i++)
	{
		cout << n2 << ' ';

		temp = n2;
		n2 += n1;
		n1 = temp;
	}
	*/

	//task17 Read two positive int numbers N and M and print their Greatest Common Divisor
	
	/*
	unsigned N, M;
	cin >> N >> M; 
	if (N > M)
	{
		cout << "N must be less than M\n"; 
		return 1; 
	}
	unsigned remainder; 
	do
	{
		remainder = N % M;
		N = M;
		M = remainder;
	} while (remainder != 0);

	cout << N;
	*/

	//task18 Read a non-negative int number and print the sum of its digits
	
	/*
	unsigned N;
	cin >> N; 
	unsigned sum = 0; 
	while (N != 0)
	{
		sum += N % 10; 
		N /= 10; 
	}
	cout << sum; 
	*/

	//task19 Read a non-negative int number and print wheter it's a palindrome
	
	/*
	unsigned N; 
	cin >> N; 
	unsigned numOfDigits = 0; 
	unsigned temp = N; 
	while (temp != 0)
	{
		numOfDigits++; 
		temp /= 10; 
	}
	unsigned front, back; 
	bool isPalindrome = true; 
	while (numOfDigits != 0)
	{
		if (numOfDigits == 1)
		{
			break;
		}
		front = N / pow(10, numOfDigits - 1); 
		back = N % 10; 
		if (front != back)
		{
			isPalindrome = false; 
			break; 
		}
		N = (N - (front * pow(10, numOfDigits - 1))) / 10; 

		numOfDigits -= 2; 
	}
	if (isPalindrome)
	{
		cout << "Is palindrome";
	}
	else
	{
		cout << "Not palindrome";
	}
	*/

	
	return 0; 
}
