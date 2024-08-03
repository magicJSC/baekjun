#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vector<string> v;
bool ishacking;

int main() {
	v.push_back("Never gonna give you up");
	v.push_back("Never gonna let you down");
	v.push_back("Never gonna run around and desert you");
	v.push_back("Never gonna make you cry");
	v.push_back("Never gonna say goodbye");
	v.push_back("Never gonna tell a lie and hurt you");
	v.push_back("Never gonna stop");
	int a;
	string s;
	getline(cin, s);
	a = stoi(s);
	for (int i = 0; i < a; i++)
	{
		getline(cin, s);

		if (!ishacking) 
		{
			for (int j = 0; j < v.size(); j++) {
				if (v[j] == s)
				{
					ishacking = false;
					break;
				}
				else
				{
					ishacking = true;
				}
			}
		}
	}

	if (ishacking)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}


