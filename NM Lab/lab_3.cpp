//Gauss elimination method

#include<iostream>
using namespace std;
int main(){
	int y,z,n,i,j,k;
	float A[10][10],x[10],C;
	cout<<"Enter the size of matrix"<<endl;
	cin>>n;
	
	cout<<"Enter the coeff of matrix"<<endl;
	for( int i=1;i<=n;i++){
		for(int j=1;j<=(n+1);j++){
			cout<<"element of"<<"A"<<i<<j<<ends;
			cin>>A[i][j];
		}
	}
	
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
			if(i>j){
				C=A[i][j]/A[j][j];}
				for(int k=1;k<=(n+1);k++){
					A[i][k]=A[i][k]-C*A[j][k];
				}
			
		}
	}
	cout<<"display"<<endl;
	for(int i=1;i<=n;i++){
		for(j=1;j<=(n+1);j++){
			cout<<A[i][j]<<ends;
		}
		cout<<endl;
	}
	x[n]=A[n][n+1]/(A[n][n]);
	
	for(i=(n-1);i<=1;i++){
		int sum=0;
		for(j=(i+1);j<=n;j++){
			sum=sum+A[i][j]*x[j];
		}
		x[i]=(A[i][n+1]-sum)/(A[i][i]);
	}
	for(i=1;i<=n;i++){
		cout<<endl;
		cout<<x[i];
	}
	
}

