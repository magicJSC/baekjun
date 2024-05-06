#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int GDC(int a, int b);
int main() {
	int a, b,c;
	cin >> a >> b;
	c = GDC(a,b);
	cout << c << "\n";
	cout << a * b / c;
	return 0;
}

int GDC(int a,int b) {
	if (max(a, b) % min(a, b) == 0)
		return min(a, b);
	else
		return GDC(min(a,b), max(a, b) % min(a, b));
}