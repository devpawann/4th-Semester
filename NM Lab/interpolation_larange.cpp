//lagrange interpolation
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	float F[10],sum=0,X[10],x;
	cout<<"Enter the order of polynomial"<<endl;
	cin>>n;
	cout<<"Enter the point where you want to find the value"<<endl;
	cin>>x;
	cout<<"Enter the values"<<endl;
	for(i=0;i<n;i++){
		cin>>X[i];
	}
	cout<<"Enter the functional values"<<endl;
	for(int i=0;i<n;i++){
		cout<<"F"<<(i)<<ends;
		cin>>F[i];
	}
	for(int i=0;i<n;i++){
	    float prod=1;
		for(j=0;j<n;j++){
		if(i!=j){
			prod=prod*((x-X[j])/(X[i]-X[j]));
		}	
			
	}
		sum=sum+prod*F[i];
	}
	
	cout<<"Value is"<<sum;
}
