#include <iostream>
using namespace std;

int main() {
	int T;
	int C;
	cin >> T;
	int a[100];
	int b[100];
	int c[100];
	int d[100];
	for(int i = 0; i < T; i++) {
		cin >> C;
		a[i] = C/25;
		b[i] = C%25/10;
		c[i] = C%25%10/5;
		d[i] = C%25%10%5;
	}
	for(int i = 0; i < T; i++) {
		cout << a[i] << ' ' << b[i] << ' ' << c[i] << ' ' << d[i] << endl;
	}
}
