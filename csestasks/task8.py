# https://cses.fi/problemset/task/1092
def solve(verisayisi):
    
    numbers=verisayisi;
    toplam=(verisayisi*(verisayisi+1))/2;
    aratoplam=0;
    
    arr1=[]; arr2=[];
    if(toplam%2!=0):
        print("NO");
        return;
    else:
        print("YS");
        while(aratoplam < toplam/2):
            fark=toplam/2 - aratoplam;
            if(fark>=numbers):
                
                arr1.append(numbers);
                aratoplam=aratoplam+numbers;
                numbers=numbers-1;
            else:
                arr1.append(fark);
                aratoplam=aratoplam+fark;

    print(arr1);
    for i in range(1,verisayisi+1):
        if(i in arr1):
            continue;
        else:
            arr2.append(i);
    print(arr2);        
    
verisayisi = int(input("Sayiyi giriniz: "));
solve(verisayisi);

#                GG        Epey ugrastırdı ama koyduk!

"""def solve(n):
    total_sum = n * (n + 1) // 2

    # Eğer toplam tekse iki eşit kümeye bölmek mümkün değil
    if total_sum % 2 != 0:
        print("NO")
        return

    # Bölmek mümkün
    print("YES")

    # İki kümenin toplamı toplam_sum // 2 olacak
    target = total_sum // 2
    set1 = []
    set2 = []

    # Büyükten küçüğe hedefi doldurana kadar set1'e ekle, kalanlar set2'ye gider
    for i in range(n, 0, -1):
        if target >= i:
            set1.append(i)
            target -= i
        else:
            set2.append(i)

    # İlk küme
    print(len(set1))
    print(" ".join(map(str, set1)))

    # İkinci küme
    print(len(set2))
    print(" ".join(map(str, set2)))

# Input okuma
n = int(input())
solve(n)
"""

# Buda gpt