#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if (a + b + c == 180) {
		if (a == b && a == c && b == c)
			cout << "Equilateral";
		else if (a == b || a == c || b == c)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";

	return 0;
}




