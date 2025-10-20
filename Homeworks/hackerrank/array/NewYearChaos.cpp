void minimumBribes(vector<int> q) {
    int bribes = 0;
    int n = q.size();

    for (int i = 0; i < n; i++) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = max(0, q[i] - 2); j < i; j++) {
            if (q[j] > q[i]) {
                bribes++;
            }
        }
    }

    cout << bribes << endl;
}