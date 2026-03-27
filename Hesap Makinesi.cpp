#include <iostream> 		//Giriþ çýkýþ için kullandým cin cout gibi þeyleri kullanmamý saðladý//

using namespace std;		//Her deðiþkende ekstra olarak baþýnda std kullanmamak için bunu kullandým böylece direk cin cout yazabildim yoksa std::cout þeklinde kullanacaktým//

int main() {
    double sayi1, sayi2; //Ondalýklý sayý kullanýlma ihtimaline karþý double deðiþkeni kullandým//
    char islem; //char tek karakterli deðiþken, iþlem istemek için bunu kullandým//

    cout << "===============================" << endl;							//Ekrana yazý yazdýrmak için cout kullanýcýdan deðiþken alabilmek için cin kullandým//
    cout << "Birinci Sayiyi Giriniz." << endl;									//Kullanýcýdan ilk sayýyý istedim//
    cout << "===============================" << endl;							//Neden çizgi \n endl kullandýðýmý aþaðýlarda açýkladým//
    cin >> sayi1;

    if (cin.fail()) {		//Giriþte sayý yerine baþka birþey girildi mi diye kontrol etmesi için cin.fail()) kullandým//
        cout << "\n===============================" << endl;
        cout << "Hata: Sayi Yerine Harf Veya Sembol Girdiniz" << endl;			//Kullanýcý ilk sayýyý girerken olasý bir harf, sembol veya geçersiz birþey girmesi durumunda//
        cout << "Maalesef Islem Yapilamadi Tekrar Deneyiniz." << endl;			//sistemin hata vermemesi için program durdurdum ve kullanýcýyý bu durumla ilgili bilgilendirdim//
        cout << "===============================" << endl;
        system("pause"); //Direk IDE üzerinden program çalýþtýðýnda kapanmasa da exe üzerinden çalýþýnca saniyesinde kapanýyordu bunu sonuçlardan veya hata mesajarýndan sonra//
        return 0;		//System("pause") yazarak çözdüm Dipnot: bu sadece windowsta çalýþýyor ama kod windowsta açýlacaðý için en pratik bu þekilde çözüm buldum//
    }

    cout << "\n===============================" << endl;
    cout << "Islemi Giriniz ( + , - , / , * )" << endl;							//Kullanýcýdan yapacaðý iþlemi girmesini istedim//		
    cout << "===============================" << endl;
    cin >> islem;

    cout << "\n===============================" << endl;
    cout << "Ikinci Sayiyi Giriniz." << endl;									//Kullanýcýdan ikinci sayýyý girmesini istedim//
    cout << "===============================" << endl;
    cin >> sayi2;

    if (cin.fail()) {
        cout << "\n===============================" << endl;
        cout << "Hata: Sayi Yerine Harf Veya Sembol Girdiniz" << endl;			//Ýlk sayýda belirttiðim durumu ikinci sayý için de uyarladým yine ayný þekilde programý durdurdum//
        cout << "Maalesef Islem Yapilamadi Tekrar Deneyiniz." << endl;			// ve kullanýcýyý bu durumla alakalý bilgilendirdim//
        cout << "===============================" << endl;
        system("pause");
        return 0; //return ise programýn bittiðini belli etmek için koydum//
    }

    switch(islem) {
        case '+':
            cout << "\n===============================" << endl;			//Daha estetik gözükmesi için altýna ve üstüne þerit çektim böylece sonuç daha belirgin oluyor//
            cout << "Sonuc: " << sayi1 + sayi2 << endl;						//Burada ise kullanýcýnýn girdiði iþleme göre sonuç çýkýyor//
            cout << "==============================" << endl;				//Bir üstteki satýrla araya boþluk koymak için \n , kodu bir alt satýra geçirmek için için endl kullandým//
            break;															//böylece bitiþik yazýlar yerine kullanýcý için daha okunaklý bir arayüz oluyor//

        case '-':
            cout << "\n===============================" << endl;
            cout << "Sonuc: " << sayi1 - sayi2 << endl;						//Diðer iþlemler için de üstte belirttiðim sistemi kullandým//
            cout << "==============================" << endl;
            break; //Ýþlem yapýldýðýnda diðer case lere devam etmesin diye break koydum böylece iþlem yapýldýðýnda duruyor diðer iþlemi yapmaya çalýþmýyor//

        case '*':
            cout << "\n===============================" << endl;
            cout << "Sonuc: " << sayi1 * sayi2 << endl;
            cout << "==============================" << endl;
            break;

        case '/':
            if (sayi2 != 0) {
                cout << "\n===============================" << endl;		//Burada ise bölme iþleminde oluþabilecek ama programý çökertebilecek küçük bir hatayý önledim kullanýcýnýn//
                cout << "Sonuc: " << sayi1 / sayi2 << endl;					//bir sayýyý sýfýra bölme riskine karþý önlem aldým if deðiþkenini ekleyerek sayý sýfýr deðilse bu iþlemin//
                cout << "==============================" << endl;			// yapýlmasý gerektiðini anlattým eðer ikinci sayý 0 deðilse iþlemi yapýp sonucu yazýyoruz//
            } else {
                cout << "===============================" << endl;
                cout << "Hata: Bir Sayiyi Sifira Bolemezsin" << endl;		//else deðiþkenini ekledim yani ikinci sayi sýfýr olursa iþlemi yapmýyor ve ekrana bununla alakalý uyarý veriyor//
                cout << "Maalesef Islem Yapilamadi Tekrar Deneyiniz." << endl;
                cout << "===============================" << endl;
            }
            break;

        default:
            cout << "\n===============================" << endl;
            cout << "Hata: Hatali Bir Islem Sembolu Girdiniz" << endl;		//Burada iþlem kýsmýna baþka birþey girilmesi riskine karþý önlem aldým iþlem yapýlmýyor ve kullanýcýya//
            cout << "Maalesef Islem Yapilamadi Tekrar Deneyiniz." << endl;	//bununla alakalý uyarý mesajý veriliyor
            cout << "===============================" << endl;
            break;
    }

    system("pause");
    return 0;
}
