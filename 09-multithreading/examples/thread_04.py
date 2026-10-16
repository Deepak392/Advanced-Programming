#Concept: Lock is used here to avoid race condition.

import threading

lock = threading.Lock()
counter = 0

def counting():
    global counter
    for i in range(100000):
        with lock:
            counter += 1

t = threading.Thread(target=counting)
t1 = threading.Thread(target=counting)
t2 = threading.Thread(target=counting)

t.start()
t1.start()
t2.start()

t.join()
t1.join()
t2.join()

print(f"counter value is {counter}")