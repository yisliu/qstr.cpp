#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, q;
  cin>>n>>q;
  string str[n], str2[q];
  for(int i = 0; i<n; i++){
    cin>>str[i];
  }
  for(int i = 0; i<q; i++){
    cin>>str2[i];
  }
  for(int i = 0; i<q; i++){
    int j = 0;
    while(j<q){
      if(str[j] == str2[i]){
        cout<<1;
        i++;
        break;
      }
      j++;
    }
    cout<<-1;
  }
}