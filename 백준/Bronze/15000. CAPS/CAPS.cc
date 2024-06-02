#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		s[i] = std::toupper(s[i]);
	}
	cout << s;
	return 0;
}
