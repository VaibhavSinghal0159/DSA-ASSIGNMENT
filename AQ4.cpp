#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aabc";
    queue<char> q;
    int count[256] = {0};   

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        q.push(c);
        count[c]++;

        while (!q.empty() && count[q.front()] > 1) {
            q.pop();
        }

        if (q.empty())
            cout << -1 << " ";
        else
            cout << q.front() << " ";
    }
    return 0;
}
