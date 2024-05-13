#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main() {
	int a,b,c;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b >> c;
		cout << "Case #" << i << ": " << b + c<<"\n";
	}
	return 0;
}
