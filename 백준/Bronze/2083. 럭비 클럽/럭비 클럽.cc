#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	string a;
	int b, c;
	
	while (true)
	{
		cin >> a >> b >> c;
		if (a == "#")
			break;
		if (b > 17 || c >= 80) {
			cout << a << " Senior\n";
		}
		else
			cout << a << " Junior\n";
	}

	return 0;
}


