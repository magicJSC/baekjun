#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int a,b;
	cin >> a>>b;
	if ((a * 8 + b * 3) - 28 > 0)
		cout << (a * 8 + b * 3)-28;
	else
		cout << 0;
	return 0;
}
