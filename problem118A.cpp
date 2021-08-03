#include <assert.h>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <valarray>
#include <vector>
#include <unordered_map>
using namespace std;

#define FOREACH(i, c) \
    for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define ll long long
#define pb push_back
#define error(x) cout << #x << " = " << (x) << endl;
#define ull unsigned long long
#define pii pair<int, int>
//#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define point complex<double>
#define X real()
#define Y imag()
//#define X first
//#define Y second
#define EPS 1e-10
#define pdd pair<double, double>
#define mk make_pair
#define mod 1000000007
#define nl '\n'
#define vint vector<int>
#define vll vector<ll>

void soln()
{
    string t;
    string ans = "";
    cin >> t;

    unordered_map<char, int> m;
    m['a'] = 1;
    m['o'] = 1;
    m['y'] = 1;
    m['e'] = 1;
    m['u'] = 1;
    m['i'] = 1;

    transform(t.begin(), t.end(), t.begin(), ::tolower);

    for (int i = 0; i < t.length(); i++)
    {
        if(!m.count(t[i]))
        {
            // ans+='.'+t[i];
            cout<<"."<<t[i];
        }
    }

    // cout << ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    soln();
    return 0;
}