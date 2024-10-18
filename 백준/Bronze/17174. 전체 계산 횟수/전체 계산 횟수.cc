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
	int a,b,count;
	cin >> a >> b;
	count += a;
	while (a / b != 0) {
		a /= b;
		count += a;
	}
	cout << count;
}