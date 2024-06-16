#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int i = 0;
	while (true)
	{
		string a;

		getline(cin, a);
		if (a == "0")
			break;

		i++;
		cout << "Case " << i << ": Sorting... done!" << "\n";
	}
	
	return 0;
}
