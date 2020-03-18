#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	float h,l;
	float a;
	
	cin>>h>>l;
	
	a=((l*l)-(h*h))/(2*h);
	cout<<setprecision(13)<<a;
}

