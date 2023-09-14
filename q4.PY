##
#@param accepts n as size of fibonacci series
#@return fibonacci
##


def Fib(n):
    ##
    # if n is 0 or neg than it will be invald
    
    ##
    if n < 0:
        print("Incorrect input")
    
    elif n == 0:
        return 0
    ##
    # Check if n is 1,2
    # it will return 1
    ##
    elif n == 1 or n == 2:
        return 1
    ##
    #calling recursively till n 's value becomes 2
    #
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)
 
## 
# Result
##
print(Fibonacci(9))
