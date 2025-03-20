void fibonacciSeries(int a){
    if(a==1) printf("%d",1);
    int b=fibonacciSeries(a-1)+fibonacciSeries(a-2);
    printf("%d",b);
}