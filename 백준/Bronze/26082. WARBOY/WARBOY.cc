#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	float a,b,c;
	cin >> a >> b >> c;
	cout << (int)(b / a * c*3);

	return 0;
}
