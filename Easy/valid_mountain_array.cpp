bool validMountainArray(vector<int>& arr) {
    int peaks = 0, valeys = 0;
    for (int i = 1; i<arr.size()-1; i++) {
        if (arr[i] == arr[i-1])
            return false;
        else if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
            ++peaks;
        else if (arr[i] < arr[i-1] && arr[i] < arr[i+1])
            ++valeys;
    }
    return peaks == 1 && valeys == 0;
}
