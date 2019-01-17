#include <iostream>
using namespace std;

int main() {
	int N;
	int r[10000], e[10000], c[10000];
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> r[i] >> e[i] >> c[i];
	}
	
	for(int i = 0; i < N; i++) {
		if(r[i] > e[i] - c[i]) {
			cout << "do not advertise" << endl;
		}
		else if(r[i] == e[i] - c[i]) {
			cout << "does not matter" << endl;
		}
		else if(r[i] < e[i] - c[i]) {
			cout << "advertise" << endl;
		}
	}
}
