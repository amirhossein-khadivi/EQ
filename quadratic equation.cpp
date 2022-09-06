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
	return 0;
}
