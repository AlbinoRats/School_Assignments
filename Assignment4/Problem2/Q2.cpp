//Qiyuan Chen
//8Z00A
#include<iostream>
using namespace std;
//A
bool terminate(int a[],int size)
{
	int counter=0;
	int j=0;
	// lopp triggers if the element of a[j] is not 0
	while(a[j]!=0)
	{
		//sets the next index as the previous element
		j=a[j];
		//keep track of how many times the loop runs
		counter++;
		//if the loop runs more than the size of the array then it must be entering a never ending cycle
		if(counter>size)
			return false;
	}
	return true;

}
//B
bool terminate(int a[])
{
	int i=0;
	int temp=0;
	// same concept as part A, except each element is changed to -1 after being entered once
	//if a[i] is -1, then it means it has been visited once, and therefore creating a never ending cycle
	while(a[i]!=0)
	{
		if(a[i]==-1)
			return false;
		temp=a[i];
		a[i]=-1;
		i=temp;
		
	}
return true;
}
int main()
{
	int Array[]={1,3,3,2,0};
	if(terminate(Array,5))
		cout<<"True\n";
	else
		cout<<"False\n";
	
	if(terminate(Array))
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
	system("pause");
}