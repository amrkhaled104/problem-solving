void amooor() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int maxXor = 0;

    for (int mask = 0; mask < (1 << n); mask++) {
        if (__builtin_popcount(mask) == k) {
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) x ^= a[i];
            }
            maxXor = max(maxXor, x);
        }
    }

    cout << maxXor << endl;
}
