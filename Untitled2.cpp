#include<iostream>
using namespace std;

int linear(int n,int a1[],int key){
	for(int i=0;i<n;i++){
		if(a1[i]==key){
			return i;
		}
	}
	return -1;
}

int binary(int n,int arr[],int key){
	int s=0;
	int e = n;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	cout<<"the k element is at "<<linear(n,a,k)<<endl;
	cout<<"the k element is at "<<binary(n,a,k);
	
}
