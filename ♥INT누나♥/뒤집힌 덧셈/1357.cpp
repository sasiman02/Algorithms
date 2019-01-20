#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char X[4], Y[4],X1[4],Y1[4];
	
	cin >> X >> Y;
	
	for(int i = 0; i < strlen(X); i++) {
		X1[i] = X[strlen(X) - i];
	}
	for(int i = 0; i < strlen(Y); i++) {
		Y1[i] = Y[strlen(Y) - i];
	}
	
	return 0;
}
