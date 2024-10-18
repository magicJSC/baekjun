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
	int a;
	cin >> a;
	cout << "Gnomes:\n";
	for (int i = 0; i < a; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (x <= y && y <= z)
			cout << "Ordered\n";
		else if (z <= y && y <= x)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}