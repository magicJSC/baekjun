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
	for (int i = 0; i < 8; i++) {
		cin >> a;
		if (a != 1 && a != 0)
		{
			cout << "F";
			break;
		}

		if (i < 7)
			continue;
		cout << "S";
	}
	return 0;
}
