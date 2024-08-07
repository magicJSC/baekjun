#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {

	int a, b,x,c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> a >> b >> x;
		cout << a * (x - 1) + b<<"\n";
	}
	return 0;
}


