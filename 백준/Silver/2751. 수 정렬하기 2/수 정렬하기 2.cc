#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool compare(int a, int b) {
	return a < b;
}

int main() {
	int a;
	int b;
	int sum = 0;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < a; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}
