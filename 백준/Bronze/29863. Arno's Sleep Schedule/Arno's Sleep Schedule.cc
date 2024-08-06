#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {

	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		a = 24 - a;
		cout << a + b;
	}
	else {
		cout << b - a;
	}
	return 0;
}


