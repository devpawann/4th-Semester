// Composite simpsons 3/8 Rule

#include<iostream>
using namespace std;
#include<math.h>
#define f(x) ((x*x+sin(x)/x))
int main(){
	
	int n,i;
	float h,x,sum1=0,sum2=0,I,a,b;
	do{
	cout<<"Enter no of segment ";
	cin>>n;
	}while(n%3 != 0);
	cout<<"Enter value of a"<<endl;
	cin>>a>>b;
	h=(-a+b)/n;
	for(i=1;i<=(n-1);i++){
		x=a+(i*h);
		if((i%3)!= 0){
			sum1=sum1+3*f(x);
		}else{
			sum2=sum2+2*f(x);
		}
	}
	I=((3*h)/8)*(f(a)+sum1+sum2+f(b));
	cout<<"Answer is "<<I<<endl;
	
}
