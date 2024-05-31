#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	char a;
	cin >> a;
	if (a == 'n' || a == 'N')
		cout << "Naver D2";
	else
		cout << "Naver Whale";
	return 0;
}
