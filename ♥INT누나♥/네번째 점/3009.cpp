#include <iostream>
using namespace std;

int main() {
	int p[4][2];
	
	for(int i = 0; i < 3; i++) {
		cin >> p[i][0] >> p[i][1];
	}
	
	for(int i = 0; i < 2; i++) {
		if(p[0][i] == p[1][i]){
			p[3][i] = p[2][i];
		}
		
		else if(p[0][i] == p[2][i]){
			p[3][i] = p[1][i];
		}
		
		else if(p[1][i] == p[2][i]){
			p[3][i] = p[0][i];
		}
	}
	cout << p[3][0] << ' ' << p[3][1];
}
