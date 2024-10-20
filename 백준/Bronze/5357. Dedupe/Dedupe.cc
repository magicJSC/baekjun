#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s,result;
		char add = ' ';
		cin >> s;
		for (int j = 0; j < s.length(); j++) {

			if (add != s[j])
			{
				result += s[j];
				add = s[j];
			}
		}
		cout << result << "\n";
	}
}