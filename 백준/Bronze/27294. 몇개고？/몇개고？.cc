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
	if (!(a >= 12 && a <= 16) || b == 1)
		cout << "280";
	else
		cout << "320";

	return 0;
}
