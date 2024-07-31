#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	int a,b,c,result1 =0,result2=0;
	cin >> a >> b >> c;
	result1 = a * 3 + b * 20 + c * 120;
	cin >> a >> b >> c;
	result2 = a * 3 + b * 20 + c * 120;

	if (result1 > result2)
		cout << "Max";
	else if (result1 < result2)
		cout << "Mel";
	else
		cout << "Draw";

	return 0;
}


