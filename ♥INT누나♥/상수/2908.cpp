#include<iostream>
using namespace std;

int main() {
	char x[3],y[3];
	
	cin >> x >> y;
	
	for(int i = 0; i < 3; i++) {
		if(x[2 - i] > y[2 - i]) {
			cout << x[2] << x[1] << x[0];
			break;
		}
		else if(x[2 - i] < y[2 - i]) {
			cout << y[2] << y[1] << y[0];
			break;
		}
		if(i == 2 && x[2 - i] == y[2 - i]) {
			cout << y[2] << y[1] << y[0];
		}
	}
}
