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
	return 0;
}
