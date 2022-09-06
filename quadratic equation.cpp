#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2;
	int a,b,c,delta;
	cin >> a >> b>> c;
	if (a==0)
	{
		cout << "This equation has no roots" << endl;
	}
	else{
		delta = b*b -(4*a*c);
	}
	if(delta < 0)
	{
		cout << "No Answer" <<endl;
	}
	else if(delta == 0)
	{
		x1 = -b/(2*a);
	    cout << "answer is: " << x1 <<endl;
	}
	else if(delta == 0)
	{
		x1 = -b/(2*a);
	    cout << "answer is: " << x1 <<endl;
	}
	else
	{
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout << "answers is: " << x1 << "," << x2 <<endl;
	}
	return 0;
}
