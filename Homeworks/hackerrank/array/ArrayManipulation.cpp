long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n+1, 0); 
    
    for (size_t j = 0; j < queries.size(); ++j) {
        int a = queries[j][0];
        int b = queries[j][1];
        int k = queries[j][2];

        arr[a-1] += k;    
        if (b < n) arr[b] -= k; 
    }

    long prefix = 0, max = 0;
    for (size_t i = 0; i < n; ++i) {
        prefix += arr[i];
        if (prefix > max)
            max = prefix;
    }

    return max;
}