#include <iostream>
using namespace std;

int main() {
	int N, M;
	int arr[300][300];
	
	cin >> N >> M;
	
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> arr[i][j];	
		}
	}
	
	int T;
	int O[10000] = {};
	
	cin >> T;
	
	int tmp;
	
	int i, j, x, y;
	
	for(int t = 0; t < T; t++) {
		cin >> i >> j >> x >> y;
//		tmp = j;
//		for(; i <= x; i++) {
//			if(i < x) {
//				for(; j <= M; j++) {
//					O[t] += arr[i - 1][j - 1];
//				}
//				j = tmp;	
//			}
//		
//			else if(i == x) {
//				for(; j <= y; j++) {
//					O[t] += arr[i - 1][j - 1];
//				}
//			}
//		}
		tmp = i;
		for(; j <= y; j++) {
			if(j < y) {
				for(;i <= x; i++) {
					O[t] += arr[i - 1][j - 1];
				}
				i = tmp;
			}
			
			else if(j == y) {
				for(;i <= x; i++) {
					O[t] += arr[i - 1][j - 1];
				}
			}
		}
	}
	
	for(int t = 0; t < T; t++) {
		cout << O[t] << endl;
	}
}
