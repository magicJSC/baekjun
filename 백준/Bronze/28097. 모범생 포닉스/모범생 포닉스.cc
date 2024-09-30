#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,t = 0;
	cin >> a;
	cin >> b;
	t += b;
	for (int i = 0; i < a-1; i++) {
		t += 8;
		cin >> b;
		t += b;
	}
	cout << t / 24 <<" "<<t%24;
	return  0;
}




