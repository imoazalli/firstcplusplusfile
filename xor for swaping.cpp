#include <iostream>
using namespace std;
int main()
{
	int a=15, b=10;
	a=a^b, 
	b=a^b;
	a=a^b;
	cout<< "Value of a: " << a <<endl;
	cout<< "Value of b: " << b;
}
