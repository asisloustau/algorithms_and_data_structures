

def quick_sort(arr):
    n_elements = len(arr)

    if n_elements < 2:
        return arr

    # pivot index starting at the end -we could start at the beginning
    pi = len(arr) - 1

    for i in range(pi - 1, -1, -1):
        # print(arr[i])
        if arr[i] >= arr[-1]:
            # if our value next to the partition boundary is greater than pivot -> move pivot index down -extend boundary
            pi -= 1
            temp = arr[i]  # temp variable
            # swap values
            arr[i] = arr[pi]
            arr[pi] = temp
            # print(arr)
    # swap value at pivoting index pi with pivot value - the first should be greater than the pivot value
    temp = arr[-1]
    arr[-1] = arr[pi]
    arr[pi] = temp
    # partitioning ends here

    pivot_val = [temp]
    left = quick_sort(arr[:pi])
    right = quick_sort(arr[(pi+1):])
    # current_position = 0  # Position of the partitioning element

    return left + pivot_val + right


if __name__ == '__main__':

    test_array = [10, 80, 30, 90, 40, 50, 70, 44, 44, 70, 80]
    print(f'Unsorted Array: {test_array}')
    sorted_array = quick_sort(test_array)
    print(f'Sorted Array: {sorted_array}')
