#include <iostream>
using namespace std;

int main() {
	int N, F;
	int s, q; // s ³ª¸ÓÁö q ¸ò 
	 
	cin >> N;
	cin >> F;
	

	int a = N % 100;
	
	for(int i = 0; a - i >= 0; i++) {
		if((N - a + i) % F == 0) {
			if((N - a + i) % 100 < 10){
				cout << '0' << (N - a + i)%100;
				return 0;
			}
			else {
				cout <<(N - a + i)%100;
				return 0;
			}	
		}
	}
	
	for(int i = 0; i <= 99 - a; i++) {
		if((N + i) % F == 0) {
			if((N + i) % 100 < 10){
				cout << '0' << (N - a + i)%100;
				return 0;
			}
			else {
				cout <<(N + i)%100;
				return 0;
			}				
		}
	}
}
