// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int findBadVersion(int m, int n) {
    int half;
    
    if (m+1==n) {
        if ( isBadVersion(1) ) return 1;
        else {return n;}
    }

    half = (n-m)/2;
    half = half + m;
    if ( isBadVersion(half) ) {
        n = half;
        return findBadVersion(m, n);
    }
    else {
        m = half;
        return findBadVersion(m, n);
    }
}

int firstBadVersion(int n) {
    if (n>1) return findBadVersion(1,n);
    else return n;
}