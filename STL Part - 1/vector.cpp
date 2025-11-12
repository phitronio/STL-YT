#include <bits/stdc++.h>
using namespace std;

int main() {
   // int n;
   // cin >> n;
   // vector<int> numbers;
   // for (int i = 1;i <= n;i++) {
   //    int input;
   //    cin >> input;
   //    numbers.push_back(input);
   // }

   // cout << numbers.front() << " " << numbers.back() << '\n';

   // numbers.clear();
   // cout << numbers.empty() << '\n';
   // cout << "size -> " << numbers.size() << '\n';

   // for (int i = 0;i < numbers.size();i++) {
   //    cout << numbers[i] << " ";
   // }
   // cout << '\n';


   int n;
   cin >> n;
   vector<int> v;
   for (int i = 1;i <= n;i++) {
      int input;
      cin >> input;
      v.push_back(input);
   }

   // for (auto it = v.begin();it != v.end();it++) {
   //    cout << *it << " ";
   // }

   // reverse(v.begin(), v.end());
   // sort(v.begin(), v.end());

   for (int i = 0;i < v.size();i++) {
      cout << v[i] << " ";
   }
   cout << '\n';

   auto mn = min_element(v.begin(), v.end());
   cout << *mn << '\n';
   auto mx = max_element(v.begin(), v.end());
   cout << *mx << '\n';
   int maxElementPositon = mx - v.begin();
   cout << "max element position -> " << maxElementPositon << '\n';

   return 0;
}