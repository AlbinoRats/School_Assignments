//Qiyuan Chen
//2E04A
#include <iostream>
using namespace std;
long long collatz(long long n)
{
	if(n%2==0)
	{
		return n/2;
		
	}
	else
	{
	return 3*n+1;
	
	}
}
//part B
int collatzCount(int n)
{
	long long x=n;
	int counter=0;
	while(x!=1)
	{
		x=collatz(x);
		counter++;
	}
	return counter;
}
int main()
{
	//part A
	long long n;
	cin>>n;
	while(n!=1)
	{
		n=collatz(n);
		cout<<n<<endl;
		// added a cout statement because it doesnt output anything on my Microsoft visual c++
		// It doesnt disproves the conjecture, it is simply because n reached overflow if starts at 113383
		// normally long should cover more than int, but on my computer's visual c++ it covers the same amount as int
		// therefore i used long long.
	}
	//part C
	int highest=1;
	for(int i=1;i<=1000000;i++)
	{
		if(collatzCount(i)>collatzCount(highest))
		highest=i;
	}
	cout<<highest<<endl;
	//comes out to be 837799
	cout<<collatzCount(highest)<<endl;
	//comes out to be 524
	system("pause");
}
