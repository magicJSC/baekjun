#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {

	float a, b;
	cin >> a >> b;
	cout.precision(2);
	printf("%.1f", a * b / 2);
	return 0;
}


