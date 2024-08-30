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
	int a, b, a1,a2,a3,a4,a5= 0;
	cin >> a >> b >> a1 >> a2>>a3>>a4>>a5;
	cout << a1 - a * b<<" " << a2 - a * b<<" " << a3 - a * b<<" " << a4 - a * b <<" " << a5 - a * b;
	return 0;
}


