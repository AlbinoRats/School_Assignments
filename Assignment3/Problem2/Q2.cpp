//Qiyuan Chen
//4T92A

#include<iostream>
using namespace std;
int fizzbuzz(int fizzV, int fizzW, int buzzV, int buzzW, int maxWeight)
{
	if(fizzW+buzzW<=maxWeight)
		return fizzV+buzzV;
	else if(fizzW>maxWeight&&buzzW>maxWeight)
		return 0;
	else if(fizzW>maxWeight&&buzzW<=maxWeight)
		return buzzV;
	else if(fizzW<=maxWeight&&buzzW>maxWeight)
		return fizzV;
	else if(fizzV>buzzV||fizzV==buzzV) 
		return fizzV;
	else
		return buzzV;
	
}
int main()
{
	int fizzV,fizzW,buzzV,buzzW,maxWeight,value;
	cout<<"Enter the weight for fizz: \n";
	cin>>fizzW;
	cout<<"Enter the value for fizz: \n";
	cin>>fizzV;
	cout<<"Enter the weight for buzz: \n";
	cin>>buzzW;
	cout<<"Enter the value for buzz: \n";
	cin>>buzzV;
	cout<<"Enter the max weight: \n";
	cin>>maxWeight;
	value=fizzbuzz(fizzV,fizzW,buzzV,buzzW,maxWeight);
	if(value==0)
		cout<<"NONE\n";
	else if(value==fizzV&&value==buzzV)// In case of fizzW:10 fizzV:50 buzzW:10 buzzV:50 maxW:11. It would return 50, but the 50 could belong to either fizz or buzz, so I'm setting it to be fizz in this kind of situation.
		cout<<"FIZZ \n";
	else if(value==fizzV)
		cout<<"FIZZ\n";
	else if(value==buzzV)
		cout<<"BUZZ\n";
	else if(value==fizzV+buzzV)
		cout<<"FIZZBUZZ\n";
	else
		cout<<"ERROR";// Makes it easier to debug

	system("pause");
}