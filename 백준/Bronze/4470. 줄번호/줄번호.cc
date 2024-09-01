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
	string s;
	cin.ignore();
	for (int i = 0; i < a; i++) {
		getline(cin, s);
		cout <<i+1<<". " << s<<"\n";
	}
	return 0;
}


