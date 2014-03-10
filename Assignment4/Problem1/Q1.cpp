//Qiyuan Chen
//8B44A
#include <iostream>
using namespace std;
//A
void swap(int a[], int i, int j)
{
	// Temporary to store a[i]
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
//B
void reverse(int a[],int i, int j)
{
// if the size of the range is even
if((j-i)%2==0)
{
	int mid=(j-i)/2;
	int counter=0;
	//swaps i+1 and j, then increase i by 1 and decrease j by 1
	while(counter!=mid)
	{
	swap(a,i+1,j);
	i++;
	j--;
	counter++;
	}
}
//if the size is odd
else
{
	while(i+1!=j)
	{
		swap(a,i+1,j);
		i++;
		j--;
	}
}
}
//C
void next(int a[], int size)
{
	//storing highest i index
	int highestI=0;
	//storing highest j index
	int highestJ=0;
	//finding the largest i such a[i]<a[i+1]
	for(int i=0;i<size;i++)
	{
		if(a[i]<a[i+1])
		highestI=i;
	}
	//finding the largest j such that a[j]>a[i]
	for(int j=0;j<size;j++)
	{
		if(a[j]>a[highestI])
		highestJ=j;
	}
	//swaps a[i] and a[j]
	swap(a,highestI,highestJ);
	//reverse a[i+1....n-1]
	reverse(a,highestI,size-1);
	
}
//D
int main()
{
	int Array[]={1,4,6,2,9,9,8,7,3};
	next(Array,9);
	for(int i=0;i<9;i++)
	{
		cout<<Array[i]<<" ";
	}
system("pause");
}