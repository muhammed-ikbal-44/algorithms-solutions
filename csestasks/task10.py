dizi=(input("diziyi: "));
array=list(dizi);
sonuc_array=[];


count_dict = {}


for item in array:
    if item in count_dict:
        count_dict[item] += 1
    else:
        count_dict[item] = 1


count_list = list(count_dict.items())

tek_sayac=0;
for key, value in count_dict.items():
   if value%2==1:
       tek_sayac+=1;
print(count_dict);
print(len(array));
if(tek_sayac>1):
    print("NO SOLUTİON")
else:
    for key, value in count_dict.items():
       if value%2==1:
           sonuc_array.insert(int(len(array)/2),key)
       else:
           for i in range(0,int(value/2)):
                sonuc_array.insert(0,key);
                sonuc_array.append(key);
    print(sonuc_array);