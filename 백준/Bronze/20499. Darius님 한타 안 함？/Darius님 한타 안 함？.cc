#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int k, d, a;
	char c1, c2;
	cin >>k>>c1>>d>>c2>> a;

	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
	return  0;
}