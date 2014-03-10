//Qiyuan Chen
//4X51A
#include <iostream>
using namespace std;
bool closeEnough(float a, float b)
{
	if(-0.001<= a-b&&a-b<=0.001)
		return true;
	else
		return false;
}
float max(float x)
{
	if(x>1)
		return x;
	else
	return 1.0;
}
float average(float x, float y)
{
	return (x+y)/2.0;
}
float squareRoot(float x)
{
	float maxPoint=max(x);
	float leftPoint=0;
	float midPoint=average(leftPoint,maxPoint);
	while(!(closeEnough(midPoint*midPoint,x)))
	{
		
		if(midPoint*midPoint<=x)
			leftPoint=midPoint;
		else if(midPoint*midPoint>=x)
			maxPoint=midPoint;
		midPoint=average(leftPoint,maxPoint);
		
	

	}
	return midPoint;
}
int main()
{
	cout<<squareRoot(9)<<endl;
	system("pause");

}
