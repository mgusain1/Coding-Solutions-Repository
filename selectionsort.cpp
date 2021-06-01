#include<iostream>
using namespace std;

//selection sort implementation
int selection(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int temp;
				temp = a[i];
				a[i]= a[j];
				a[j] = temp;
			}
		}
	}
}

//bubbble sort implementation
int bubble(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp = a[j];
				a[j]= a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


//insertion sort implementation
int insertion(int n,int a[]){
	for(int i=1;i<n;i++){
		int curr = a[i];
		int j = i-1;
		while(a[j]>curr&&j>=0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = curr;
	}
}
int main()
{ 
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
 	cin>>a[i];
 }	
// selection(n,a);
//bubble(n,a);
insertion(n,a);
 for(int i=0;i<n;i++){
 	cout<<a[i]<<" ";
 }
 
}
