//https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1393
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <vector>
#include <set>
#include <sstream>
#include <stack>
#include <list>
#include <queue>

using namespace std;

int main() {
  int n; cin >> n;
  
  for (int i = 0; i < n; ++i)
  {
    int r,c; cin >>r >>c;
  char mat[r][c];
  string path = "IEHOVA#";
  int idx = 0;
  string ans;
  int pos; 
  for (int i = 0; i < r; ++i)
  {
    /* code */
    for (int j = 0; j < c; ++j)
    {
      cin >> mat[i][j];
      if (mat[i][j] == '@')
        pos = j;
    }
  }
    for (int i = 0; i < r; ++i)
    {

      while(true && idx < 7)
      {
              if(idx != 0) cout << " ";
              if (mat[r - i - 1][pos - 1] == path[idx])
              {
                  cout << "left";
                  pos --;
                  idx ++;
              }
              else if (mat[r - i - 1][pos + 1] == path[idx])
              {
                  cout << "right";
                  pos ++;
                  idx ++;
              }
              else {
                cout << "forth";
                idx ++;
                break;
              }
      }
    }
    cout << endl;
  }
  
  return 0;
}

