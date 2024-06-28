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

	if (s.find("driip") != std::string::npos)
	{
		if (s.substr(s.length() - 5, 5) == "driip")
			cout << "cute";
		else
			cout << "not cute";
	}
	else
		cout << "not cute";
	return 0;
}
