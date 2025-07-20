def max_operation(S,A):
   operations = float('inf');
   for i in range(S):
      count = 0
      while A[i] % 2 == 0:
        A[i] //= 2;
        count +=1
    
      operations = min(operations, count)
      
   print(operations)


S = int(input())
A = list(map(int,input().split()))

max_operation(S,A)
  
   