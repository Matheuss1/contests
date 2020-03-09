#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool comp (int i, int j) {return (i < j);}

int main()
{
	int a, r1 = 0, r2 = 0;
	vector<int> nums;

	for (int i = 0; i < 3; i++){
		cin >> a ;
		nums.push_back(a);
	}

	sort(nums.begin(), nums.end());

	r1 = nums.at(1) - nums.at(0);
	r2 = nums.at(2) - nums.at(1);

	if (r1 == r2)
		cout << nums.at(2) + r2 << endl;
	else {
		int temp;

		if (nums.at(2) == nums.at(1) + 2 * r1)
			cout << nums.at(1) + r1 << endl;
		else
			cout << nums.at(0) + r2 << endl;
	}
}