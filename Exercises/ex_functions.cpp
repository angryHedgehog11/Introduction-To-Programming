#include <iostream>

using std::cin; 
using std::cout; 
using std::endl; 

//task1 Create your own function myAbs with in parameter 

int myAbs(int num)
{
	return (num < 0 ? -num : num); 
}

//task2 Create your own function myMin with two int parameters 

int myMin(int num1, int num2)
{
	return (num1 < num2 ? num1 : num2); 
}

//task3 Create your own function myMax with two int parameters 
int myMax(int num1, int num2)
{
	return (num1 > num2 ? num1 : num2); 
}

//task4 Create your own funtion areEqual with three parameters - float numbers and EPS

bool areEqual(float num1, float num2, float eps)
{
	return myAbs(num1 - num2) < eps;
}

//task5 Create your own function mySwap with two int parameters 

void mySwap(int& x, int& y)
{
	int temp = x; 
	x = y; 
	y = temp; 
}

//task6 Create your own function isBitUp where you have two parameters int number and position
//and display if the bit is up

bool isBitUp(int num, unsigned position)
{
	if (position < 1 || position > (sizeof(num) * 8))
	{
		return false;
	}

	unsigned int mask = 1 << (position - 1);
	return num & mask;
}

//task7 Create your own function rev with parameter unsigned num 

unsigned rev(unsigned num)
{
	unsigned result = 0; 
	while (num != 0)
	{
		result = result * 10 + num % 10; 
		num = num / 10; 
	}
	return result; 
}

//task8 Create your own function rectArea with two unsigned parameters 
//Calculates the area of a rectangle

unsigned long long rectArea(unsigned width, unsigned height)
{
	return (unsigned long long)width * height;
}

//task9 Create your own function with float number which transforms celsius to fahrenheit

float celsToFahr(float cels)
{
	return cels * 9 / 5 + 32; 
}

int main()
{
	return 0; 
}
