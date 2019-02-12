#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	int H,M,D;
	string str;
	int sum = 0;
	
	cin >> N;
	for(int i = 0; i < N; i++) {
		fflush(stdin);
		getline(cin, str, '\n');
		H = stoi(str.substr(0,1));
		M = stoi(str.substr(3,4));
		D = stoi(str.substr(6,7));
		
		cout << H << endl;
		cout << M << endl;
		cout << D << endl;

		for(int j = 0; j < D; j++) {
			if(60<=M) {
				M = 0;
				H++;
				if(H==24) {
					H = 0;
				}
			}
			if(H>=7 && H<19) {
				sum += 10;
			}
			else {
				sum += 5;
			}
			M++;
		}
	}
	
	cout << sum;
}
