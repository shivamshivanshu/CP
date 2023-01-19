#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned long long int
#define deb(x) std::cerr << #x << "=" << x << '\n'
#define deb2(x, y) std::cerr << #x << "=" << x << "," << #y << "=" << y << '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define sortall(x) std::sort(all(x))
#define sortrev(x) std::sort(all(x), greater<int>())
#define FAST std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0)
#define CHRONO srand(std::chrono::high_resolution_clock::now().time_since_epoch().count())

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
template <typename T>
void db(T var) { std::cerr << var << '\n'; }
template <typename T, typename... Types>
void db(T var1, Types... var2)
{
    std::cerr << var1 << " ";
    db(var2...);
}
template <typename T>
void print(T var) { std::cout << var << '\n'; }
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    std::cout << var1 << " ";
    print(var2...);
}
template <typename T>
void print_container(const T &container)
{
    for (auto element : container)
    {
        std::cout << element << " ";
    }
    std::cout << '\n';
}
template <typename T>
bool isPrime(T n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (T i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
const ll INF = 1e18;
const ll mod = 1e9 + 7;
const int N = 2e5 + 5, M = N;

void solve()
{
}
int32_t main()
{
    FAST;
    int test_case = 1;
    std::cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}
