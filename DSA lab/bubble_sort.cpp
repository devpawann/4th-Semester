#include<iostream>
using namespace std;
int main(){
	int arr[5],i=0,j,temp;
	cout<<"Enter element of array\n";
	for(i=0;i<5;i++){
		cout<<"Arr["<<i<<"]"<<endl;
		cin>>arr[i];
	}
		
		for(j=1;j<=5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		i++;	
			
		}
	cout<<"Sorted array is\n";
		for(i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	
}
