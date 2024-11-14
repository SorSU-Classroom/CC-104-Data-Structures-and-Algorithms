def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

if __name__ == "__main__":
    arr = [10, 50, 30, 70, 80, 60, 20, 90, 40]
    key = 30
    
    result = linear_search(arr, key)
    
    if result != -1:
        print("Element found at index:", result)
    else:
        print("Element not found in the array")