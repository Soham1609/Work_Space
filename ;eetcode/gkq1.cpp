#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// char s[N];
string s;
char ingredient;
int n, cnt[26];

int main() {
    cin >> n >> s >> ingredient;
    int len = s.length();
    int target = ingredient - 'a';
    for (int i = 0; i < len; i++) {
        cnt[s[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] - 'a' == target) {
            cnt[target]--;
            continue;
        }
        if (cnt[target] > (len - i) / n) {
            ans = -1;
            break;
        }
        ans += cnt[target];
    }
    cout << ans << endl;
    return 0;
}
