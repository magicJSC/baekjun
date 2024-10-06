#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >>f;
	cout << a + b + c + d + e + f - min(a, min(b, min(c, d))) - min(e, f);
	return  0;
}