int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacciSeries(int a) {
    for (int i = 0; i < a; i++) {
        printf("%d ", fibonacci(i));
    }
}