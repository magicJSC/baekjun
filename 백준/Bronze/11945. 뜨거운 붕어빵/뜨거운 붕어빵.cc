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
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		reverse(s.begin(),s.end());
		cout << s << "\n";
	}

	return  0;
}