#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int maximum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//brute force approach
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ";
				sum+=a[k];
			}
			cout<<endl<<"sum is"<<sum;
			maximum = max(sum,maximum);
			cout<<endl;
		}
	}
	cout<<"maximum is"<<maximum;
}
