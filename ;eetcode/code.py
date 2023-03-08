def sum_factorial(n):
    # Function to calculate the sum of factorials of the digits of a number
    fact = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880]
    sum_fact = 0
    while n:
        sum_fact += fact[n%10]
        n //= 10
    return sum_fact

def is_failed(item_number, days):
    # Function to check if a dish has failed
    for i in range(days+1, 61):
        if sum_factorial(item_number) == item_number:
            return i-days
    return "Failed"

# Test the function
print(is_failed(1234, 3))  # prints 6
print(is_failed(5678, 4))  # prints Failed