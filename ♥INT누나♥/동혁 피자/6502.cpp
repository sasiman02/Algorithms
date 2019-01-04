#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r[1000], w[1000], l[1000];
	bool o[1000];
	int i;
	
	for(i = 0; ;i++) {
		cin >> r[i] ;
		if(r[i] == 0)
			break;
		cin >> w[i] >> l[i];
		
	
		
		if(2*r[i] >= sqrt(w[i]*w[i] + l[i]*l[i])) {
			o[i] = true;
		}
		else
			o[i] = false;
	}
	
	for(int j = 0; j < i; j++) {
		if(o[j] == true) {
			cout << "Pizza " << j + 1 << " fits on the table." << endl;
		}
		else
			cout << "Pizza " << j + 1 << " does not fit on the table." << endl;
	}
}
