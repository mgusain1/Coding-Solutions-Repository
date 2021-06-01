#include<iostream>
using namespace std;
#include<stdio.h>

int arr1(int n, int a[],int mx){
	for(int i=0;i<n;i++){
		mx = max(mx,a[i]);
		cout<<mx<<" ";
	}
	
}

int sumarr(int n,int a[]){
	for(int i=0;i<n;i++){
		int sum =0;
		for(int j=i;j<n;j++){
			sum +=a[j];
			cout<<sum<<" ";
		}
	}
}



int main()
{
	int n;
	int mx = -19999;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	arr1(n,a,mx);
sumarr(n,a);
}
