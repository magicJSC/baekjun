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

	int a,b=0,c=0;
	cin >> a>>b>>c;
	
	if (a >= 1000 && (b >= 8000 || c >= 260))
	{
		cout << "Very Good" << "\n";
	}
	else if (a >= 1000)
		cout << "Good" << "\n";
	else
		cout << "Bad" << "\n";


}