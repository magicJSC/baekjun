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
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;

		cout << a / b << " " << a % b << " / " << b << "\n";
	}
}