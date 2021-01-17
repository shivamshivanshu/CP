
/*    The greatest journey made is the journey made inwards, towards yourself.         */

#include <bits/stdc++.h>
/*    It's what you practice in private that you will be rewarded for in public       */

#define gc getchar_unlocked
#define endl "\n"
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, k, n) for (int i = k; i <= n; i++)
#define yes(i)	std::cout << (i > 0 ? "Yes\n" : "No\n")
#define ll long long int
#define ull unsigned long long int
#define deb(x) std::cout << #x << "=" << x << endl
#define deb2(x, y) std::cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x, val) memset(x, (int)val, sizeof(x))
#define sortall(x) std::sort(all(x))
#define sortrev(x) std::sort(all(x), greater<int>())
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define setbits(x) _builtin_popcount(x)
#define parity(x) _builtin_parity(x)
#define leadzero(x) __builtin_clz(x)
#define trailizero(x) __builtin_ctz(x)
#define FAST std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0)
#define CHRONO srand(std::chrono::high_resolution_clock::now().time_since_epoch().count())

/*           Practice like you've never won. Play like you've never lost            */

typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pl;
typedef std::vector<int> vi;
typedef std::vector<ll> vl;
typedef std::vector<pii> vpii;
typedef std::vector<pl> vpl;
typedef std::vector<vi> vvi;
typedef std::vector<vl> vvl;
std::mt19937_64 rang(std::chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
	std::uniform_int_distribution<int> uid(0, lim - 1);
	return uid(rang);
}
/* Talent is a pursued interest. Anything that you're willing to practice, you can do */

template<class T> bool chmax(T& a, const T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T& a, const T b) { if (b < a) { a = b; return 1; } return 0; }
template<typename T> void db(T var)	{std::cerr << var << " ";}
template<typename T, typename... Types> void db(T var1, Types... var2)	{std::cerr << var1 << " "; db(var2...);}
template<typename T> void print(T var)	{std::cout << var << endl;}
template<typename T, typename... Types> void print(T var1, Types... var2)	{std::cerr << var1 << " "; print(var2...);}
template<typename T> void print_container(const T& container) {for (auto element : container)	{std::cout << element << " ";}	std::cout << endl;}
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
/*_____________________________________________________________________________________*/
const int INF = 1e9;
long long mod = 1e9 + 7;
const int N = 2e5 + 5, M = N;

void solve()
{
}
/*_____________________________________________________________________________________*/

int32_t main()
{
	FAST;
	int test_case = 1;
	std::cin >> test_case;
	while (test_case--) {
		solve();
	}
	return 0;
}
/*_____________________________________________________________________________________*/
