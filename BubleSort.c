void bubblesortcrescente(int v[], int n) {
    int i,k;
    int temp;
    for(i = 0; i<n-1; i++) {
        for(k = 0; k<n-1-i; k++) {
            if(v[k] > v[k+1]) {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            }
        }
    }
}

void bubblesortdecrescente(int v[], int n) {
    int i,k;
    int temp;
    for(i = 0; i<n-1; i++) {
        for(k = 0; k<n-1-i; k++) {
            if(v[k] < v[k+1]) {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            }
        }
    }
}