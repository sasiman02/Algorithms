#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[12],b[12];
	int cnt[100000] = {};
	bool car = false;
	for(int n = 0; ; n++) {
		cnt[n] = 0;
		cin >> a >> b;
		if(a[0] == '0' && b[0] == '0') {
			for(int j = 0; j < n; j++) {
				cout << cnt[j] << endl;
			}
			break;
		}
		
		for(int i = strlen(a) - 1; i >= 0; i--) {
			if(car == false) {
				if(((int)a[i] - 48) + ((int)b[i] - 48) >= 10) {
					car = true;
					cnt[n]++;
				}
				else {
					car = false;
				}
			}
			else {
				if(((int)a[i] - 48) + ((int)b[i] - 48) + 1 >= 10) {
					car = true;
					cnt[n]++;
				}
				else {
					car = false;
				}
			}
		}
	}
}
