#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a;
	deque<int> v;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		v.push_back(i);
	}
	while (v.size() > 1) {
		v.pop_front();
		v.push_back(v.front());
		v.pop_front();
	}
	cout << v[0];
	return 0;
}
