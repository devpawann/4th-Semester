#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define f(x) (sin(x)-x/2)
#define d(x) (cos(x)-0.5)
#define err 0.0001
int main(){
	float x0,x1;
	do{
		cout<<"Enter initial guess"<<endl;
		cin>>x0;
	}while(d(x0)==0);
	cout.width(4);
	cout<<"X0";
	cout.width(8);
	cout<<"f(X0)";
	cout.width(12);
	cout<<"f'(x0)";
	cout.width(12);
	cout<<"x1"<<endl;
	int count=0;
	do{
		x1=(x0-(f(x0)/d(x0)));
		cout.precision(4);
		cout.width(6);
		cout<<x0;
		cout.width(10);
		cout<<f(x0);
		cout.width(12);
		cout<<d(x0);
		cout.width(13);
		cout<<x1<<endl;
		x0=x1;
		count++;
	}while(fabs(f(x0))>err);
	cout<<"Root is::"<<x1<<endl;
	cout<<"Total iteration is:"<<count;
	
}


//Completed
