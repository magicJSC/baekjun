#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	double a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		double b, c, d;
		cin >> b >> c >> d;
		printf("$%.2f\n",round((b * c * d) * 100) / 100);
	}
	return 0;
}


