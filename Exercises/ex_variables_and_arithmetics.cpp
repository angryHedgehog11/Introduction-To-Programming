#include <iostream>
#include <math.h>

using std::cin; 
using std::cout; 
using std::endl; 

const double PI = 3.14; 

int main()
{
	
	//task1 read two numbers from stdin and display their difference on the stdout
  /*
	int num1;
	int num2; 
	cin >> num1 >> num2; 
	cout << num1 - num2 << endl; 
  */
	//task2 read three numbers from stdin and display their arithmetic mean on the stdout
  /*
	double x, y, z; 
	cin >> x >> y >> z; 
	double sum = x + y + z; 
	cout << sum / 3.0 << endl; 
  */
	//task3 read the three coordinates x1, y1, z1 from the stdin and find the length of the vector v(x1, y1, z1)
  /*
	double x1, y1, z1; 
	cin >> x1 >> y1 >> z1; 
	double quadraticSum = x1 * x1 + y1 * y1 + z1 * z1; 
	double length = abs(sqrt(quadraticSum)); 
	cout << length << endl; 
  */
	//task4 read two numbers from the stdin and display the remainder and the whole part
  /*
	int n, m; 
	cin >> n >> m; 
	int remainder = n % m; 
	int wholePart = n - (m * remainder);
	cout << "Whole part: " << wholePart << " Remainder: " << remainder << endl;
*/

	//task5 swap the values of two variables with and without temporary variable
	
/*
 
	//with temp variable
	int a1, a2; 
	cin >> a1 >> a2; 
	int temp = a1; 
	a1 = a2; 
	a2 = temp; 
	cout << "a1 after: " << a1 << " a2 after: " << a2 << endl;

	//without temp variable
  	int b1, b2; 
 	 cin >> b1 >> b2;
	b1 = b1 + b2; 
	b2 = b1 - b2; 
	b1 = b1 - b2; 
	cout << "b1 after: " << b1 << " b2 after: " << b2 << endl;
*/

	
	//task6 read a positive integer and display the value of the tens
/*
	int num; 
	cin >> num;
	int tens = (num / 10) % 10; 
	cout << tens << endl; 
 */

	
	//task7 read three numbers and calculate the area of the triangle their form (for the sake of the task 
	// they will always be valid) using the Heron's formula
  /*
	double a, b, c; 
	cin >> a >> b >> c; 
	double halfPerimeter = (a + b + c) / 2.0; 
	double heronArea = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
	cout << "Area: " << heronArea << endl; 
*/ 

	
	//task8 read two integers and an agle and calculate the area of the triangle their form (for the sake of the task 
	// they will always be valid)

  /*
	double z1, z2; 
	double angle; 

	cin >> z1 >> z2 >> angle; 

	double angleToRadians = (PI * angle) / 180; 
	double area = (z1 * z2 * sin(angleToRadians)) * 0.5;
	cout << "Area: " << area << endl; 
*/

	//task9 calculate the distance between two points A(x1, y1) and B(x2, y2)
/*
	double x1, y1, x2, y2; 
	cin >> x1 >> y1 >> x2 >> y2; 

	double distance = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
	cout << "Distance: " << distance << endl; 
*/
	//task10 read three numbers - the coefficients of a qudratic equation and finds its roots 
	// for the sake of the task a,b,c are always valid coefficients 
/*
	double a, b, c; 
	cin >> a >> b >> c; 
	double discriminant = b * b - 4 * a * c; 
	double x1 = ((-1) * b + sqrt(discriminant)) / (double)(2 * a);
	double x2 = ((-1) * b - sqrt(discriminant)) / (double)(2 * a);

	cout << "x1: " << x1 << " x2: " << x2 << endl; 
  */
	return 0; 
}
