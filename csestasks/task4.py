"""You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output
Print the minimum number of moves."""


uzunluk=int(input("Lutfen dizinin içereceği eleman sayisini giriniz: "));
giris = input(str(uzunluk) + " sayıyı aralarında boşluk olacak şekilde girin : ");
dizi = list(map(int, giris.split()));

sayac=0;

i=1;
while(True):
    if(i==uzunluk):
            break;
    while(dizi[i]<dizi[i-1]):
        dizi[i]=dizi[i]+1;
        sayac=sayac+1;
    i=i+1;
    
"""    
for j in range(0,uzunluk):
    if(dizi[j]<dizi[j-1]):              GPT çözüm
        fark=dizi[j-1]-dizi[j];
        dizi[j]=dizi[j]+fark;
        sayac+=fark;
  """  
print(sayac);