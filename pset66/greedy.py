import cs50
def main():
    
 print ("O hai! How much change is owed? ")
 x = float(input())
 x = round(x*100,0)
 print(x)
 b=0
 while (x>0):
  if (x>=25):
   x=x-25
   b+=1
  if (25>x and x>=10): 
   x=x-10
   b+=1
   
  if (10>x and x>=5):
    x=x-5
    b+=1
  if  (5>x and x>=1):
    x=x-1
    b+=1
 print (b)    
    

if __name__ == "__main__":
    main()
