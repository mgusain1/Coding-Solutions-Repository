#include<iostream>
using namespace std;

int main()
{
	///best approach for subarray sum with log n 
	int n;
	cin>>n;
	int a[n];
	int maxsum =0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum =0;
	for(int i=0;i<n;i++){
	sum +=a[i];
	if(sum<0){
		sum = 0;
	}	
	maxsum = max(sum,maxsum);
	}
	
	cout<<maxsum;
	return 0;
}
