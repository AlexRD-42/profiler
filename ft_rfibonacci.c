#include <stdint.h>

static int64_t fib_tail(int64_t n, int64_t a, int64_t b)
{
    if (n == 0)
        return a;
    return fib_tail(n - 1, b, a + b);
}

int64_t	ft_rfibonacci(int64_t index)
{
    return fib_tail(index, 0, 1);
}