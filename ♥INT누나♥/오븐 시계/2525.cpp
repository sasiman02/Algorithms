#include <iostream>
using namespace std;

int main() {
	int h , m;
	int s;
	
	cin >> h >> m;
	cin >> s;
	
	if((m + s) >= 60) {
		h = h + (m + s)/60;
		cout << h%24 << ' ' << (m + s)%60;
	}	
	else {
		cout << h << ' ' << m + s;
	}
}
