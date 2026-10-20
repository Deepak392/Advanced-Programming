power_set = []
def backtrack(main_set, current_set, index):
    if index == len(main_set):
        power_set.append(list(current_set))
        return

    # Include the current element
    current_set.append(main_set[index])
    backtrack(main_set, current_set, index + 1)

    # Exclude the current element
    current_set.pop()
    backtrack(main_set, current_set, index + 1)


backtrack([1, 2, 3], [], 0)
print(power_set)