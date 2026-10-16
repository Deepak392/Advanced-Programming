#Practice Problem. Create 3 threads:
#Thread 1 calculates the sum from 1 to 100
#Thread 2 calculates the sum of even numbers
#Thread 3 calculates the sum of odd numbers
#Print the result of each thread after it has finished its execution.
import threading

def total_sum():
    total = sum(range(1, 101))
    print(f"Total sum from 1 to 100 is: {total}")

def even_sum():
    total = sum(range(2, 101, 2))
    print(f"Sum of even numbers from 1 to 100 is: {total}")

def odd_sum():
    total = sum(range(1, 101, 2))
    print(f"Sum of odd numbers from 1 to 100 is: {total}")

t1 = threading.Thread(target=total_sum)
t2 = threading.Thread(target=even_sum)
t3 = threading.Thread(target=odd_sum)

t1.start()
t2.start()
t3.start()

t1.join()
t2.join()
t3.join()