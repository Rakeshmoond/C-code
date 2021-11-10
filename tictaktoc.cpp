#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        vector<string> A(3), At(3);
        cin >> A[0] >> A[1] >> A[2];

        At = A;  //A_t is transpose of A
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i < j)swap(At[i][j] , At[j][i]);
            }
        }

        ll x = 0, o = 0;
        for (auto row : A) {
            x += count(row.begin(), row.end(), 'X');
            o += count(row.begin(), row.end(), 'O');
        }
        auto check = [&](char ch) {
            bool ans = false;
            for (auto row : A)ans |= count(row.begin(), row.end() , ch) == 3;
            for (auto col : At)ans |= count(col.begin(), col.end() , ch) == 3;
            ans |= A[0][0] == ch and A[1][1] == ch and A[2][2] == ch;
            ans |= A[2][0] == ch and A[1][1] == ch and A[0][2] == ch;
            return ans;
        };
        bool x_win = check('X'), o_win = check('O');
        ll ans = 2;
        if ((x_win && o_win) or !(x == o or x == o + 1) or (x_win && !(x == o + 1)) or (o_win && !(x == o)))
        ans = 3;
        else if ((x == o or x == o + 1) && ((x_win + o_win == 1) or (x + o == 9)))
        ans = 1;
        cout << ans << '\n';
    }

    return 0;
}