#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int *w = new int [num];
	for (int i=0; i<num; i++) {
		cin >> *(w+i);
	}
	for (int i=0; i<num; i++) {
			if (*(w+i)%2==0) {
				delete [ ] w;
			}
	}
	for (int i=0; i<num; i++) {
		cout << *(w+i)<<'\n';
	}
}