#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main() {
	int a;
	while (true)
	{
		int sum =0;
		cin >> a;
		if (a != 0) {
			for (int i = 1; i <= a; i++) {
				sum += i;
			}
		}
		else
			break;

		cout << sum << "\n";
	}
	return 0;
}
