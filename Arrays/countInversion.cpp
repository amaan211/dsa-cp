class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long count = 0;

    void merge(long long arr[], long long l, long long mid, long long h) {

        long long nl = mid + 1 - l;
        long long nr = h - mid;
        long long left[nl], right[nr];
        
        for(long long i = 0; i < nl; i++)
            left[i] = arr[l + i];
        for(long long i = 0; i < nr; i++)
            right[i] = arr[mid + 1 + i];
        
        long long i = 0, j = 0, k = l;
        
        while(i < nl && j < nr) {
            if(left[i] <= right[j])
            arr[k++] = left[i++];
            else {
                count += nl - i;
                arr[k++] = right[j++];
                // all elements smaller than right element in left array
            }
        }
        
        while(i < nl)
        arr[k++] = left[i++];
        
        while(j < nr)
        arr[k++] = right[j++];
    }

    void MergeSort(long long A[], long long l, long long h) {
        long long mid;
        if(l < h) {
            mid = (l + h) / 2;
            MergeSort(A, l, mid);
            MergeSort(A, mid+1, h);
            merge(A, l, mid, h);
        }
    }

    long long int inversionCount(long long arr[], long long N)
    {
        MergeSort(arr, 0, N-1);
        return count;
    }

};