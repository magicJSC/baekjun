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
	string s;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> s;
		if (s.length() <= 9 && s.length() >= 6)
			cout << "yes"<<"\n";
		else
			cout << "no" << "\n";
	}
	return 0;
}
