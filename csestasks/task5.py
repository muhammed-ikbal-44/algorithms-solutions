"""A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION"."""
n = int(input("n sayısını girin: "))
dizi=[];
if n == 1:
    print(1)
elif n < 4:
    print("Beautiful permutation yok.")
j=0;
for i in range(1,n+1):
    while(j<n+1):
        if(j%2==0):
            dizi.insert(0,j);
        j+=1;
    j=0
    while(j<n+1):
        if(j%2==1):
            dizi.insert(0,j);
        j+=1;    
    
        
        
