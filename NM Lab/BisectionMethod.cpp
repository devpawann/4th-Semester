#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
#define f(x) (exp(x)-3*x)
#define err 0.001
int main(){
	float x1,x2,xm;
	int count = 0;
	do{
		cout<<"Enter two initial guess"<<endl;
		cin>>x1>>x2;	
	}while(f(x1)*f(x2)>0);
	cout<<"X1"<<ends<<"x2"<<ends<<"f(x1)"<<ends<<"f(x2)"<<ends<<"Xm"<<ends<<"f(Xm)"<<endl;
	do{
	xm=((x1+x2)/2);
	if((f(xm)*f(x1))<0){
		cout.precision(3);
		cout<<x1<<ends<<x2<<ends<<f(x1)<<ends<<f(x2)<<ends<<xm<<ends<<f(xm)<<endl;
		x2=xm;
	}else{
		cout.precision(3);
		cout<<x1<<ends<<x2<<ends<<f(x1)<<ends<<f(x2)<<ends<<xm<<ends<<f(xm)<<endl;
		x1=xm;
		
	}
	cout.precision(3);
	cout<<fixed;
	count++;
	
}while(fabs(f(xm))>err);
cout<<"Root is:"<<xm<<endl;
cout<<"Total iteration is"<<endl<<count;
getch();
}
