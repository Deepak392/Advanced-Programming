#Concept: Here, we are creating two threads and running them simultaneously.
import threading 
def greet():
    print("hello from Sai University")

t=threading.Thread(target=greet)
t.start()
t1=threading.Thread(target=greet)
t1.start()

print("main program finished")