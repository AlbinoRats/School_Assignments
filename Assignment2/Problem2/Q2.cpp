//Qiyuan Chen
//5O60A
#include<iostream>
using namespace std;
bool leapYear(int year)
{
if((year%4==0&&year%100!=0)||(year%400==0))
{
		return true;
}
else
return false;

} 
// return if leap year or not
int dayofMonth(int month, int year)
{
	if(month==1)
	{
		if(leapYear(year))
			return 4;
		else
			return 3;
	}
	else if(month==2)
	{
		if(leapYear(year))
			return 1;
		else
			return 0;
	}
	else
	{
		switch(month)
		{
		case 3:
			return 0;
		case 4:
			return 4;
		case 5:
			return 9;
		case 6:
			return 6;
		case 7:
			return 11;
		case 8:
			return 8;
		case 9:
			return 5;
		case 10:
			return 10;
		case 11:
			return 7;
		case 12:
			return 12;
		}
	}
	
}
// returns the day of the month thats a doomsday
int doomsDay(int year)
{
	int a=(year/100)%4;
	int b=(year%100);
	int c=(b/12);
	int d=(b%12);
	int e=(d/4);
	int doomsday=(c+d+e+5*a+2)%7;
	return doomsday;
}
//returns the doomsday of that year

int dayofWeek(int month, int day, int year)
{
	int doomDay=doomsDay(year);
	int dayMonth=dayofMonth(month,year);
	int x=((day+28-dayMonth)%7+doomDay)%7;
	return x;
}
int main()
{
	int month;
	int year;
	int date;
	cout<<"Enter the year\n";
	cin>>year;
	cout<<"Enter the month\n";
	cin>>month;
	cout<<"Enter the date\n";
	cin>>date;
	cout<<dayofWeek(month,date,year)<<endl;
	system("pause");
}