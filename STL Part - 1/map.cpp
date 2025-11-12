#include <bits/stdc++.h>
using namespace std;

int main() {
   map<int, int> cnt;
   // cnt.insert({ 5,2 });
   // cnt.insert({ 2,5 });
   // cnt.insert({ 8,3 });
   // cnt.insert({ 5,6 });
   // cnt.insert({ 2,10 });
   cnt[5] = 2;
   cnt[2] = 5;
   cnt[8] = 3;
   cnt[5] = 6;
   cnt[2] = 10;

   // for (auto [value, key] : cnt) {
   //    cout << value << " " << key << '\n';
   // }

   // auto it = cnt.find(8);
   // if (it == cnt.end()) {
   //    cout << "not found" << '\n';
   // }
   // else {
   //    cout << it->first << " " << it->second << '\n';
   // }

   // auto it = cnt.find(2);
   // if (it == cnt.end()) {
   //    cout << "not found" << '\n';
   // }
   // else {
   //    cnt.erase(it);
   // }

   // for (auto [value, key] : cnt) {
   //    cout << value << " " << key << '\n';
   // }

   // 2 10
   // 5 6
   // 8 3

   auto lb = cnt.upper_bound(10);
   if (lb == cnt.end()) {
      cout << "not found" << '\n';
   }
   else {
      cout << lb->first << " " << lb->second << '\n';
   }

   return 0;
}