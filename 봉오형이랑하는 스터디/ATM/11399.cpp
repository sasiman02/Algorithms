#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	int p[1000];
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> p[i];
	}
	
	sort(p ,p + N);
	
	int sum = 0;
	
//	for(int i = 0; i < N; i++) {
//		int tmp = 0;
//		for(int j = 0; j <= i; j++) {
//			tmp += p[j];	
//		}
//		sum += tmp;
//	}

	for(int i = 0; i < N; i++) {
		sum += p[i] * (N - i);
	}
	
	cout << sum;
}
