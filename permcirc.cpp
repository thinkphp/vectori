#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  char v[100], min;
  int n, p;

  cin>>n;
  cin>>v;
  min = v[0];
  p = 0;
  for(int i = 1; i < n; ++i) {
      if(v[i] < min) {
        min = v[i];
        p = i;
      }
  }

  for(int i = 0; i < p; ++i) v[n+i] = v[i];

  for(int i = p; i < n + p; i++) v[i-p] = v[i];

  for(int i = 0; i < n; ++i) cout<<v[i]<<" ";

  return 0;
}
