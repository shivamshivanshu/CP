/*________________________________Author : mr_robot101_________________________________*/

#include <bits/stdc++.h>
using namespace std;

/*_____________________________________________________________________________________*/

#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long int
#define ull unsigned long long int
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x, val) memset(x, (int)val, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrev(x) sort(all(x), greater<int>())
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define print(a)          \
    for (auto i : a)      \
        cout << i << " "; \
    cout << endl;
#define setbits(x) _builtin_popcount(x)
#define parity(x) _builtin_parity(x)
#define leadzero(x) __builtin_clz(x)
#define trailzero(x) __builtin_ctz(x)
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define CHRONO srand(chrono::high_resolution_clock::now().time_since_epoch().count())

/*_____________________________________________________________________________________*/

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

const int mod = 1000000007;
const int N = 3e5, M = N;

/*_____________________________________________________________________________________*/

void solve()
{
}

/*_____________________________________________________________________________________*/

int32_t main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*_____________________________________________________________________________________*/
