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
	int a,b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int money;
		cin >> money;
		v.push_back(money);
	}
	for (int i = a; i < a + b; i++) {
		v.push_back(0);
	}
	for (int j = 0; j < a; j++) {
		for (int i = 0; i < a + b; i++) {
			int money;
			cin >> money;
			v[j] -= money;
			v[i] = v[i] + money;
		}
	}
	for (int i = 0; i < a + b; i++) {
		cout << v[i] <<" ";
	}
	return 0;
}


