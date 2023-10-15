#include <iostream>
#include <math.h>

using std::cin; 
using std::cout; 
using std::endl; 

const double EPS = 0.0001; 

int main()
{
	//task1 read three integers from stdin and display the minimum 

	/*
	int num1, num2, num3; 
	cin >> num1 >> num2 >> num3; 
	int minOfTwo = num2 >= num1 ? num1 : num2;
	int minOfThree = num3 >= minOfTwo ? minOfTwo : num3; 
	cout << minOfThree << endl; 
	*/ 

	//task2 read an integer from stdin and display if it even or odd 
	
	/*
	int num; 
	cin >> num; 
	if (num % 2 == 0)
	{
		cout << "Given integer is even!" << endl; 
	}
	else
	{
		cout << "Given integer is odd!" << endl; 
	}
	*/

	//task3 display the absolute value of an integer (without using the abs function) 

	/*
	int n; 
	cin >> n; 
	int absValue = n < 0 ? (-1)*n : n; 
	cout << absValue << endl; 
	*/
	
	//task4 find the number of digits of a positive integer without using loops 
	/*
	unsigned number; 
	cin >> number; 
	unsigned numOfDigits = log10(number) + 1; 
	cout << numOfDigits; 
	*/

	//task5 display if an integer is divisible by 3, 5, both or neither 

	/*
	int num; 
	cin >> num; 
	if (num % 3 == 0 && num % 5 == 0)
	{
		cout << num << " is divisible by 5 and 3." << endl; 
	}
	else if (num % 3 == 0)
	{
		cout << num << " is divisible by 3." << endl;
	}
	else if (num % 5 == 0)
	{
		cout << num << " is divisible by 5." << endl;
	}
	else
	{
		cout << num << " is not divisible by 5 or 3." << endl;
	}
	*/

	
	//task 6 using switch display the day of the week (mon, tue, ... )

	/*
	unsigned short day; 
	cin >> day; 
	if (day < 1 || day > 7)
	{
		cout << "You should enter a number between 1 and 7, because there are 7 days of a week." << endl; 
		return 1; 
	}
	switch (day)
	{
		case 1:
			cout << "Moday" << endl; 
			break; 
		case 2: 
			cout << "Tuesday" << endl; 
			break; 
		case 3: 
			cout << "Wednesday" << endl; 
			break; 
		case 4: 
			cout << "Thursday" << endl; 
			break; 
		case 5: 
			cout << "Friday" << endl; 
			break; 
		case 6: 
			cout << "Saturday" << endl; 
			break; 
		case 7: 
			cout << "Sunday" << endl; 
			break; 
	}
	*/

	//task 7 read an arithmetic sign - +, -, *, / and two integers and using switch display the result
	
	/*
	char op;
	int num1, num2; 
	cin >> op; 
	if (op != '+' && op != '-' && op != '*' && op != '/')
	{
		cout << "Not a valid operation." << endl; 
		return 1; 
	}
	cin >> num1 >> num2; 
	switch (op)
	{
		case '+':
			cout << num1 << " + " << num2 <<  " is: " << num1 + num2 << endl; 
			break; 
		case '-': 
			cout << num1 << " - " << num2 << " is: " << num1 - num2 << endl;
			break; 
		case '*': 
			cout << num1 << " * " << num2 << " is: " << num1 * num2 << endl;
			break; 
		case '/':
			if (num2 == 0)
			{
				cout << "Num2 is zero. Can't divide by zero." << endl; 
				return 1; 
			}
			cout << num1 << " / " << num2 << " is: " << num1 / num2 << endl;
	}
	*/

	//task 8 - read a number between 1 and 12 and display how many days this month has
	/*
	unsigned short month;
	cin >> month;
	if (month < 1 && month > 12)
	{
		cout << "You should enter a number between 1 and 12." << endl; 
		return 1; 
	}
	unsigned short days = 29;

	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			++days;
		case 4:
		case 6:
		case 9:
		case 11:
			++days;
			break;
		case 2:
		cout << "Depends" << endl;
	}
	if(month != 2)
	{
		cout << days;
	}
	*/

	//task 9 read coordinates of a 2D point and determine in which quadrant it is 
	/*
	int x, y;
	cin >> x >> y;


	if (x > 0 && y > 0)
	{
		cout << "First quadrant." << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "Second quadrant." << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "Third quadrant." << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "Fourth quadrant." << endl;
	}
	else
	{
		cout << "In the center." << endl;
	}
	*/
	
	//task 10 read one char and display weather is it lowercase or uppercase letter, number or other 

	/*
	char c; 
	cin >> c; 

	if (c >= 'a' && c <= 'z')
	{
		cout << "Lowercase" << endl;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		cout << "Uppercase" << endl;
	}
	else if (c >= '0' && c <= '9')
	{
		cout << "Digit" << endl;
	}
	else
	{
		cout << "Other symbol" << endl;
	}
	*/
	
	//task 11 read a six digit number and display wether or not it is a palindrome (wihtout useing loops)
	//we assume that we always have a six digits number 

	/*
	unsigned int number; 
	cin >> number; 
	short firstDigit = number / 100000;
	short secondDigit = (number / 10000) % 10; 
	short thirdDigit = (number / 1000) % 10;
	short forthDigit = (number / 100) % 10; 
	short fifthDigit = (number / 10) % 10; 
	short sixthDigit = number % 10; 
	if (firstDigit == sixthDigit && secondDigit == fifthDigit && thirdDigit == forthDigit)
	{
		cout << "Number is palindrome!" << endl;
	}
	else
	{
		cout << "Number is not palindrome!" << endl; 
	}
	*/

	//task 12 display the nearest power of 2 that is greatest than a given positive integer without using loops 
	
	/*
	unsigned int num;
	cin >> num; 
	if (num < 0) 
	{
		cout << "Wrong input!\n";
	}
	else 
	{
		unsigned short power = log2(num) + 1;
		cout << "Nearest power of 2 greatest than " << num << " is 2 to the power of " << power << " = " << pow(2, power) << endl;
	}
	*/

	//task 13 by given coordinates of point A (2D) and a len of side of a square 
	//(starting from the center of the coordinate system), display their mutual position

	/*
	const double EPS = 0.0001;  

	double x, y;
	double squareSide;

	cin >> x >> y >> squareSide;

	bool onVerticalLine = abs(x - squareSide / 2) < EPS || abs(x + squareSide / 2) < EPS;       
	bool onHorizontalLine = abs(y - squareSide / 2) < EPS || abs(y + squareSide / 2) < EPS;     

	bool insideVerticalSide = onVerticalLine && (y < squareSide / 2 || y > -squareSide / 2);      
	bool insideHorizontalSide = onHorizontalLine && (x < squareSide / 2 || x > -squareSide / 2); 

	if (x < squareSide / 2 && x > -squareSide / 2 && y < squareSide / 2 && y > -squareSide / 2)
	{
		cout << "Inside." << endl;
	}
	else if (onVerticalLine && onHorizontalLine	|| insideHorizontalSide || insideVerticalSide)  
	{
		cout << "On square." << endl;
	}
	else
	{
		cout << "Outside." << endl;
	}
	*/

	return 0; 
}
