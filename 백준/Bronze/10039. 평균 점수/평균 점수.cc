#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		if (a < 40)
			a = 40;
		sum += a;
	}
	cout << sum / 5;
	return 0;
}




