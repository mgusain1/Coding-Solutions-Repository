#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int result = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int suma=0;
	for(int i=0;i<n;i++){
		suma +=a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[i] = -1*a[i];
	}
	int maxsum =0;
	int sum =0;
	for(int i=0;i<n;i++){
		sum +=b[i];
		if(sum<0){
			sum= 0;
		}
		maxsum = max(sum,maxsum);
	}
	
	result = suma+maxsum;
	cout<<max(result,maxsum);
}
