#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;
	int a;
	cin >> a;
	if (a == 1)
		cout << "11\nA B C D E F G H J L M";
	else if(a == 2)
		cout << "9\nA C E F G H I L M";
	else if (a == 3)
		cout << "9\nA C E F G H I L M";
	else if (a == 4)
		cout << "9\nA B C E F G H L M";
	else if (a == 5)
		cout << "8\nA C E F G H L M";
	else if (a == 6)
		cout << "8\nA C E F G H L M";
	else if (a == 7)
		cout << "8\nA C E F G H L M";
	else if (a == 8)
		cout << "8\nA C E F G H L M";
	else if (a == 9)
		cout << "8\nA C E F G H L M";
	else if (a == 10)
		cout << "8\nA B C F G H L M";
	return 0;
}


