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

	int a,b=0,c=0;
	cin >> a;

	for (int i = 0; i < a; i++) {
		char chr;
		cin >> chr;
		if (chr == 'D')
			b++;
		else if (chr == 'P')
			c++;
		
		if (max(c, b) - min(b, c) == 2)
			break;
	}

	cout << b << ":" << c;
}