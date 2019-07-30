#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int bfs(int di[], int dj[], int fromX, int fromY, int toX, int toY);
int dictionary(char a);
bool isValid(int i, int j);

int main()
{
    // ---------- directions to move -------------------------------------
    int di[] = {-2, -2, -1, -1,  1, 1,  2, 2};
    int dj[] = {-1,  1, -2,  2, -2, 2, -1, 1};
    // -------------------------------------------------------------------
    
    // ----------- reading inputs ----------------------------------------
    int moves;
    char from[2], to[2];
    while (cin >> from[0] >> from[1] >> to[0] >> to[1]) {
        printf("To get from %c%c to %c%c takes ", from[0], from[1], to[0], to[1]); 
        int fromX = dictionary(from[0]);
        int fromY = from[1] - '0';
        int toX = dictionary(to[0]);
        int toY = to[1] - '0';
        moves = bfs(di, dj, fromX, fromY, toX, toY);
        printf("%d knight moves.\n", moves);
    }
    // -------------------------------------------------------------------
}

int bfs(int di[], int dj[], int fromX, int fromY, int toX, int toY)
{
    fromX = 8 - fromX;
    fromY -= 1;
    toX = 8 - toX;
    toY -= 1;
    int i, j, i2, j2, k;

    int distance[8][8];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            distance[i][j] = 99999;
        }
    }

    distance[fromX][fromY] = 0;
    queue<pair<int, int> > myqueue;
    myqueue.push(make_pair(fromX, fromY));

    while (!myqueue.empty()) {
        pair<int, int> dir = myqueue.front();
        myqueue.pop();
        i = dir.first;
        j = dir.second;

        for (k = 0; k < 8; k++) {
            i2 = i + di[k];
            j2 = j + dj[k];
            if ( isValid(i2, j2) && distance[i2][j2] > distance[i][j] + 1 ) {
                distance[i2][j2] = distance[i][j] + 1;
                myqueue.push(make_pair(i2, j2));
            }
        }
    }
    return distance[toX][toY];
}

bool isValid(int i, int j)
{
    if ( (i >= 0 && i < 8) && (j >= 0 && j < 8) )
        return true;
    return false;    
}

int dictionary(char a)
{
    if (a == 'a')
        return 1;
    if (a == 'b')
        return 2;
    if (a == 'c')
        return 3;
    if (a == 'd')
        return 4;
    if (a == 'e')
        return 5;
    if (a == 'f')
        return 6;
    if (a == 'g')
        return 7;
    if (a == 'h')
        return 8;
    return 0;
}
