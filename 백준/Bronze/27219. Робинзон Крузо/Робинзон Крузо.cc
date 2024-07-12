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
	for (int i = 0; i < a / 5; i++)
		cout << "V";
	for (int i = 0; i < a %5; i++)
		cout << "I";
	

	return 0;
}
