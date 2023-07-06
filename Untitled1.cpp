#include<iostream>
using namespace std;
int main()
{
	int a=8; int b=10;
	a=a^b; b=b^a; a=a^b;
	cout<< "first value",a;
	cout<< "second value",b;
	
	
}
