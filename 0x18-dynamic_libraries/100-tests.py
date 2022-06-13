import random
import ctypes

so_file = ctypes.CDLL('./100-operations.so')
100-operations = CDLL(so_file)

print(type(100-functions))
print(100-functions.square(10))

print("Done")
