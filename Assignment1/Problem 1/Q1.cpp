//Qiyuan Chen Hw#1
//0S19A
#include <iostream>
using namespace std;
// Part a
bool intervalEmpty(int a, int b)
{
return a>b;
}
//Part b
int intervalIntersect(int a, int b, int c, int d)
{
	if( c>b||a>d)
	{
		cout<<"[1,0] with ";
		return 0;
	}
	else if(c>a)
	{
		if(d>b)
		{
			cout<<"["<<c<<","<<b<<"] with ";
			return b-c+1;
		}
		else
		{
			cout<<"["<<c<<","<<d<<"] with ";
			return d-c+1;
		}
		
	}
	else
	{
		if(d<b)
		{
			cout<<"["<<a<<","<<d<<"] with ";
			return d-a+1;
		}
		cout<<"["<<a<<","<<b<<"] with ";
		return b-a+1;
	}
}
// Part c
int main()
{
int a,b,c,d;
cout<<"Enter the first value\n";
cin>>a;
cout<<"Enter the second value\n";
cin>>b;
cout<<"Enter the third value\n";
cin>>c;
cout<<"Enter the last value\n";
cin>>d;
if(intervalEmpty(a,b))
	cout<<"[a,b] is empty\n";
else
	cout<<"[a,b] is not empty\n";
if(intervalEmpty(c,d))
	cout<<"[c,d] is empty\n";
else
	cout<<"[c,d] is not empty\n";
cout<<"The Intersection of ["<<a<<","<<b<<"] and ["<<c<<","<<d<<"] is ";
cout<<intervalIntersect(a,b,c,d)<<" Integer elements \n";
system("pause");
}