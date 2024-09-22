#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int p, a, m;
	cin >> p >> a >> m;
	if (p * a > m)
		cout << p * a - m;
	else
		cout << 0;
	return 0;
}




