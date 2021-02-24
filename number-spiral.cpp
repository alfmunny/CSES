#include <iostream>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;

  while(n--) {
    ll y, x, ans;
    cin >> y >> x;
    if (y > x) {
      if (y % 2 == 0) {
        ans = y*y - x + 1;
      } else {
        ans = (y-1)*(y-1) + x;
      }
    } else if (y <= x){
      if (x % 2 == 0) {
        ans = (x-1)*(x-1) + y;
      } else {
        ans = x*x - y + 1;
      }
    }
    cout << ans << endl;
  }
}
