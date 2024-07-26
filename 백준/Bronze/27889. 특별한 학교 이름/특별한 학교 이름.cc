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

	if (s == "NLCS")
		cout << "North London Collegiate School";
	else if(s == "BHA")
		cout << "Branksome Hall Asia";
	else if (s == "KIS")
		cout << "Korea International School";
	else if (s == "SJA")
		cout << "St. Johnsbury Academy";

	return 0;
}


