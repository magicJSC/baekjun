#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

long long fac(long long a) {
	if (a == 1)
		return 1;
	if (a == 0)
		return 1;

	return fac(a - 1) * a;
}

int main() {
	long long a;
	cin >> a;
	cout << fac(a);
	return 0;
}


