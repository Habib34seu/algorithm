#include<bits/stdc++.h>
using namespace std;

void cumulativeSum(int a[],int n){
	int cumSum[n];
	cumSum[0] = a[0];
	
	for(int i=1;i<n;i++){
		cumSum[i]= cumSum[i-1] +  a[i];
	}
	
	for(int i=0;i<n;i++){
	cout<<cumSum[i]<<" ";
	}
	cout<<endl;

	int currentSum =0;
	int maxSum=INT_MIN;
	
	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			currentSum= cumSum[j] - cumSum[i-1];
			maxSum= max(currentSum,maxSum);
		}
	}
	cout <<maxSum;
	
}

int main(){
	int n;
	cin>>n;
	
	int array[n];
	
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cumulativeSum(array,n);
}
