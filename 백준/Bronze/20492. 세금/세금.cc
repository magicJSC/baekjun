#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a;
	cin >> a;
	cout << a - a * 22 / 100 << " " << (a - a * 20 / 100) + ((a - a * 80 / 100) - (a - a * 80 / 100) * 22/100);
	return 0;
}
