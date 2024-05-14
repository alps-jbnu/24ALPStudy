#include<iostream>
using namespace std;
int arr[2187][2187], minus_one=0, zero=0, plus_one=0;
void sol(int x, int y, int n){
	int count1=0, count2=0;
	for(int i=x; i<x+n; i++){
		for(int j=y; j<y+n; j++){
			if(arr[i][j]==-1)
				count1++;
			else if(arr[i][j]==1)
				count2++;
		}
	}
	if(!(count1+count2)){
		zero++;
	}
	else if(count1==n*n){
		minus_one++;
	}
	else if(count2==n*n){
		plus_one++;
	}
	else{
		sol(x, y, n/3);
		sol(x, y+n/3, n/3);
		sol(x+n/3, y, n/3);
		sol(x+n/3, y+n/3, n/3);
		sol(x+n*2/3, y, n/3);
		sol(x, y+n*2/3, n/3);
		sol(x+n*2/3, y+n*2/3, n/3);
		sol(x+n*2/3, y+n/3, n/3);
		sol(x+n/3, y+n*2/3, n/3);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	sol(0, 0, n);
	cout<<minus_one<<"\n"<<zero<<"\n"<<plus_one;
	return 0;
}
