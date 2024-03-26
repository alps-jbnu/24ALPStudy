 #include <iostream>

using namespace std;


int main(int argc, char**argv) {
	
	int arr[2][7]={0}; //2번째 차원 배열 크기 주의
	
	int N, K;
	int res = 0;
	
	cin >> N >> K;
	
	for(int i=0; i<N; i++){
		int S, Y;
		cin >> S >> Y;
		
		arr[S][Y]++; //사실 뭔지 모름 아마도 학년별로 숫자 세는 경우..?
	}
	
	 
	for(int i=0; i<2; i++){
		for(int j=1; j<7; j++){
			
			if(arr[i][j]!=0){ //0인 요소 연산 제외
				res += arr[i][j]/K;
				
				if(arr[i][j]%K!=0)
					res++; //홀수일경우 나눠떨어지게
								
			}
		}
     }
   
	cout << res;	

	return 0;
}
