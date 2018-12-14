#include <iostream>
using namespace std;

int f(int A[], int B[]) {
	int N = sizeof(A);
	int S[N];
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			S[i] += A[j]*B[j];
		}
		
	} 
	int min;
	
	return min;
}

int main() {
	int N;
	
	cin >> N;
	
	int A[N];
	int B[N];
	
	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	for(int i = 0; i < N; i++) {
		cin >> B[i];
	}
	
	f(A,B);
}
