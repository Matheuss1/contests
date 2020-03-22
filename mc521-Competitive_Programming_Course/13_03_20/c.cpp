#include <iostream>
#include <bitset>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

void answer(long long bitVal, int* counter, int k, int* aux);

int main()
{
    int n, k;

    cin >> n >> k;

    bitset<32> num(n);

    ostringstream str;

    string bits = num.to_string<char,std::string::traits_type,std::string::allocator_type>();
    int counter = num.count();
    int aux = 0;

    stack<long long> powers;

    for (int i = 0; i < 32; i++) {
        if (bits[i] == '1') {
            long long num = 1 << (31 - i);
            
            aux += num;
            powers.push(num);
        }
    }

    if (k < counter || k > aux)
        cout << "NO" << endl;
    else {
        int aux = 0;
        cout << "YES" << endl;
        
        while (k != counter) {
            long long num = powers.top();
            powers.pop();

            if (num == 1) {
                cout << 1 << " ";
                continue;
            }

            if (num >> 1 == 1) {
                counter += 1;
                cout << 1 << " " << 1 << " ";

                continue;
            }

            counter += 1;
            answer(num >> 1, &counter, k, &aux);

            if (k != counter) {
                counter += 1;
                answer(num >> 1, &counter, k, &aux);
            }
        }

        while (!powers.empty()) {
            cout << powers.top() << " ";
            powers.pop();
        }
    }
}

void answer(long long bitVal, int* counter, int k, int* aux)
{
    if (*counter == k) {
        *aux = 1;
        cout << bitVal << " " << bitVal << " ";
        return;
    }
    
    if (bitVal == 1) {
        cout << 1 << " " << 1 << " ";
        return;
    }

    *counter += 1;
    answer(bitVal >> 1, counter, k, aux);

    if (*counter == k) {
        cout << bitVal << " ";
        return;
    }
 
    *counter += 1;
    answer(bitVal >> 1, counter, k, aux); 
}

