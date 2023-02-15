#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstring>
#include <time.h>
#include <chrono>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff second
#define ss first
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const double pi = 3.141592653589793238;
const ll mod = 1e9+7;
bool comp2(pair<ll, ll> &arr, pair<ll, ll> &b)
{
    if(arr.first == b.first) return arr.second<b.second;
    return arr.first<b.first;
};

template<typename T> void read(T i, T n, vector<T> &arr)
{
    for (T j = i; j < n; j++)
        cin >> arr[j];
}

void solve()
{
    
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  ll t=1;
  // cin >> t;
  while (t--)
  {
      solve();
  }
  return 0;
}

class Solution {
public:
    int findBox(int i, int j) {
        if (i>2) {
            if (i>5) {
                if (j>2) {
                    if (j>5) {
                        return 9;
                    }
                    return 6;
                }
                return 3;
            }
            if (j>2) {
                if (j>5) {
                    return 8;
                }
                return 5;
            }
            return 2;
        } 
        else {
            if (j>2) {
                if (j>5) {
                    return 7;
                }
                return 4;
            }
            return 1;
        }
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        map <int, vector<int>> row;
        map <int, vector<int>> col;
        map <int, vector<int>> box;
        int x = board[0][0];
        cout << x;
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                int k = board[i][j] - 48;
                if (k >= 0 && k <= 9) {
                    if (count(row[k].begin(), row[k].end(), i)) return false;
                    if (count(col[k].begin(), col[k].end(), j)) return false;
                    if (count(box[k].begin(), box[k].end(), findBox(i, j))) return false;

                    row[k].push_back(i);
                    col[k].push_back(j);
                    box[k].push_back(findBox(i,j));
                }
            }
        }

        return true;

    }
};