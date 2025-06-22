## Time Complexity

### What is it?

### Examples
What is the Big(O) of this function? 

``` 
def get_element_at_index(lst, index):
    if index < 0 or index >= len(lst):
        return None  # Handle out-of-bounds cases
    return lst[index]
```
**Time Complexity:** O(1) because we are given a location to search in for the value. <br>
**Space Complexity:** O(1) because we are not creating any new variables or memory space, constant space

What is the Big(O) of this function?

```
def sum_array(arr):
    total = 0
    for num in arr:
        total += num
    return total
```
**Time Complexity:** O(n) because we are looping through the entire array which is of size n  <br>
**Space Complexity:** O(1) because only one new variable was created and is not affected by the size of n