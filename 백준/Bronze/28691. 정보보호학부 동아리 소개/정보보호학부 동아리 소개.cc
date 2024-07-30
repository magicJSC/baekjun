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

	if (s == "M")
		cout << "MatKor";
	else if (s == "W")
		cout << "WiCys";
	else if (s == "C")
		cout << "CyKor";
	else if (s == "A")
		cout << "AlKor";
	else if (s == "$")
		cout << "$clear";

	return 0;
}


