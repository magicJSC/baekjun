#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {

	int a, b;
	cin >> a >> b;
	if (b % 2 != 0)
		b++;

	if (a >= b / 2)
		cout << "E";
	else
		cout << "H";
	return 0;
}


