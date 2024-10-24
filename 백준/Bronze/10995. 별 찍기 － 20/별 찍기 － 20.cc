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
		if (i % 2 == 0)
			cout << " ";
		for (int j = 0; j < a; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
	
}