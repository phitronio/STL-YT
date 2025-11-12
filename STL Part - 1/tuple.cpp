#include <bits/stdc++.h>
using namespace std;

int main() {
   tuple<string, int, string> person = make_tuple("rahim", 30, "mirpur");
   // cin >> get<0>(person) >> get<1>(person) >> get<2>(person);
   cout << get<0>(person) << " " << get<1>(person) << " " << get<2>(person);
   return 0;
}