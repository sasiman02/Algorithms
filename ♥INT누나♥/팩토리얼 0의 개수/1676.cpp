#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N;
	
	cin >> N;
	
	for(int i = N - 1; i > 0; i-- ) {
		N = N * i;
	}
	
	for(int i = 1; ;i++) {
		if(N % (int)pow(10, i) != 0){
			cout << i - 1;
			break;
		}
	}
}
