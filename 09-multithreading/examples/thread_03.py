#Shared Memory concept: 
#This code is an example of shared memory concept in python. 
# Here, we have a global variable counter which is shared among all the threads. 
# All the threads are trying to increment the value of counter variable. But due to race condition, the final value of counter may not be equal to 300000. 
# This is because all the threads are trying to access and modify the same variable at the same time. 
# To avoid this, we can use locks to synchronize the access to the shared variable.
import threading
counter=0

def counting():
    global counter
    for i in range(100000):
        counter+=1

t=threading.Thread(target=counting)
t1=threading.Thread(target=counting)
t2=threading.Thread(target=counting)

t.start()
t1.start()
t2.start()

t.join()
t1.join()
t2.join()

print(f"counter value is {counter}")
