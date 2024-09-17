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
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		cout << 2 + c - b << "\n";
	}
	

	return 0;
}




