#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubblesort(int *A, int N) {
		
	for(int i = 0; i < N ; i++) {
		for(int j = 0; j < N - i - 1; j++)	{
			if( A[j] > A[j + 1]) {
				swap(A[j], A[j + 1]);
			}
		}
	}
}

void f(int A[], int B[],const int N) {
	int S = 0;
	
	int rankB[N];
	
	bubblesort(A, N);
//	bubblesort(B, N);
//	cout << "Bubble result" << endl;
//	
//	for(int i = 0; i < N; i++) {
//		cout << A[i] << endl;
//	}
//	cout << "Bubble result" << endl;
	
	for(int i = 0; i < N; i++) {
		rankB[i] = N;
	}
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(B[i] >= B[j] ) {
				rankB[i]--;
			}
		}
	}
	
//	cout << "rank" << endl;
//	for(int i = 0; i < N; i++) {
//		cout << rankB[i] << endl;
//	}
//	cout << "rank" << endl;
//	int A1[N];
	
//	for(int i = 0; i < N; i++) {
//		for(int j = 0; j < N; j++) {
//			if(rankB[j] == i) {
//				A1[j] = A[i];
//			}
//		}
//	}
	
//	for(int i = 0; i < N; i++) {
//		cout << A1[i] << endl;
//	}
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if((rankB[j] == i)) {
				S += A[i]*B[j];	
			}
		}
	}
	

//	for(int i = 0; i < N; i++) {
//		S += A[i]*B[N - 1 - i];
//	}
	
	cout << S;
}



int main() {
	int N;
	
	cin >> N;
	
	int A[51];
	int B[51];


		
	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for(int i = 0; i < N; i++) {
		cin >> B[i];
	}
	
	
	f(A,B,N);
}
