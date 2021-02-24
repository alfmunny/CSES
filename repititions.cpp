#include <iostream>
using namespace std;
#define ll long long

int main() {
  string s;
  cin >> s;
  ll res=0, n=0 ;
  char x = s.at(0);
  for (auto c : s) {
    if (x==c) {
      n+=1;
      res=max(res, n);
    }
    else {
      n=1;
      x=c;
    }
  }
  cout << res;
}
