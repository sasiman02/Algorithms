#include <iostream>
using namespace std;

int S(char arr[], int N) {
	int cnt = 0;
	
	for(int i = 0; i < N; ) {
		if(arr[i++] == 'A')
			cnt++;
		if(arr[i++] == 'B')
			cnt++;
		if(arr[i++] == 'C')
			cnt++;
	}
	
	return cnt;
}

int C(char arr[], int N) {
	int cnt = 0;
	
	for(int i = 0; i < N; ) {
		if(arr[i++] == 'B')
			cnt++;
		if(arr[i++] == 'A')
			cnt++;
		if(arr[i++] == 'B')
			cnt++;
		if(arr[i++] == 'C')
			cnt++;
	}
	
	return cnt;
}

int H(char arr[], int N) {
	int cnt = 0;
	
	for(int i = 0; i < N; ) {
		if(arr[i++] == 'C')
			cnt++;
		if(arr[i++] == 'C')
			cnt++;
		if(arr[i++] == 'A')
			cnt++;
		if(arr[i++] == 'A')
			cnt++;
		if(arr[i++] == 'B')
			cnt++;
		if(arr[i++] == 'B')
			cnt++;
	}
	
	return cnt;	
}
int main() {
	int N;
	char arr[100];
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	if(H(arr, N) > S(arr, N)) {
		if(H(arr, N) > C(arr, N)) {
			cout << H(arr, N) << endl;
			cout << "Goran";
			return 0;
		}
		else if(H(arr, N) == C(arr, N)) {
			cout << H(arr, N) << endl;
			cout << "Bruno" << endl; 
			cout << "Goran";
			return 0;
		}
		else if(H(arr, N) < C(arr, N)) {
			cout << C(arr, N) << endl;
			cout << "Bruno";
			return 0;
		}
	}
	else if(H(arr, N) == S(arr, N)) {
		if(H(arr, N) > C(arr, N)){
			cout << H(arr, N) << endl;
			cout << "Adrian" << endl;
			cout << "Goran";
			return 0;
		}
		else if(H(arr, N) == C(arr, N)) {
			cout << H(arr, N) << endl;
			cout << "Adrian" << endl;
			cout << "Bruno" << endl;
			cout << "Goran" << endl;
			return 0;
		}
		else {
			cout << C(arr, N) << endl;
			cout << "Bruno";
			return 0;
		}
	}
	else {
		if(S(arr, N) > C(arr, N)) {
			cout << S(arr, N) << endl;
			cout << "Adrian";
			return 0;
		}
		else if(S(arr, N) == C(arr, N)) {
			cout << S(arr, N) << endl;
			cout << "Adrian" << endl;
			cout << "Bruno";
			return 0;
		}
		else if(S(arr, N) < C(arr, N)) {
			cout << C(arr, N) << endl;
			cout << "Bruno";
			return 0;
		}
	}
} 
