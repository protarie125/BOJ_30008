#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, k;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> k;
  while (0 < (k--)) {
    ll g;
    cin >> g;
    const auto& p = (g * 100) / n;
    if (p <= 4) {
      cout << 1;
    } else if (p <= 11) {
      cout << 2;
    } else if (p <= 23) {
      cout << 3;
    } else if (p <= 40) {
      cout << 4;
    } else if (p <= 60) {
      cout << 5;
    } else if (p <= 77) {
      cout << 6;
    } else if (p <= 89) {
      cout << 7;
    } else if (p <= 96) {
      cout << 8;
    } else {
      cout << 9;
    }
    cout << ' ';
  }

  return 0;
}