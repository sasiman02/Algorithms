#include<iostream>
using namespace std;

int main() {
	char x[3],y[3];
	
	cin >> x >> y;
	
	for(int i = 0; i < 3; i++) {
		if(x[2 - i] > y[2 - i]) {
			for(int j = 0; j < 3; j++) {
				cout << x[2 - j];
				break;
			}
		}
		else if(x[2 - i] < y[2 - i]) {
			for(int j = 0; j < 3; j++) {
				cout << y[2 - j];
				break;
			}
		}
		if(i == 2 && x[2 - i] == y[2 - i]) {
			for(int j = 0; j < 3; j++) {
				cout << x[2 - j];
			}
		}
	}
}
