#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int a;
	vector<int> v;
	for (int i = 0; i < 6; i++) {
		cin >> a;
		v.insert(v.end(), a);
	}
	cout << 1- v[0]<<" " << 1 - v[1] << " " << 2 - v[2] << " " << 2 - v[3] << " "<<2 - v[4] << " " << 8 - v[5];
	return 0;
}