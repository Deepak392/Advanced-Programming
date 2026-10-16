A={1,2,3}
P_A = {frozenset()}
for i in A:
    new_set = set()
    for subset in P_A:
        combined = subset.union([i])
        new_set.add(combined)
    P_A.update(new_set)
print(P_A) 
