#include <iostream>
#include <string>
using namespace std;
void city(int ddd);
int binarySearch(int arr[], int keyword);

int main()
{
    int ddd;
    scanf("%d", &ddd);
    city(ddd);
}

void city(int ddd)
{
    int arr[8] = {11, 19, 21, 27, 31, 32, 61, 71};
    char cities[8][30] = {"Sao Paulo", "Campinas",
                        "Rio de Janeiro", "Vitoria",
                        "Belo Horizonte", "Juiz de Fora",
                        "Brasilia", "Salvador"};
    int result = binarySearch(arr, ddd);
    if (result == -1) {
        cout << "DDD nao cadastrado" << endl;
    }
    else {
        cout << cities[binarySearch(arr, ddd)] << endl;
    }
    return;
}

int binarySearch(int arr[], int keyword)
{
    int ini = 0;
    int end = 7;
    int mid;
    while (ini <= end) {
        mid = (ini + end) / 2;
        if (arr[mid] == keyword) {
            return mid;
        }
        else if (arr[mid] > keyword){
            end = mid - 1;
        }
        else {
            ini = mid + 1;
        }
    }
    return -1;
}