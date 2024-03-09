#include<bits/stdc++.h>
using namespace std;
/*
We know one thing if b1+b2 = b2+b3; then b1 = b3 (b1,b2,b3)
Let's Analyize the given test Cases:-
(8,9) // There is nothing to observe
(1,1,2) we have 2 1's and one 2 ; here we have two unique elements => yes
(1,1,4,5) we have two 1's and one 4 and one 5; we have three distinct elements => no
(2 3 3 3 3) we have 2 distint => no
(100000 100000 100000 100000) we have 1 distinct => yes

odd cases
(b1,b2,b3,b4,b5)
b1+b2 = b2+b3 = b3+b4 = b4+b5
b1,b3,b5
b2,b4
// Two unique 
(b1,b2,b3,b4,b5,b6,b7)
b1+b2 = b2+b3 = b3+b4 = b4+b5 = b5+b6 = b6+b7
b1,b3,b5,b7
b2,b4,b6
// Two unique

For odd number of n if you have 2 disinct it is possible

Even cases
(b1,b2,b3,b4)
b1+b2 = b2+b3 = b3+b4
b1,b3
b2,b4
(b1,b2,b3,b4,b5,b6)
b1+b2 = b2+b3 = b3+b4 = b4+b5 = b5+b6
b1,b3,b5
b2,b4,b6
*/
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (mp.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        if (mp.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        int freq1 = mp.begin()->second;
        int freq2 = (++mp.begin())->second;
        // for  even one             for odd one
        if (abs(freq1 - freq2) == 1 || (freq1 == freq2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}