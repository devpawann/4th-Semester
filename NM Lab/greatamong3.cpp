//Largest among 3
#include<iostream>
using namespace std;
int main(){
	int arr[3];
	cout<<"Enter 3 element"<<endl;
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	if(arr[0]>arr[1] && arr[0]>arr[2]){
		cout<<arr[0];
		
	}else if(arr[1]>arr[2] && arr[1]>arr[0]){
		cout<<arr[1];
	}else if((arr[2]>arr[1] && arr[2]>arr[0])){
		cout<<arr[2];
	}
}
