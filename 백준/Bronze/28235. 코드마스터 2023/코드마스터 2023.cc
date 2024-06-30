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
	if (s == "SONGDO")
		cout << "HIGHSCHOOL";
	else if (s == "CODE")
		cout << "MASTER";
	else if (s == "2023")
		cout << "0611";
	else if (s == "ALGORITHM")
		cout << "CONTEST";

	return 0;
}
