//Qiyuan Chen
//9V85A
#include <iostream>
using namespace std;
//Part a
int square2(int n)
{
	int counter=0;
	int sum=0;
	for(int x=1;x<=2*n-1;x++)
	{
		if(counter==n)
			return sum;
		if(x%2!=0)
		{
			sum+=x;
			counter++;
		}

	}
	return sum;
}
//part b
int square(int n)
{
	return n*n;
}
int main()
{
	for(int i=1;i<101;i++)
	{
		cout<<square(i)<<endl;
		cout<<square2(i)<<endl;
	}
	system("pause");

}