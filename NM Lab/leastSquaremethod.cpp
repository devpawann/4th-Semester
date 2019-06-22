#include<iostream>
using namespace std;
int main(){
	int x[20],y[20],n,i;
	float sumx=0,sumy=0,sumxy=0,sumx2=0,b,a;
	cout<<"Enter the number of data to enter"<<endl;
	cin>>n;
	cout<<"Enter data for x"<<endl;
	for(i=1;i<=n;i++){
		cout<<"X"<<i<<endl;
		cin>>x[i];
	}
	cout<<"Enter data for y"<<endl;
	for(i=1;i<=n;i++){
		cout<<"Y"<<i<<endl;
		cin>>y[i];
		sumx+=x[i];
		sumy+=y[i];
		sumxy=sumxy+x[i]*y[i];
		sumx2=sumx2+x[i]*x[i];
	}
	

	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a=(sumy/n - ((b*sumx)/n));
	cout<<"Required eqn is"<<endl;
	cout<<"y="<<a<<"+"<<b<<"x"<<endl;
	
}
