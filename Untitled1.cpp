#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#include<cmath>

int main()
{
	//checking for prime number
	int n;
	cin>>n;
	bool flag = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<"not a prime number";
			flag = 1;
			
			break;
		}
	}
	if(flag==0){
		cout<<" aprime";
	}
	//reversing a number
	int y;
	cin>>y;
	int res;
	int last;
	while(y){
		last = y%10;
		res = res*10+last;
		y = y/10;
	}
	cout<<res;
	//checking for armstrong number
	int m;
	cin>>m;
	int temp;
	temp = m;
	int res1;
	int las;
	while(temp){
		las = temp%10;
		res1 += pow(las,3);
		temp = temp/10;
	}
	if(m==res1){
		cout<<"armstrong";
	}else{
		cout<<"not armstrong";
	}
	
}
