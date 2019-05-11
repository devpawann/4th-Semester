#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
#define f(x) (x*x*x*x-4*x-10)
#define err 0.001
int main(){
	float x1,x2,xm;
	int count = 0;
	do{
		cout<<"Enter two initial guess"<<endl;
		cin>>x1>>x2;	
	}while(f(x1)*f(x2)>0);
		cout<<"X1"<<ends<<ends<<ends<<ends<<"x2"<<ends<<ends<<ends<<ends<<"f(x1)"<<ends<<ends<<ends<<ends<<"f(x2)"<<ends<<ends<<ends<<ends<<"Xm"<<ends<<ends<<ends<<ends<<"f(Xm)"<<endl;
	do{
	xm=((x1+x2)/2);
	if((f(xm)*f(x1))<0){
		x2=xm;
	}else{
		x1=xm;
	}
	cout<<x1<<ends<<ends<<ends<<ends<<x2<<ends<<ends<<ends<<ends<<f(x1)<<ends<<ends<<ends<<ends<<f(x2)<<ends<<ends<<ends<<ends<<xm<<ends<<ends<<ends<<ends<<f(xm)<<endl;
	count++;
	
}while(fabs(f(xm))>=err);
cout<<"Root is:"<<xm<<endl;
cout<<"Total iteration is"<<endl<<count;
getch();
}
