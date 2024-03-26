#include <iostream>

using namespace std;


int main(int argc, char**argv) {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[2][7]={0};
	
	int N, K;
	int res=0;
	
	cin >> N >> K;
	
	for(int i=0; i<N; i++){
		int S, G;
		cin >> S >> G;
		
		arr[S][G]++;
	}
	
	 
	for(int i=0; i<2; i++){
		for(int j=1; j<7; j++){
			
			if(arr[i][j]!=0){
				
				res += arr[i][j]/K;
				
				if(arr[i][j]%K!=0)
					res++;
								
			}
		}
     }
   
	cout << res;	

	return 0;
}
