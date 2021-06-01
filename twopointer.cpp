#include<iostream>
using namespace std;


//q.1 if we can confirm if the array which we will pass in leo1 if there are any triplets whose sum is 0
bool leo(int a[],int x,int n,int i){
	int j=n-1;
	while(i<j){
		if(a[i]+a[j]>x){
			j--;
		}
		else if(a[i]+a[j]<x){
			i++;
		}
		else if(a[i]+a[j]==x){
//			cout<<i<<" "<<j<<endl;
return true;
			return 0;;
		}
	}
	return 0;
}

bool leo1(int a[],int n)
{
	for(int i=0;i<n-2;i++){
		if(leo(a,-a[i],n,i+1)) return true;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<leo1(a,n);
	
}
