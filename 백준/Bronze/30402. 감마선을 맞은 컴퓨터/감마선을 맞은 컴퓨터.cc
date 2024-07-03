#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	char c;
	for (int i = 0; i < 225; i++) {
		cin >> c;
		if (c == 'w')
		{
			cout << "chunbae";
			break;
		}
		else if (c == 'b')
		{
			cout << "nabi";
			break;
		}
		else if (c == 'g')
		{
			cout << "yeongcheol";
			break;
		}
	}
	return 0;
}
