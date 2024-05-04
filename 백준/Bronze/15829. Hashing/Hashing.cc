#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int a;
	long long sum=0;
	string s;
	cin >> a;
	cin >> s;
	for (int i = 0; i < a; i++) {
		sum += (s[i] -96) * pow(31, i);
	}
	cout << sum;
	return 0;
}