class Solution:
    def reverseWords(self, s: str) -> str:
        # 1. split() ile kelimeleri listeye al (boşlukları otomatik temizler)
        words = s.split()
        
        # 2. Listeyi ters çevir
        words = words[::-1]
        
        # 3. Kelimeleri aralarına birer boşluk koyarak birleştir
        return " ".join(words)
        #aga baktım c++ kullanınca mevzu çıkıyor, bende direkt python yazdım :)