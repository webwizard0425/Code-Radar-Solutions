int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2!=0){
        printf("%d",arr[n/2]);
        return 0;
    }else{
        int b=n/2
        int a=(arr[b]+arr[b-1])/2;
        printf("%d",a);
        return 0;
    }