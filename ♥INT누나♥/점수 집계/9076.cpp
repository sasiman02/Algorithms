#include <iostream>
using namespace std;
int max1(int arr[], int T) {
	int max = arr[0];
	
	for(int i = 0; i < T; i++) {
		if(max < arr[i])
			max = arr[i];
	}
	
	return max;
}

int min1(int arr[], int T) {
	int min = arr[0];
	for(int i = 0; i < T; i++) {
		if(min > arr[i])
			min = arr[i];
	}
	
	return min;
}
int main() {
	int T;
	int score[5];
	int s[3];
	int min, max;
	int minIndex, maxIndex;
	int O[10] ={};
	cin >> T;
	
	for(int i = 0; i < T; i++) {
		for(int m = 0; m < 5; m++) {
			cin >> score[m];
		}
		min = score[0];
		max = score[0];
		minIndex = 0;
		maxIndex = 0;
		
		for(int j = 0; j < 5; j++) {
			if(min > score[j]){
				minIndex = j;
				min = score[j];
			}
		}
		
		for(int k = 0; k < 5; k++) {
			if(max < score[k]){
				maxIndex = k;
				max = score[k];
			}
		}
		int cnt = 0;
		
		for(int l = 0; l < 5; l++) {
			if( l != maxIndex && l != minIndex) {
				s[cnt++] = score[l];
			}
		}
		
		if(max1(s, 3) - min1(s, 3) >= 4)
			O[i] = 0;
		else 
			O[i] = s[0] + s[1] + s[2];
	}
	
	for(int i = 0; i < T; i++) {
		if(O[i] != 0) 
			cout << O[i] << endl;
		else
			cout <<"KIN" << endl;
	}
}
