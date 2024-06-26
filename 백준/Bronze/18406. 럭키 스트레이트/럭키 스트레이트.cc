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
	cin >> s;
	string str1 = s.substr(0, s.length()/2);
	string str2 = s.substr(s.length() / 2, s.length() / 2);
	int sum1=0;
	int sum2=0;
	for (int i = 0; i < str1.length(); i++) {
		sum1 += stoi(str1.substr(i,1));
	}
	for (int i = 0; i < str2.length(); i++) {
		sum2 += stoi(str2.substr(i, 1));
	}
	if (sum1 == sum2)
		cout << "LUCKY";
	else
		cout << "READY";
	return 0;
}
