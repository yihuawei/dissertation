

#k = [5, 3, 3, 3, 3, 2, 2, 2, 1]
# k = [6, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1]
# k = [6, 5, 5, 4, 3, 2, 1]
# k = [7, 5, 4, 4, 4, 3, 2, 1]

# k = [5, 5, 5, 3, 2, 1]

# def exit(k):
#     all(num==0 for num in k) or any(num<0 for num in k)

# while not exit(k):
   
#     k.sort(reverse=True)
#     idx = k[0]
#     print(k, end=" -> ")
#     for i in range(0, idx+1):
#         k[i] = k[i]-1
#     k.pop(0)
#     print(k)


# import numpy as np

# a = np.array([[0, 1, 1, 0, 0],
#               [1, 0, 0, 1, 1],
#               [1, 0, 0, 1, 1],
#               [0, 1, 1, 0, 1],
#               [0, 1, 1, 1, 0]])

# print (np.matmul(a,a))