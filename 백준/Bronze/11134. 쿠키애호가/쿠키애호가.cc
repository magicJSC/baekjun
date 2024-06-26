#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b, c;
		cin >> b >> c;
		if (b % c == 0)
			cout << b / c<<"\n";
		else
			cout << (b / c) + 1<<"\n";
	}
	return 0;
}
