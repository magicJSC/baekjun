#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	long long r,c,n;
	cin >> r>> c>>n;
	long long x = r / n;
	if (r %n > 0)
		x++;
	long long y = c / n;
	if (c%n > 0)
		y++;
	cout << x * y;
	return 0;
}
