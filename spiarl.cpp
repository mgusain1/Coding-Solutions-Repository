#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	int r_start = 0,r_end= n-1,c_start = 0,c_end=m-1;
	while(r_start<=r_end&&c_start<=c_end){
		for(int col = c_start;col<=c_end;col++){
			cout<<a[r_start][col]<<" ";
		}
		r_start++;
		
		for(int row = r_start;row<=r_end;row++){
			cout<<a[row][c_end]<<" ";
		}
		c_end--;
		
		if(r_start<=r_end){
			for(int col = c_end;col>=c_start;col--){
			cout<<a[r_end][col]<<" ";
		}
		r_end--;
		}
		
		if(c_start<=c_end){
			for(int row = r_end;row>=r_start;row--){
			cout<<a[row][c_start]<<" ";
		}
		c_start++;
		}
	}
}
