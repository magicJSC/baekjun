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
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if (a < b && b < c && c < d)
		cout << "Fish Rising";
	else if (a > b && b > c && c > d)
		cout << "Fish Diving";
	else if (a == b && b == c && c == d)
		cout << "Fish At Constant Depth";
	else
		cout << "No Fish";
}