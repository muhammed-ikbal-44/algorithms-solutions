'''You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 \le n \le 10^6

Example
Input:
ATTCGGGA

Output:
3'''

# Verilen DNA dizisini oku
dna_sequence = input()

# Başlangıçta ilk karakterle başlamalıyız
max_length = 1
current_length = 1

# Dizinin ilk karakterinden başlayarak tüm karakterleri dolaş
for i in range(1, len(dna_sequence)):
    # Eğer önceki karakterle aynıysa, tekrar sayısını artır
    if dna_sequence[i] == dna_sequence[i - 1]:
        current_length += 1
    else:
        # Farklı karakter görürsek, max uzunluğu güncelle ve sayaç sıfırla
        max_length = max(max_length, current_length)
        current_length = 1

# Döngü sonunda da son tekrarı kontrol et
max_length = max(max_length, current_length)

# Sonucu yazdır
print(max_length)
