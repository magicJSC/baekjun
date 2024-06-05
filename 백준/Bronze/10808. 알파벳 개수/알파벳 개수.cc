#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a[26] = { 0, };
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		a[s.at(i) - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
