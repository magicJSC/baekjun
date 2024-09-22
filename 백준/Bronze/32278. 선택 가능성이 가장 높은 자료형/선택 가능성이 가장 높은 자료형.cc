#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	long long a;
	cin >> a;
	if (a <= 32767 && a >= -32768)
		cout << "short";
	else if (a >= -2147483648 && a <= 2147483647)
		cout << "int";
	else
		cout << "long long";
	return 0;
}




