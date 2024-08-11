#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a;
	cin >> a;
	if (a % 7 == 0) {
		string s = to_string(a);
		if (s.find("7") + 1 != 0) {
			cout << "3";
		}
		else
			cout << "1";
	}
	else {
		string s = to_string(a);
		if (s.find("7") + 1 != 0) {
			cout << "2";
		}
		else
			cout << "0";
	}
	return 0;
}


