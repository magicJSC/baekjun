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
	long long spicy = 0,level=0;
	cin >> spicy;
	for (int i = 12; i >= 0; i--) {
		while (spicy >= pow(7, i)) {
			spicy -= pow(7, i);
			level += pow(3,i);
		}
	}
	cout << level;
	return 0;
}


