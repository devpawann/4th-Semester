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
	cout<<"X0"<<ends<<ends<<ends<<"f(X0)"<<ends<<ends<<ends<<"f'(x0)"<<ends<<ends<<ends<<"x1"<<endl;
	int count=0;
	do{
		x1=(x0-(f(x0)/d(x0)));
		cout.width(4);
		cout<<x0<<ends<<ends;
		cout.width(4);
		cout<<f(x0)<<ends<<ends;
		cout.width(4);
		cout<<d(x0)<<ends<<ends;
		cout.width(4);
		cout<<x1<<endl;
		x0=x1;
		count++;
	}while(fabs(f(x0))>err);
	cout<<"Root is::"<<x1<<endl;
	cout<<"Total iteration is:"<<count;
	
}


//Completed
