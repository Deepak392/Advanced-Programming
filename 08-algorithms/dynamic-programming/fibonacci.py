def fib_top_down(n, memo=None):
    if memo is None:
        # Initialize the memoization table with None or -1
        memo = {}
        
    # Base cases
    if n <= 1:
        return n
        
    # Check if the value is already computed and stored in cache
    if n in memo:
        return memo[n]
        
    # Compute recursively and store the result in the cache
    memo[n] = fib_top_down(n - 1, memo) + fib_top_down(n - 2, memo)
    
    return memo[n]

print(fib_top_down(10))  # Output: 55



def fib_bottom_up(n):
    if n <= 1:
        return n
    
    # Create a table to store Fibonacci numbers up to n
    dp = [0] * (n + 1)
    dp[0] = 0
    dp[1] = 1
    
    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]
        
    return dp[n]

print(fib_bottom_up(10))  # Output: 55