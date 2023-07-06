#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	//finding output
	 cout<< "hello motto";
printf("\nhello jani");

    //declaring addition functiion
    int a=20,b=13;
    printf("\n %d",(a+b)?:a,b);
	  
	  //finding value of a
	  printf("\n %d",a);
	  printf("\n %d",b);
	  
	  //multiplication funtion
	  printf("\n %d",(a*b)?:a,b);
	  
	  /*finding logical expressions
	      && gate */
	  printf("\n %d",(a<b)&&(a>b));
	  printf("\n %d",(a>b)&&(a>b));
	  
	  //&& gate in cout datatype
	  //if false && false=false
	  cout<<((a==0)&&(a<b)) <<endl;
	  cout<<((a==0)&&(a>b))<<endl;
	 
}
