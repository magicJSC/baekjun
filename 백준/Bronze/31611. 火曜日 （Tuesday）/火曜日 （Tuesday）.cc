#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a;
	cin >> a;
	if (a % 7 == 2)
		cout << 1;
	else
		cout << 0;
	
	return 0;
}


