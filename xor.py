# cook your dish here
from math import *
for _ in range(int(input())):
   n,k = map(int,input().split())
   arr = list(map(int,input().split()))
   bitarr = [0]*(32)
   for i in range(32):
      for item in arr:
         if item&(1<<i):
            bitarr[i]+=1 
   sm = 0
   for item in bitarr:
      sm+=ceil(item/k)
   print(sm)
