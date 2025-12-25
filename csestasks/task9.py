number=int(input("Faktöriyeli alınacak sayıyı girin: "));
sifirsayi=0;

for i in range(5,number+1):
    
    temp=i;
    while(temp%5==0 and temp>2):
        temp/=5;
        sifirsayi+=1;
        
        
print(sifirsayi);
        
#https://cses.fi/problemset/task/1618   
# bu arada algoritmama aşık oldum süper verimli ve mantıklı
