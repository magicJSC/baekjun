#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	long long a,b;
	cin >> a >> b;
	if (a % b == 0)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}


