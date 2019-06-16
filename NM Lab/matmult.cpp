//matrix multiply
#include<iostream>
using namespace std;
int main(){
	float A[5][5],C[5],Y[3];
	int i,j,k,l;
	cout<<"Enter elements"<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=(3);j++){
			cout<<"A"<<i<<j<<ends;
			cin>>A[i][j];
		}
	}
	cout<<"Enter initial guess"<<endl;
	for(i=1;i<=3;i++){
		cin>>C[i];
	}
	
	for(i=1;i<=3;i++){
		Y[i]=0;
		for(j=1;j<=3;j++){
			Y[i]=Y[i]+A[i][j]*C[j];
		}
	}
	
	for(l=1;l<=3;l++){
		cout<<Y[l]<<endl;
	}
	
	cout<<"Largest element is:"<<endl;
	
	
}
