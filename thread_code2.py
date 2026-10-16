#Concept: Here, we are creating two threads and running them simultaneously. After that we are printing the main program finished statement.
import threading

def task_1():
    for i in range(10):
        print("Task 1 is in process")
def task_2():
    for i in range(10):
        print("Task 2 is in process")

t=threading.Thread(target=task_1)
t1=threading.Thread(target=task_2)
t.start()
t1.start()

print("Main program finished")  