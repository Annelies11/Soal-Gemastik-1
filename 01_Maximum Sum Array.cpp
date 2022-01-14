#include <iostream>

using namespace std;

int main() {
	int i, j, m, n, temp, sum=0;
	/*cin>>n>>m;
	int arr[n];
	for(i = 0; i < n; i++) {
		cin>>arr[i];
	}*/
	//sorting
	/*
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	*/
	int a;
	n=10;
	int arr[n]={-1,2,5,7,-1,2,3,-2,4,8};
	m=2;
	
	a=arr[0];
	for(i = 1; i < n; i++) {
		if(a>arr[i]){
			if(a-arr[i]<=m&&arr[i]>=1){
			a+=arr[i];
		}
		} else {
			if(arr[i]-a<=m&&arr[i]>=1){
			a+=arr[i];
		}
		
		}
	}
	cout<<a;
}

