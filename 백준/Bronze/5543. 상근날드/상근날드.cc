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
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	cout << min(a, min(b, c)) + min(d,e) - 50;

	return 0;
}


