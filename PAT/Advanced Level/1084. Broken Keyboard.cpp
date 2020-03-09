#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bitset<128> h;  //哈希表
    for (char c : s2)
        h[toupper(c)] = true;
    for (char c : s1) {
        if (not h[toupper(c)]) {
            cout << (char)toupper(c);
            h[toupper(c)] = true;  //保证坏掉的键只输出一次
        }
    }
    return 0;
}