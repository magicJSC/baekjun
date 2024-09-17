#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	
	int a,b,c,d,sum1,sum2;
	cin >> a >> b >>c>>d;
	sum1 = a + b + c + d;
	cin >> a >> b >> c >> d;
	sum2 = a + b + c + d;
	cout << max(sum1, sum2);
	return 0;
}




