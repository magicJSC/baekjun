#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;
	while (true) {
		int a;
		cin >> a;
		if (a == 0)
			break;
		for (int i = 1; i <= a; i++) {
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
}