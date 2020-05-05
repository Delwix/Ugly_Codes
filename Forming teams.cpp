//https://codeforces.com/contest/216/problem/B
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
int n,m;
int ans = 0;
bool vis[101];
int cnt;
vector<int> adj[101];

bool dfs(int i, int j){
  if(vis[i]) {
    return true;
  }
  vis[i] = true;
  for(auto u : adj[i]) {
    if(u != j) {
      cnt ++;
      if(dfs(u,i))
        return true;
      } 
    //printf("%d --> %d\n",u,i);
  }
  return false;
}

int main() {
  cin >> n >> m;
  int a,b;
  for (int i = 0; i < m; ++i)
  {
    cin >> a >>  b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 1; i < n+1; ++i)
  {
    cnt = 0;
    if(!vis[i]) {
      if(dfs(i,i)){
        if(cnt % 2 != 0) ans++;
      }  
    }
  }

  if(n%2 == 0 && ans % 2 == 0)  {
    cout << ans;
    return 0;
  }
  if(n % 2 != 0 && ans % 2 != 0){
    cout << ans;
    return 0;
  }
  cout << ans + 1 ;
  return 0;
}
