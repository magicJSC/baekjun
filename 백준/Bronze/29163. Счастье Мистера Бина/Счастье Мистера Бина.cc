#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vector<string> v;
bool ishacking;

int main() {
	int a,r1=0,r2=0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (b % 2 == 0)
			r1++;
		else
			r2++;
	}
	if (r1 > r2)
		cout << "Happy";
	else
		cout << "Sad";

	return 0;
}


