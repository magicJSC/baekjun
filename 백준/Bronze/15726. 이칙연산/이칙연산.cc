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
	long double a,b,c;
	cin >> a >> b>> c;
	cout << max((int)(a * b / c), (int)(a / b * c));
}