
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int len1 = m-l+1;
        int len2 = r-m;
        int* left = new int[len1];
        int* right = new int[len2];
        int k = l;
        for(int i=0; i<len1; i++){
            left[i] = arr[k];
            k++;
        }
        k=m+1;
        for(int i = 0; i<len2; i++){
            right[i] = arr[k];
            k++;
        }
        int leftIndex=0;
        int rightIndex=0;
        int mainArrayIndex=l;
        while(leftIndex<len1 && rightIndex<len2){
            if(left[leftIndex]<right[rightIndex]){
                arr[mainArrayIndex++]=left[leftIndex++];
            }
            else {
                arr[mainArrayIndex++]=right[rightIndex++];
                
            }
        }
        while(leftIndex<len1){
            arr[mainArrayIndex++]=left[leftIndex++];
        }
        while(rightIndex<len2){
            arr[mainArrayIndex++]=right[rightIndex++];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
           return;
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        
    }
};


