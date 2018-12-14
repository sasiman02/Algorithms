#include <iostream>
using namespace std;

int main() {
	int N, M;
	
	cin >> N >> M;
	
	int arr[N][M];
	for(int j = 0; j < N; j++) {
		for(int i = 0; i < M; i++) {
			cin >> arr[j][i];
		}
	}
	
	int K;
	
	cin >> K;
	
	int sum[K] = {};
	
	for(int n = 0; n < K; n++) {
		int i, j , x , y;
		
		cin >> i >> j >> x >> y;

		if(j != y) {
			for(;i - 1 < N; i++) {
				sum[n] += arr[i - 1][j - 1];
			}
			
			for(;j < y - 1; j++) {
				for(int s = 0; s < N; s++) {
					sum[n] += arr[s][j];
				}
			}
			
			for(int s = 0; s < x; s++) {
				sum[n] += arr[s][y - 1];
			}
		}
		else {
			for(; i - 1 < x; i++) {
					sum[n] += arr[i - 1][j - 1];
			}
		}
	}
	
	for(int n = 0; n < K; n++) {
		cout << sum[n] << endl;
	}	
}
