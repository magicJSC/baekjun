#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << 10000 + b * 1000;
	}
	else if (a == b || a == c) {
		cout << 1000 + a * 100;
	}
	else if (c == b) {
		cout << 1000 + b * 100;
	}
	else
		cout << max(max(a,b),c) * 100;
	return 0;
}


