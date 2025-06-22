# Write a function find_highest_exponent() that takes in an integer base and an integer limit as parameters. 
# The function returns the highest exponent for which a given base raised to that exponent is less than or equal to limit.

#Using U(understand), P(plan), I(implement) Method
    # U: We need to return an int 
    # The base to the power of the returned int must be less than or equal to the limit
    # Limit cannot be 0, nor a negative so limit > 1
    # Base must be greater than 1, since it will never reach the limit otherwise

    #P: Create a variable to keep track of the highest exponent
    # While we have not reached the limit, multiplying the base to the power of the current exponent
    # Because the last saved highest exponent will be one larger than the actual limiting exponent, we need to subtract one
    #   The condition only leaves the while loop when base**highest_exponent <= limit becomes false, only becomes false because of above reason

def find_highest_exponent(base, limit):
    highest_exponent = 0

    if base <= 1 or limit <= 0:
        return None
    
    while base**highest_exponent <= limit:
        highest_exponent += 1
    
    return highest_exponent - 1

exp = find_highest_exponent(2, 100)
print(exp)

exp2 = find_highest_exponent(3, 5)
print(exp2)