#include <iostream>
using namespace std;

int main() {
	unsigned int A, B, C;
	
	cin >> A >> B >> C;
	if(C == B) {
		
	}
	else if(B > C) {
		
	}
	else if(A / (C-B) >= 0) {
		cout << A / (C-B) + 1;
		return 0;
	}
	
	cout << "-1";
}
