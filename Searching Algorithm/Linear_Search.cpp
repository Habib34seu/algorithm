#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,v, temp=0;
	cout<<"Enter List Size :";
	cin>>n;
	cout<<endl<<"Enter Search Value :";
	cin>>v;
	int a[n];
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int i=0; i<n;i++){
		if(v==a[i]){
			temp=i;
			break;
		}
	}
	if(temp != 0){
		cout<<endl<<"Find value : " <<v<<" Position : " <<temp;
	}else{
		cout<<endl<<"Value not found";
	}
	
}
