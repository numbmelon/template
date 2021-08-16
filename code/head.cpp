#include <bits/stdc++.h>
using namespace std;

#define zhzhwz
#ifdef zhzhwz
template <typename T>
void _debug(const char* format, T t)
{
    cerr << format << '=' << t << endl;
}

template <class First, class... Rest>
void _debug(const char* format, First first, Rest... rest)
{
    while (*format != ',') cerr << *format++;
    cerr << '=' << first << ",";
    _debug(format + 1, rest...);
}

template <typename T>
void _debugv(T* t, int num)
{
    cerr << "[ ";
    for (int i = 0; i < num; ++i) cerr << t[i] << ", ";
    cerr << "]";
}

template <class First, class... Rest>
void _debugv(First* first, int num, Rest... rest)
{
    cerr << "[ " << endl;
    for (int i = 0; i < num; ++i) {
        _debugv(first[i], rest...);
        cerr << ", " << endl;
    }
    cerr << "]";
}

template <class... Value>
void _debuga(const char* format, Value... value)
{
    cout << format << endl;
    while (*format != ',') cerr << *format++;
    while (*format++) {
        cerr << "[0:";
        while (*format && *format != ',') cerr << *format++;
        cerr << "]";
    }
    cerr << "=";
    _debugv(value...);
    cerr << endl;
}

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& V)
{
    os << "[ ";
    for (const auto& vv : V) os << vv << ", ";
    os << "]";
    return os;
}

#define debug(...) _debug(#__VA_ARGS__, __VA_ARGS__)
#define debuga(...) _debuga(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug
#define debuga
#endif

typedef long long ll;
typedef __int128 i128;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MOD = 998244353;

int main()
{
    return 0;
}