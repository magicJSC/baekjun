#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,c;
	cin >> a >> b>>c;
	cout << (a+1)*(b+1)/(c+1)-1;
	return 0;
}
