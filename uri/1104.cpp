#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> &a,  vector<int> &b);
int main()
{
    int a, b;
    int i;
    cin >> a >> b;
    while(a != 0 && b != 0) {
        int temp;
        vector<int> a_;
        vector<int> b_;
        for (i = 0; i < a; i++) {
            cin >> temp;
            if(i == 0) {
                a_.push_back(temp);
            }
            else if (a_[a_.size() - 1] != temp) {
                // printf("%d %d %d\n", temp, a_.size(), i);
                a_.push_back(temp);
            }
            a_.resize(a_.size());
        }
        for (i = 0; i < b; i++) {
            cin >> temp;
            if(i == 0) {
                b_.push_back(temp);
            }
            else if (b_[b_.size() - 1] != temp) {
                b_.push_back(temp);
            }
            b_.resize(b_.size());
        }
        // for (i =0; i < a_.size(); i++) {
        //     cout << a_[i] << endl;
        // }
        int counter1 = binary(a_, b_);
        int counter2 = binary(b_, a_);
        cout << min(a_.size() - counter1, b_.size() - counter2) << endl;
        a_.clear();
        b_.clear();
        cin >> a >> b;
    }
}

int binary(vector<int> &a,  vector<int> &b)
{
    int i, counter = 0;
    for (i = 0; i < a.size(); i++) {
        int start = 0;
        int end = b.size() - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (b[mid] == a[i]) {
                counter += 1;
                break;
            }
            else if(b[mid] < a[i]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

    }
    return counter;
}
