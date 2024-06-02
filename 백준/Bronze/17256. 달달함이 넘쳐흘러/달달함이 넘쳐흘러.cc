#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a1,a2,a3,c1,c2,c3;
	cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
	cout << c1 - a3 << " " << c2 / a2 << " " << c3 - a1;
	return 0;
}
