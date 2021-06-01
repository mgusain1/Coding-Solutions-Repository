#include<iostream>
using namespace std;

int main()
{
	int n;
	int s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	int i=0,j=0,st = 0,end=0;
	while(j<n&&sum+a[j]<=s){
		sum+=a[j];
		j++;
	}
	if(sum==s){
		cout<<i+1<<j;
	}
	
	while(j<n){
		sum+=a[j];
		if(sum>s){
			sum-=a[i];
			i++;
		}
		if(sum==s){
			st=i+1;
			end = j+1;
			break;
		}
		j++;
	}
	cout<<st<<end;
}
