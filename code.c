int minPatches(int* a, int s, int n) {
    long long ans = 0;
    long long max = 0; 
    int i = 0;
    while (max < n) {
        if (i < s && a[i] <= max + 1) {
            max += a[i];
            i++;
        } else {
            max += max + 1;
            ans++;
        }
    }
    
    return ans;
}
