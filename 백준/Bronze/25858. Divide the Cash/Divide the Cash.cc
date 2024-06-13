#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a, b,sum=0;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v.push_back(c);
		sum += c;
	}
	for (int i = 0; i < a; i++) {
		cout << v[i] * b / sum << "\n";
	}
	return 0;
}
