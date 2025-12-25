test=int(input("Lutfen girilecek işlem sayısını giriniz: "));
array=[];
for i in range(0,test):
    giris = input("2 sayıyı aralarında boşluk olacak şekilde girin : ");
    dizi = list(map(int, giris.split()));
    array.append(dizi);
for i in range(0,test):
    fark=array[i][0]-array[i][1];
    buyuk=max(array[i])-1;
    baslangic=1+(buyuk*(buyuk+1));
    if(fark>=0):
        baslangic=baslangic+fark;
    else:
        baslangic=baslangic-fark;
    print(baslangic);

# https://cses.fi/problemset/task/1071
    