#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int a=5;
	
	cout<< "a"<<endl;
	//using printf
	printf("2*1=2\n");
	//make a table
	string msg;
	cout << a << "*" << 1 << "=" << a*1 <<endl;
	cout << a<< "*" << 2 << "=" << a*2 <<endl;
    //using increement
	cout<<++a <<endl;
	//using decreement
	cout<<--a <<endl;
	//using shift left
	cout<< (a<<1) <<endl;
	//using right shift
	cout<< (a>>1) <<endl;
	//using address operator
	cout<< & a <<endl;
	//using sizeof
	cout<< sizeof(a) <<endl;
	//using format specifer
	cout<< ("5+9=%d",5+9) <<endl;
	printf("5+9=%d\n",5+9);
	printf("pie=%f\n",3.416);
	//using escape sequance
	printf("\"my name is \tmoaz\n");
	
	//using ostream.
	ostream &moaz=cout;
	moaz<<"print with my name " <<endl;
	getline(cin,msg);
	cin.ignore();
	
	
}
