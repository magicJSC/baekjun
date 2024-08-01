#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a,result = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		result += b;
	}
	
	if (result > 0)
		cout << "Right";
	else if (result == 0)
		cout << "Stay";
	else
		cout << "Left";
	return 0;
}


