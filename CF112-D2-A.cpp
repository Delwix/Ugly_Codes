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
  string a,b;

  getline(cin,a);
  getline(cin,b);
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);

  if (a>b)
    cout << 1;
  if (a<b)
    cout << -1;
  if (a==b)
    cout << 0;

  return 0;
}

