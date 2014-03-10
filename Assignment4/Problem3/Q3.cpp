//Qiyuan Chen
//4J92B
#include<iostream>
using namespace std;
int countPrimes(int n)
{
	int count=0;
	for(int i=2;i<n;i++)
	{
		bool prime=true;
		for(int d=2;d*d<=i;d++)
			if(i%d==0)
			{
				prime=false;
				break;
			}
			if(prime)
				count=count+1;
		}
	return count;
}
int eratothenes(int n)
{
	int counter=0;
	bool * Array=new bool[n];
	// Sets the dynamic array to all true
	for(int i=0;i<n;i++)
		Array[i]=true;
	//outter for loop
	for(int j=2;j<n;j++)
	{
		//outer if statement, if element is true, enters inner for loop
		if(Array[j])
		{
			//inner for loop, multiplying j by x for all the multiple of primes
			for(int x=2;x*j<n;x++)
			{
				//inner if statement, if element of [xj] is true, it is set to false
				if(Array[x*j])
				{
					Array[x*j]=false;
					
				}//close inner if
			}//close inner for loop
		}//close outter if
	}//close outer for loop

	//loop for counting how many true are in the Array, starts at 2, because 0 & 1 arent consider as prime
	for(int y=2;y<n;y++)
	{
		if(Array[y])
			counter++;
	}
	delete []Array;
	return counter;	
}
int main()
{
	cout<<countPrimes(100000000)<<endl;// Around 30 seconds for 10million, takes a long time for 100m, and I closed it before the result is shown
	cout<<eratothenes(100000000)<<endl;// Almost instant for 10 million, around 5 seconds for 100m
	system("pause");
}