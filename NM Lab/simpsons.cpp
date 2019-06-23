//simpsons 1/3 rule

#include<iostream>
using namespace std;
#define f(x) ((x*x)+1)
int main(){
	
	int n,i;
	float h,x,sum1=0,sum2=0,I,a,b;
	do{
	cout<<"Enter no of segment ";
	cin>>n;
	}while(n%2 != 0);
	cout<<"Enter value of a"<<endl;
	cin>>a>>b;
	h=(-a+b)/n;
	for(i=1;i<=(n-1);i++){
		x=a+(i*h);
		if((i%2)!= 0){
			sum1=sum1+4*f(x);
		}else{
			sum2=sum2+2*f(x);
		}
	}
	I=(h/3)*(f(a)+sum1+sum2+f(b));
	cout<<"Answer is "<<I<<endl;
	
}
