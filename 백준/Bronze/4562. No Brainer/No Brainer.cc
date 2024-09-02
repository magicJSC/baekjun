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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b, c;
		cin >> b >> c;
		if (b < c)
			cout << "NO BRAINS" << "\n";
		else
			cout << "MMM BRAINS" << "\n";
	}
	return 0;
}


