#include<iostream>
using namespace std;

int main() {
	int a, b, i = 0;
	bool c[10000];
	while(true) {
		cin >> a >> b;
		if(a == 0 && b == 0) {
			break;
		}
		if(a > b) {
			c[i] = true;
		}
		else {
			c[i] = false;
		}
		i++;
	}
	for(int n = 0; n < i; n++) {
		if(c[n] == true) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
} 
