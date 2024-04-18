#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	string s;
	cin >> s;
	reverse(s.begin(),s.end());
	cout << s;
	return 0;
}