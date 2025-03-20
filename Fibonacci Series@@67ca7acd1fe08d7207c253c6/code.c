void fibonacciSeries(int a){
    if(a==1) {
        printf("%d",1);
        return;
    }
    int b=fibonacciSeries(a-1)+fibonacciSeries(a-2);
    printf("%d",b);
    return;
}