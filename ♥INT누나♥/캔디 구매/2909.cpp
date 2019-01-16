#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int C,K;
	
	cin >> C >> K;
	
	if(((int)pow(10, K) / 2) <= C % (int)pow(10, K)) {
		cout << C - C%(int)pow(10, K) + (int)pow(10, K);
		return 0;
	}
	else {
		cout << C - C%(int)pow(10, K);
		return 0;
	}
}
