#include <iostream>

using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
	//task1 use bitwise not on unsigned int 

	/*
	unsigned int num; 
	cin >> num; 
	unsigned int result = ~num; 
	cout << result << endl; 
	*/

	//task2 use bitwise OR on two unsigned ints

	/*
	unsigned int num1, num2; 
	cin >> num1 >> num2; 
	unsigned int result = num1 | num2; 
	cout << result << endl;
	*/

	//task3 using bitwise operations display if an unsigned int is odd or even 

	/*
	unsigned int num; 
	cin >> num; 
	
	if ((num & 1) == 0)
	{
		cout << "Is even" << endl; 
	}
	else
	{
		cout << "Is odd" << endl; 
	}
	*/

	//task4 read a number n between 0 and 31 and using bitwise operations display then nth power of 2

	/*
	short n; 
	cin >> n; 
	if (n < 0 || n > 31)
	{
		cout << "Wrong number, it should be between 0 and 31." << endl; 
		return 1; 
	}

	unsigned int result = 1 << n; 
	cout << result; 
	*/

	//task5 display the least significant bit of an unsigned int 

	/*
	unsigned int num; 
	cin >> num; 
	short bit = num & 1; 
	cout << bit; 
	*/

	//task6 display the most significant bit of an unsigned int 

	/*
	unsigned int num; 
	cin >> num; 

	const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

	unsigned int mask = 1 << (SIZE_OF_UNS_INT - 1);

	if ((num & mask) == 0)
	{
		cout << '0';
	}
	else
	{
		cout << '1';
	}
	*/

	//task7 display then nth bit of a given unsigned int 

	/*
	//n is the nth bit and num is the number - we assume that n is alaways a number between 0 and 31
	unsigned int n, num; 
	cin >> n >> num; 

	unsigned mask = (1 << n);
	if ((num & mask) == 0)
	{
		cout << '0';
	}
	else
	{
		cout << '1';
	}
	*/

	//task8 set the nth bit of an unsigned int to zero using bitwise operations 

	/*
	//n is the nth bit and num is the number - we assume that n is alaways a number between 0 and 31
	unsigned int n, num; 
	cin >> n >> num; 

	unsigned mask = ~(1 << n); 
	num = num & mask; 

	cout << num; 
	*/

	//task9 set the nth bit of an unsigned int to one using bitwise operations 
	/*
	//n is the nth bit and num is the number - we assume that n is alaways a number between 0 and 31
	unsigned int n, num;
	cin >> n >> num;

	unsigned mask = 1 << n;
	num = num | mask;

	cout << num;
	*/

	//task10 flip the nth bit of an unsigned int using bitwise operations 
	/*
	//n is the nth bit and num is the number - we assume that n is alaways a number between 0 and 31
	unsigned int n, num; 
	cin >> n >> num; 

	unsigned int mask = 1 << n; 
	num = num ^ mask; 
	cout << num; 
	*/

	//task11 flip the 5 lest significant bits of an unsigned int using bitwise operations 
	/*
	unsigned int num;
	cin >> num; 

	unsigned int mask = 1;  // 00...00001
	mask = (mask << 1) | 1; // 00...00011
	mask = (mask << 1) | 1; // 00...00111
	mask = (mask << 1) | 1; // 00...01111
	mask = (mask << 1) | 1; // 00...11111

	num = num ^ mask;

	cout << num;
	*/

	//task12 read an unsigned int A and three other numbers n1, n2, n3. Set in A the bits on positions
	//n1, n2 and n3 to ones and save the result in B. Save the multiplcation of A and B in new variable C.
	//display the result of ~C ^ A. 
	/*
	//we assume that n1, n2 and n3 are always between 0 and 31 

	unsigned int A, n1, n2, n3;
	cin >> A >> n1 >> n2 >> n3; 
	unsigned int mask = 0;
	mask |= (1 << n1);
	mask |= (1 << n2);
	mask |= (1 << n3);

	unsigned int B = A | mask;
	unsigned int C = A * B;

	cout << ~(C ^ A);
	*/

	//task13 read a number and using bitwise operations display if it is a power of two or not 

	/*
	unsigned int num;
	cin >> num;

	if (num != 0 && (num & (num - 1)) == 0)
	{
		cout << "It's a power of two.\n";
	}
	else
	{
		cout << "It's NOT a power of two.\n";
	}
	*/
	return 0; 
}
