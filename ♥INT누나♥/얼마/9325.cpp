#include <iostream>
using namespace std;

int main() {
	int T, s, n, q, p;
	
	cin >> T;
	
	int O[100000];
	
	for(int i = 0; i < T; i ++) {
		cin >> s;
		cin >> n;
		
		for(int j = 0; j < n; j++) {
			cin >> q >> p;
			s += q * p;
		}
		
		O[i] = s;
	}
	
	for(int i = 0; i < T; i++) {
		cout << O[i] << endl;
	}
}
