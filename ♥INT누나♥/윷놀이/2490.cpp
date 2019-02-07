#include <iostream>
using namespace std;

int main() {
	bool b[3][4];
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> b[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++) {
		int cnt = 0;
		for(int j = 0; j < 4; j++) {
			if(b[i][j] == true) {
				cnt++;
			}
		}
		switch(cnt) {
			case 0 : {
				cout << 'D' << endl;
				break;
			}
			
			case 1 : {
				cout << 'C' << endl;
				break;
			}
			
			case 2 : {
				cout << 'B' << endl;
				break;
			}
			
			case 3 : {
				cout << 'A' << endl;
				break;
			}
			
			case 4 : {
				cout << 'E' << endl;
				break;
			}
		}
	}
} 
