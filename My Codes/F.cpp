#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int D, M;
        cin >> D >> M;

        vector<int> dperm(M);
        for (int i = 0; i < M; ++i) {
            cin >> dperm[i];
        }

        int ans = 0, currentDay = 0;

        for (int days : dperm) {
            for (int day = 1; day <= days; ++day) {
                if (currentDay == 5 && day == 13) {
                    ans++;
                }
                currentDay = (currentDay + 1) % 7;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
