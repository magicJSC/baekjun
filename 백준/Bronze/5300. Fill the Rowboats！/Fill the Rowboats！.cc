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
	for (int i = 1; i <= a; i++) {
		cout << i<<" ";
		if (i == a || i % 6 == 0)
			cout << "Go! ";
	}
}