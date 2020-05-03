//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
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
int N; 
char m[100][100];
bool vis[100][100];

void dfs(int i, int j){
  if(i<0 || j<0 ||i > N -1|| j>N-1) return;
  if(vis[i][j]) return;
  if (m[i][j] == '.') return;
  vis[i][j] = true;
  dfs(i,j-1);
  dfs(i,j+1);
  dfs(i-1,j);
  dfs(i+1,j);
}

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> N;
    memset(vis,0,sizeof(vis));
    int ans = 0;
    for (int l = 0; l < N; ++l)
    {
      for (int j = 0; j < N; ++j)
      {
        cin >> m[l][j];

      }
    }
    for (int l = 0; l < N; ++l)
    {
      for (int j = 0; j < N; ++j)
      {
        if (!vis[l][j] && m[l][j] == 'x')
        {
          dfs(l,j);
          ans++;
        }
      }
    }
    printf("Case %d: %d\n",i+1,ans);
  }
  
  return 0;
}

