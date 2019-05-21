#include<iostream>
using namespace std;
typedef struct dunchi {
	int weight;
	int height;
	int ranking = 1;
};

int main() {
	dunchi d[50];
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> d[i].weight;
		cin >> d[i].height;
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(d[i].height < d[j].height && d[i].weight < d[j].weight) {
				d[i].ranking++;	
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		cout << d[i].ranking << " ";
	}
}
