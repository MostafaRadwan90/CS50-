def main():
 print("x is ", end="")
 x = int(input())
 while (x<0 or x>23):
       print("Retry: ", end="");
       x =int(input())

 for  i in range (x):
   for j in range (x,1,-1):
    if (j>i+2):
     print(" ",end="")
    else:
     print ("#",end="" )
   print("  ",end="")
   for m in range (i+1):
    print ("#",end="")
   print() 
if __name__ == "__main__":
    main()

