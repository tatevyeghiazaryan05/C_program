int minimumSwaps(vector<int> arr) {
    int swaps = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        while (arr[i] != i + 1) {
            int correct_index = arr[i] - 1;

            int temp = arr[i];
            arr[i] = arr[correct_index];
            arr[correct_index] = temp;

            swaps++;
        }
    }
    return swaps;
}
