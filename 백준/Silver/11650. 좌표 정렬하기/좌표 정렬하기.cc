#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
struct info {
	int i1;
	int i2;
};

bool compare1(info a,info b) {
	return a.i1 < b.i1;
}
bool compare2(info a, info b) {
	return a.i2 < b.i2;
}


int main() {
	int a;
	vector<info> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b,c;
		cin >> b >> c;
		v.push_back({ b,c });
	}
	sort(v.begin(), v.end(), compare2);
	stable_sort(v.begin(), v.end(), compare1);
	for (int i = 0; i < a; i++) {
		cout << v[i].i1 << " " << v[i].i2 << "\n";
	}
	return 0;
}
