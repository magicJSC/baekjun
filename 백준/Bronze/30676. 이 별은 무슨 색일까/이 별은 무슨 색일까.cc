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
	if (a >= 620 && a <= 780)
		cout << "Red";
	else if (a >= 590 && a < 620)
		cout << "Orange";
	else if (a >= 570 && a < 590)
		cout << "Yellow";
	else if (a >= 495 && a < 570)
		cout << "Green";
	else if (a >= 450 && a < 495)
		cout << "Blue";
	else if (a >= 425 && a < 450)
		cout << "Indigo";
	else if (a >= 380 && a < 425)
		cout << "Violet";
	return 0;
}
