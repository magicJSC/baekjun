#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,c = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b % 2 != 0)
			c++;
	}
	cout << c;
	return  0;
}