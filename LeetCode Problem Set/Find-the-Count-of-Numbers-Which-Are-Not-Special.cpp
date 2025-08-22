class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int h = sqrt(r);
        vector<bool> isprime(h + 1, true);
        isprime[0] = isprime[1] = false;
        for (int i = 2; i * i <= h; i++) {
            if (isprime[i]) {
                for (int j = i * i; j <= h; j += i)
                    isprime[j] = false;
            }
        }

        int cnt = 0;
        for (int p = sqrt(l); p <= h; p++) {
            if (isprime[p]) {
                long long square = 1LL * p * p;
                if (square >= l && square <= r)
                    cnt++;
            }
        }

        return (r - l + 1) - cnt;
    }
};