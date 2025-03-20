int binarySearch(int arr[],int n,int b){
    int st=0;
    int ed=n-1;
    while(st<ed){
        int mid=(st+ed)/2;
        if(arr[mid]==b){
            return mid;
        }
        else if(arr[mid]>b){
            ed=mid-1;
        }else{
            st=mid+1;
        }
    }
    return -1;
}