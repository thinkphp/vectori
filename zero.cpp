#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int arr[ 100 ], i, n;

  cout<<"n=";

  cin>>n;

  for(int i = 0; i < n; ++i) cin>>arr[i];

  for(int i = 0; i < n; ++i) cout<<arr[i]<<" ";

  cout<<endl;

  i = 0;

  while( i < n ) {

        if(arr[i] % 2 == 0) {

          for(int j = n; j > i + 1; j--)

                  arr[j] = arr[j-1];

          arr[i+1] = 0;

          i += 2;

          n += 1;

        } else

          i += 1;
  }

  for(int i = 0; i < n; ++i) {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  return 0;
}
