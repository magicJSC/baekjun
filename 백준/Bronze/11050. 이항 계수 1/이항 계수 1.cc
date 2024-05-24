#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int GDC(int a, int b);
int main() {
	int a, b, c;
	cin >> a >> b;
	c = GDC(a, b);
	cout << c;
	return 0;
}

int GDC(int a, int b) {
	if (b == 0 || a == b)
		return 1;
	return GDC(a - 1, b - 1) + GDC(a - 1, b);
}