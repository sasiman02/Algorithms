#include <iostream>
using namespace std;

int main() {
	int max = 0;
	int n ,t;
	int status = 0;
	
	for(int i = 0; i < 4; i++) {
		cin >> n >> t;
		
		status += t - n;
		
		if(status>max) {
			max = status;
		}
	}
	
	cout << max;
}
