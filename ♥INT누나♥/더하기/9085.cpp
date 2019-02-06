#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int N;
	int o;
	int *sum = new int;
	for(int t = 0; t < T; t++) {
		cin >> N;
		*(sum + t) = 0;
		for(int n = 0; n < N; n++) {
			cin >> o;
			*(sum + t) += o;
		}
	}
	for(int t = 0; t < T; t++) {
		cout << *(sum + t) << endl;
	}	
} 
