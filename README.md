# odevler --->  one_1 ödev :

İlk iç döngü, harflerden önceki boşlukları yazdırır. Her satır için boşluk sayısı n - i olarak hesaplanır,
burada i geçerli satır numarasıdır.

İkinci iç döngü, her satır için harfleri yazdırır. Her satırdaki harf sayısı 2 * i - 1 olarak hesaplanır. 
Döngü, harfin konumunu takip etmek için bir k değişkeni kullanır. k, i'den küçükse, harf artırılır (böylece harfler A'dan orta harfe gider),
aksi halde harf azalır (harfler orta harften A'ya gider).

Program daha sonra bir sonraki satırı başlatmak için yeni bir satır karakteri yazdırır ve bir sonraki satır için 
A harfi ile baştan başlamak üzere ch değişkenini 'A' olarak sıfırlar.

## işlem : 

ilk == A   , A++ ==> B  , B++ ==> C  :::   ...etc
D-- ==>C   , C-- ==> B  , B-- ==> A  :::   ...etc
//this is just explain for one file
//some complex consipt will be displayed here 🌐
