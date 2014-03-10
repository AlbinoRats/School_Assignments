//Qiyuan Chen
//2C57A
#include <iostream>
using namespace std;
int main()
{
	int n;
	char input;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int right=0;
	int up=0;
	bool invalidStep=false;
	bool reachedDestination=false;
	bool fellOff=false;
	for(int i=0;i<2*n;i++)
	{
		cout<<"Enter u/U for UP, r/R for RIGHT \n";
		cin>>input;
		if(input=='u'||input=='U')
		{
			up++;
			if(up>right)
				fellOff=true;
		
		}
		else if(input=='r'||input=='R')
		{
			right++;
			if(right>n)
				fellOff=true;
		
			
		}
		else
		{
			
			invalidStep=true;
			
		}
	}
	if(invalidStep)
		cout<<"The path contains invalid steps\n";
	else if(fellOff)
		cout<<"You fell off the edge\n";
	else if(up==n&&right==n)
		cout<<"you have reached destination of ("<<n<<","<<n<<")"<<endl;
	else
		cout<<"you have not reached destination of ("<<n<<","<<")"<<endl;
	
	system("pause");

}