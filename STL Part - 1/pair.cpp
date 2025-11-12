#include <bits/stdc++.h>
using namespace std;

// 5
// rahim 21
// karim 15
// hablu 18
// bablu 30
// dablu 29
int main() {
   // pair<string, int> person;
   // person.first = "bablu";
   // person.second = 25;

   // cout << person.first << " " << person.second << '\n';

   // int n;
   // cin >> n;
   // pair<string, int> persons[n];
   // for (int i = 0;i < n;i++) {
   //    string name;
   //    int age;
   //    cin >> name >> age;
   //    persons[i].first = name;
   //    persons[i].second = age;
   // }

   // for (int i = 0;i < n;i++) {
   //    cout << persons[i].first << " " << persons[i].second << '\n';
   // }

   int n;
   cin >> n;
   pair<string, pair<int, string>> persons[n];
   for (int i = 0;i < n;i++) {
      string name, address;
      int age;
      cin >> name >> age >> address;
      persons[i].first = name;
      persons[i].second.first = age;
      persons[i].second.second = address;
   }

   for (int i = 0;i < n;i++) {
      cout << persons[i].first << " " << persons[i].second.first << " " << persons[i].second.second << '\n';
   }

   return 0;
}