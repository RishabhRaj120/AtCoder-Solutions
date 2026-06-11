#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <set>
#include <tuple>
#include <map>
#include <bitset>
#include <numeric>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    cin >> n;
    ll d = 0;
    cin >> d;
    vector<ll> v1;
    for (int i = 0; i < n; i++)
    {
        ll x = 0;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    bool check = false;
    for (int i = 1; i < n; i++)
    {
        if ((v1[i] - v1[i - 1]) <= d)
        {
            cout << v1[i] << '\n';
            check = true;
            break;
        }
    }
    if (!check)
    {
        cout << "-1\n";
    }
}