#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	cout << a1 * 56 + a2 * 24 + a3 * 14 + a4 * 6;
	return 0;
}
