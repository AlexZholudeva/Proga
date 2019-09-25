#include <iostream>
using namespace std;

void main () {
	int num;
	cin >> num;
	int *w = new int [num];
	for (int i=1; i<=num; i++) {
		cin >> *(w+i);
	}
	for (int i=1; i<=(num -1); i++) {
		for (int j=i+1; j<=num; j++) {
			if (*(w+i) > *(w+j)) {
				int g=*(w+i);
				*(w+i)=*(w+j);
				*(w+j)=g;
			}
		}
	}
	for (int k=num; k>0; k--) {
		cout << *(w+k) << '\n';
	}
}
