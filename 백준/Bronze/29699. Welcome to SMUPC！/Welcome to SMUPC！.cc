#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	string s = "WelcomeToSMUPC";
	int a;
	cin >> a;
	cout << s.at((a-1) % s.length());

	return 0;
}
