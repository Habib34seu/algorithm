#include<bits/stdc++.h>
using namespace std;


void bruteForce(int a[], int n){
	
	int maxSum = INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=a[k];
			}
			maxSum=max(maxSum,sum);
		}	
	}
	cout<<endl<<endl<< maxSum;
}

int main(){
	int n;
	cin>>n;
	
	int array[n];
	
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
	cout<<"Sub array "<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<array[k]<<" ";
			}
			cout<<endl;
		}	
	}
	bruteForce(array,n);
	
	
}
