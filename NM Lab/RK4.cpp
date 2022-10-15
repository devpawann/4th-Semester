//RK method
//Use RK4 metod to estimate y(2) when y'(x) =2y/x,with y(1)=2. Assume h=0.25

#include<iostream>
#define f(x,y) ((2*y)/x)
#define h 0.25
using namespace std;
int main(){
	float x0,y0,xp,m1,m2,m3,m4,m,y1,x1;
	float n;
	cout<<"Enter initial conditions"<<endl;
	cin>>x0>>y0;
	cout<<"Enter point where functional value is needed"<<endl;
	cin>>xp;
	n=(xp-x0)/h;
	for(int i=0;i<n;i++){
		m1=f(x0,y0);
		m2=f((x0+h/2),(y0+m1*h/2));
		m3=f((x0+h/2),(y0+m2*h/2));
		m4=f((x0+h),(y0+m3*h));
		m=(m1+2*m2+2*m3+m4)/6;
		y1=y0+m*h;
		x1=x0+h;
		x0=x1;
		y0=y1;
	}
	cout<<"y0="<<y0<<endl;
	
}
