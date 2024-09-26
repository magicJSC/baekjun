#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int m,d;
	cin >> m >> d;
	if (m == 2) {
		if (d == 18)
			cout << "Special";
		else if (d > 18)
			cout << "After";
		else
			cout << "Before";
	}
	else if (m < 2)
	{
		cout << "Before";
	}
	else if (m > 2) {
		cout << "After";
	}
	return 0;
}




