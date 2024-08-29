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
	int a, b, c= 0;
	cin >> a >> b >> c;
	cout << min(min(a,b),c)<<" "<<a + b + c - min(min(a, b), c) - max(max(a, b), c) <<" " << max(max(a, b), c);

	return 0;
}


