#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b;
	bool c = false;
	
	for(int i = 1; c == false ;i++) {
		for(int j = 1; ; j++) {
			if(a/i == b/j) {
				cout << a/i << endl;
				c = true;
				break;
			}
		}
	}
	
	c = false;
	for(int i = 1; c == false ; i++) {
		for(int j = 1; ; j++) {
			if(a*i == b*j) {
				cout << a*i;
				c = true;
				break;
			}
		}
	}
}
