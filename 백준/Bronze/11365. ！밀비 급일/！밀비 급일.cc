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
	cin.tie(NULL);
	cout.tie(NULL);
	while (true)
	{
		string s;
		getline(cin, s);
		if (s == "END")
			break;
		reverse(s.begin(), s.end());
		cout << s << "\n";
	}
}