#include <stdio.h>

int DP[1000001];

int main() {
	int N;
	int i;
	 
	scanf("%d", &N);
	 
	for(i = 2; i <= N; i++) { // N == 1 이 될 때까지의 횟수 계산 
		DP[i] = DP[i - 1] + 1;
		if(i % 2 == 0 && DP[i] > DP[i / 2] + 1) {
			DP[i] = DP[i / 2] + 1;
		}
		if(i % 3 == 0 && DP[i] > DP[i / 3] + 1) {
			DP[i] = DP[i / 3] + 1;
		}
	}
	
	printf("%d", DP[N]);
	
}
