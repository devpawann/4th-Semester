//Gauss jordan
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,j,k;
	float A[10][10],x[10],c,a;
	cout<<"Enter the no of unknown"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1);j++){
			cout<<"A"<<i<<j<<ends;
			cin>>A[i][j];
		}
	}
	for(j=1;j<=n;j++){
		for(i=1;i<=n;i++){
			if(i!=j){
				c=A[i][j]/A[j][j];
				for(k=1;k<(n+1);k++){
				A[i][k]=(A[i][k]-c*A[j][k]);
			}
			}
			
		}
	}
	for(i=1;i<=n;i++){
		a=A[i][i];
		for(k=1;k<=(n+1);k++){
			A[i][k]=A[i][k]/a;
		}
	}
	cout<<"Roots are"<<endl;
	for(i=1;i<=n;i++){
		x[i]=A[i][n+1];
		cout<<x[i]<<endl;
		
	}
	
}
