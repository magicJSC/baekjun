#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int a;
int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b,sum =0;
		cin >> b;
		for (int i = 0; i < b; i++) {
			int c;
			cin >> c;
			sum += c;
		}
		if (sum > 0)
			cout << "Right" << "\n";
		else if (sum == 0)
			cout << "Equilibrium" << "\n";
		else
			cout << "Left" << "\n";
	}
	return 0;
}
