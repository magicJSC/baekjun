#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	string s;
	int u = 0,c = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ':')
			c++;
		else if (s[i] == '_')
			u++;
	}
	cout << s.size() + c + u  * 5;
	return 0;
}




