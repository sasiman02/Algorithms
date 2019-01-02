#include <iostream>
#include <cstring>
using namespace std;

char f(char str[]) {
	char strA[7] = "000000";
	char strB[7] = "001111";
	char strC[7] = "010011";
	char strD[7] = "011100";
	char strE[7] = "100110";
	char strF[7] = "101001";
	char strG[7] = "110101";
	char strH[7] = "111010";
	
	int cnt[8] = {};
	
	for(int i = 0; i < 6; i++) {
		if(str[i] != strA[i])
			cnt[0]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strB[i])
			cnt[1]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strC[i])
			cnt[2]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strD[i])
			cnt[3]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strE[i])
			cnt[4]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strF[i])
			cnt[5]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strG[i])
			cnt[6]++;
	}
	for(int i = 0; i < 6; i++) {
		if(str[i] != strH[i])
			cnt[7]++;
	}

	for(int i = 0; i < 8; i++) {
		if(cnt[i] <= 1){
			if(i == 0)
				return 'A';
			if(i == 1)
				return 'B';
			if(i == 2)
				return 'C';
			if(i == 3)
				return 'D';
			if(i == 4)
				return 'E';
			if(i == 5)
				return 'F';
			if(i == 6)
				return 'G';
			if(i == 7)
				return 'H';
		}	
	}
	
	return 'X';
}

int main() {
	int N;
	
	cin >> N ;
	
	char O[10];
	char str[6];
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < 6; j++) {		
			cin >> str[j];
		}
		O[i] = f(str);
		
		if(O[i] == 'X') {
			cout << i + 1;
			return 0;
		}
	}
	
	for(int i = 0; i < N; i++) {
		cout << O[i];
	}
}
