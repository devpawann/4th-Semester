//Power method

#include<iostream>
using namespace std;
#define err 0.0003
int main(){
	int n,i,j;
	float A[10][10],x[10],y[10],xn[10],k;
	cout<<"Enter no of unknown"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1);j++){
			cout<<"A"<<i<<j<<ends;
			cin>>A[i][j];
		}
	}
	cout<<"Enter initial guess"<<endl;
	for(i=1;i<=n;i++){
		cin>>x[i];
	}
	
	do{
	for(i=1;i<=3;i++){
		Y[i]=0;
		for(j=1;j<=3;j++){
			Y[i]=Y[i]+A[i][j]*C[j];
		}
	}
	//determine largest element of Y and assign to k
	if(Y[0]>Y[1] && Y[0]>Y[2]){
		k=Y[0];	
	}else if(Y[1]>Y[2] && Y[1]>Y[0]){
		k=Y[1];
	}else if((Y[2]>Y[1] && Y[2]>Y[0])){
		k=Y[2];
	}
	
	for(i=1;i<=n;i++){
		xn[i]=y[i]/k;
	}
	}while()
	
	
	
}

