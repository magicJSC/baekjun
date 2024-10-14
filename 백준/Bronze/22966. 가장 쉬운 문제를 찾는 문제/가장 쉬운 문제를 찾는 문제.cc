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
	int a, dif;
	string title;
	cin >> a;
	cin >> title >> dif;
	for (int i = 1; i < a; i++) {
		string c;
		int b;
		cin >> c >> b;
		if (b < dif)
		{
			title = c;
			dif = b;
		}
	}
	cout << title <<"\n";
}