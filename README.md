# Hesap-Makinesi
*C++ ile yazılmış hesap makinesi*

## **NE İŞE YARAR ?**
Bu proje basit matematiksel işlemleri terminal üzerinden pratik şekilde yapabilmenizi sağlar. Bu projeyi çalıştırmak için bilgisayarınızda bir **C++ derleyisicisi** olması yeterlidir.


## **KODU YAZARKEN NEYİ NEDEN KULLANDIM**
**(Öncelikle ayrıntılı ve daha teknik açıklamaları kodun içinde yazdım daha detaylı açıklamalar için koda bakabilirsiniz)**

* İlk başta sayılar için double veri tipini kullandım ,bunu kullanmamdaki amaç ondalıklı işlemler kullanıldığında daha hassas hesap yapmak.

* İşlem için tek karakterli char veri tipini kullandım ,bunu kullanmamdaki amaç düşük boyutlu olması dolayısıyla gereksiz kaynak tüketmemesi.

* Kullanıcıdan sayı isteyebilmek için "cin" kullandım ,ekrana yazı yazılması için de "cout" kullandım.

* Kullanıcıdan sayıları alırken sayı yerine başka bir karakter girilme riskine karşı "if cin.fail" ekledim. Böylece kullanıcıdan gelen veri kontrol ediliyor ve sayı yerine başka bir karakter girilmiş ise kullanıcıya bununla alakalı mesaj gidiyor ,kısacası olası bir hatanın önüne geçmiş oluyoruz


* İşlemler için switch-case kullandım ,bunu kullanmamdaki amaç hangi operatör girildiğine göre kontrol edip ona göre bir işlem yapılması ve sonuç yazılması.(Swtich-case yerine if-else kontrol yapısı da kullanılabilirdi ama bir aralık veya birden fazla şart söz konusu olmadığı için ve ayrıca tek tek kontrol yerine asansör mantığıyla doğrudan istenilen değişkene gittiği için switch-case kullandım)

* Bölme işleminde sıfıra bölme durumundan doğan bir hatayı önlemek için "if-else" kontrol yapısı kullandım ,kullanıcıdan aldığımız ikinci sayı kontrol ediliyor eğer sayı 0 ise kullanıcıya bununla alakalı mesaj gidiyor
