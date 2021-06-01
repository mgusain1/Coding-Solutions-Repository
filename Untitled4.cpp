#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	
	int i=0;
	int j=n-1;
	while(i<j){
		if(a[i]+a[j]<k){
			i++;
		}
		else if(a[i]+a[j]>k){
			j--;
		}
		else{
			cout<<i<<" "<<j;
			return 0;
		}
	}
	cout<<k<<" not present";
	return 0;
}
