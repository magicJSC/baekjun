#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;
	int l,a,b,c,d,sum1,sum2;
	cin >> l >> a >> b >> c >> d;
	if (a % c == 0)
		sum1 = a / c;
	else
		sum1 = a / c + 1;
	if (b % d == 0)
		sum2 = b / d;
	else
		sum2 = b / d + 1;

	cout << l - max(sum1, sum2);
	return 0;
}


