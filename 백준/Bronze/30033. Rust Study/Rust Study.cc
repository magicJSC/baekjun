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
	int a,sum = 0;
	cin >> a;
	vector<int> v1;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		v1.push_back(b);
	}
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (v1[i] <= b)
			sum++;
	}
	cout << sum;
	return 0;
}


