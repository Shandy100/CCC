//C++
//Print min number of parentheses required
#include <bits/stdc++.h>
using namespace std;
int minParentheses(string p)
{

	// maintain balance of string
	int bal = 0;
	int ans = 0;

	for (int i = 0; i < p.length(); ++i) {

		bal += p[i] == '(' ? 1 : -1;

		// It is guaranteed bal >= -1
		if (bal == -1) {
			ans += 1;
			bal += 1;
		}
	}

	return bal + ans;
}
int main()
{

	string p;
	cin>>p;
	cout << minParentheses(p);

	return 0;
}
