#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int a,sum =0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum;
	return 0;
}