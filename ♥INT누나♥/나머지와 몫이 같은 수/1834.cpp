#include<iostream>
using namespace std;

int main() {
	long long N;
	long long sum = 0;
	long long cnt = 0;
	
	cin >> N;
	
	for(long long i = 1; i <  2000001; i++) {		
		if((i/N) == (i%N)) {
			sum += i;
			cnt++;
		}
	}
//	cout << cnt << endl; // 오류 확인을 위한 코드 
//	for(long long i = 1; i < N; i++) {
//		val = (N * i) + i;
//		sum += val;
//	}
//	
	cout << sum ;
}
