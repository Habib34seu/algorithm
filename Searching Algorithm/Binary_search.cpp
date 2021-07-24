#include<bits/stdc++.h>
using namespace std;


void binary_search(int a[], int n, int s){
	
	int mid =0, left=0, right=n-1;
	
	while(left<=right){
		mid = (left+right)/2;
		if(s == a[mid]){
			cout<<"Your search number find index at "<<mid<<endl;
		return;
		}else if( s< a[mid]){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	
	cout<<"No data found!"<<endl;
	
}

int main(){
	int n;
	cout<<"Enter size of Element : ";
	cin>>n;
	int search;
	cout<<endl<<"Enter search number : ";
	cin>>search;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	binary_search(a,n, search);
	
}
