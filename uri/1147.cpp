#include <iostream>
#include <vector>
#include <utility>
 
using namespace std;
 
int main()
{
    vector<pair<int, int> > pawnMoves = {{-1, 1}, {-1, -1}};
    vector<pair<int, int> > horseMoves = {{2, 1}, {2, -1}, {-2, -1}, {-2, 1},
                                          {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    
    int loop = 1;

    while (true) {
        vector<pair<int, int> > posInAttack;
        pair<int, int> horse;
        int i, j, counter = 0, flag = 0;

        char x[3];
        cin >> x;

        if (x[0] == 48)
            break;

        horse.first = x[0];
        horse.second = x[1];
 
        for (i = 0; i < 8; i++) {
            cin >> x;

            for (j = 0; j < pawnMoves.size(); j++) {
                if (x[0] + pawnMoves[j].first <= 56 && x[0] + pawnMoves[j].first >= 49) {
                    if (x[1] + pawnMoves[j].second <= 104 && x[1] + pawnMoves[j].second >= 97) {
                        posInAttack.push_back({x[0] + pawnMoves[j].first, x[1] + pawnMoves[j].second});
                    }
                }
            }
        }
 
        for (i = 0; i < horseMoves.size(); i++) {
            if (horse.first + horseMoves[i].first <= 56 && horse.first + horseMoves[i].first >= 49)
                if (horse.second + horseMoves[i].second <= 104 && horse.second + horseMoves[i].second >= 97) {
                    pair<int,int> y = {horse.first + horseMoves[i].first, horse.second + horseMoves[i].second};

                    for (j = 0; j < posInAttack.size(); j++) {
                        if (y == posInAttack[j]) {
                            flag = 1;
                            break;
                        }
                    }

                    if (!flag) {
                        counter += 1;
                    }
                    
                    flag = 0;
                    }
        }
 
        cout << "Caso de Teste #" << loop << ": " << counter << " movimento(s)." << endl;
        loop++;
   }
} 