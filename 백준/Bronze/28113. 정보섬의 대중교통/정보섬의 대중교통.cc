#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a,b,c;
	cin >> a>>b>>c;

	if (b > c)
		cout << "Subway";
	else if (b < c)
		cout << "Bus";
	else
		cout << "Anything";
	return 0;
}


