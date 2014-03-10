//Qiyuan Chen
//0A37A
#include<iostream>
using namespace std;
int main()
{
	//A+B
	unsigned long n;//cannot be contained in int
	int counter=0;//variable for counting the # of steps needed to reach 1
	cin>>n;
	while(n!=1)
	{
		counter++;//counter increases by 1 everytime the while loop triggers
		if(n%2==0)
		{
			n=n/2;
		}
		else
			n=3*n+1;
	}
	// C
	unsigned long temp;// temporary value thats equal to i, which after going thru the while loops may or may not be enough by using int
	int counter2=0;//counts the # of steps needed to reach 1
	int maxcounter=0;//stores the highest counter2 values
	int max=0;//stores the " i "  value of the highest counter2 value
	for(int i=1;i<=1000000;i++)
	{
		temp=i;//duplicating the i to temp, then using temp like n in part a and b
		while(temp!=1)
		{
			counter2++;
			if(temp%2==0)
				temp=temp/2;
			else
				temp=3*temp+1;
		}
		if(counter2>maxcounter)//if counter2 is higher than maxcounter, counter2 will become the new maxcounter and max will be set to the corresponding i value
		{
			maxcounter=counter2;
			max=i;
		}
		counter2=0;//counter resets to 0 to go thru the while loop again
	}
	cout<<maxcounter<<endl;
	cout<<max<<endl;
	system("pause");
}