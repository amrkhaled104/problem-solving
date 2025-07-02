
void amooor() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int max_inc_len = 0, max_inc_sum = 0;
    int max_dec_len = 0, max_dec_sum = 0;

    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subseq;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                subseq.push_back(a[i]);
        }

        if (subseq.size() < 1) continue;

        bool is_inc = true, is_dec = true;
        for (int i = 1; i < subseq.size(); i++) {
            if (subseq[i] <= subseq[i - 1]) is_inc = false;
            if (subseq[i] >= subseq[i - 1]) is_dec = false;
        }

        int len = subseq.size();
        int sum = accumulate(subseq.begin(), subseq.end(), 0);

        if (is_inc) {
            if (len > max_inc_len || (len == max_inc_len && sum > max_inc_sum)) {
                max_inc_len = len;
                max_inc_sum = sum;
            }
        }

        if (is_dec) {
            if (len > max_dec_len || (len == max_dec_len && sum > max_dec_sum)) {
                max_dec_len = len;
                max_dec_sum = sum;
            }
        }
    }

    cout << max_inc_len << " " << max_inc_sum << " " << max_dec_len << " " << max_dec_sum << endl;
}