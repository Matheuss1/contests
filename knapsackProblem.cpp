#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<long, long> vll;

int memoTable[2001][2001];

int knapckSack(int s, vector<int>& itemsSizes, vector<int>&itemsValues, int currentItemIndex) {
	if (memoTable[currentItemIndex][s] != -1) {
		return memoTable[currentItemIndex][s];
	}

	if (currentItemIndex == 0 || s == 0) {
		memoTable[currentItemIndex][s] = 0;

		return 0;
	}

	if (itemsSizes[currentItemIndex] > s) {
		return knapckSack(s, itemsSizes, itemsValues, currentItemIndex - 1);
	}

	memoTable[currentItemIndex][s] = max(knapckSack(s, itemsSizes, itemsValues, currentItemIndex - 1), 
			knapckSack(s - itemsSizes[currentItemIndex], itemsSizes, itemsValues, currentItemIndex - 1) + itemsValues[currentItemIndex]);

	return memoTable[currentItemIndex][s];
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int s, n;

	cin >> s >> n;
	
	vector<int> weights(n + 1);
	vector<int> values(n + 1);


	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		
		weights[i] = a;
		values[i] = b;
	}

	for (int i = 0; i < 2000; i++) {
		for (int j = 0; j < 2000; j++) {
			memoTable[i][j] = -1;
		}
	}

	cout << knapckSack(s, weights, values, n);

	return 0;
}
