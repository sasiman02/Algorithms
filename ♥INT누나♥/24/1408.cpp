#include <iostream>
using namespace std;

int main() {
	int H1,H2,M1,M2,S1,S2;
	string str;
	int sum1;
	int sum2;
	
	getline(cin, str, '\n');
	H1 = stoi(str.substr(0,2));
	M1 = stoi(str.substr(3,4));
	S1 = stoi(str.substr(6,7));
	
	sum1 = H1*60*60 + M1*60 + S1;
	fflush(stdin);
	getline(cin, str, '\n');
	H2 = stoi(str.substr(0,2));
	M2 = stoi(str.substr(3,4));
	S2 = stoi(str.substr(6,7));
	
	sum2 = H2*60*60 + M2*60 + S2;
	
	int result;
	if(sum2 < sum1) {
		result = 3600*24 - sum1 + sum2;
	}
	else {
		result = sum2 - sum1;
	}

	
	if(result/3600 < 10) {
		cout << '0';
		
	}
	cout << result/3600 << ':' ;
	
	if((result%3600)/60 < 10){
		cout <<'0';
	}
	cout << (result%3600)/60 << ':';
	
	if((result%3600)%60 < 10){
		cout << '0';
	}
	cout << (result%3600)%60;
}
