#include <iostream>

using namespace std;

int main()
{
    int k = 5;
    char pattern[k][k] = {};
    int friends[][2] = {{0,1},{0,3},{0,4},{1,2},{1,4}};
    int n = sizeof(friends) / sizeof(friends[0]);

    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            pattern[i][j] = ' ';
        }
    }
    for(int i = 0; i < n; i++){
        int c = friends[i][0], d = friends[i][1];
        pattern[c][d] = '*';
        pattern[d][c] = '*';
    }
    cout<<"\n  |  0  1  2  3  4\n";
    cout<<"--+-----------------\n";
    for(int i = 0; i < k; i++){
        cout<<i<<" |";
        for(int j = 0; j < k; j++){
            cout<<"  "<<pattern[i][j]<<"";
        }
        cout<<endl;
    }

    cout<<"In this configuration there are "<<n<<" pairs of friends.";
}