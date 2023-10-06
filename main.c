
#include <stdio.h>
#include <conio.h>
#include <string.h>//Karakter dizileri kullanmak icin
#include <Windows.h>//Sleep ve system(cls) fonksiyonlari icin

// Üc ana fonksiyondan olusuyor  ana secim ekrani,güvenli çıkıs ekrani, ve mobil banka işlemleri ekrani

void MobilBanka()
{

    //Parasal Bilgiler
	float bakiye = 1000000;
	float yatanpara, cekilenpara, gonderilenpara;
	int secim;//menu switch case icin tanımlandı
	//---//
	//Kullanici Bilgileri
	char kayitliTc[12] = "14785296300";
	char girilenTc[100] = "0";
	int checkTC = 0;
	char isimsoy[16] = "Erkan Yurtoglu";
	//---//
	//Kullanici Sifresi
	int kullanicisifresi = 220022;
	int sifre;
	//----//
	//ATM bilgileri
	char kayitliAtmNo[11] = "1100220033";
	char girilenAtmNo[11] = "0";
	int checkAtm = 0;
	//----//
	//Farkli Kullanici Hesap Bilgileri
	char kayitlihesapNo[11] = "19051919";
	char girilenHesapNo[11] = "0";
	int checkhesap = 0;
	//----//
	//Kullanici Kredi Karti Borcu
	float borc = 17587.9;
	char borccevap;
	//----//
	//do while döngüsü icin tanımlandi
	char cevap;
    //----//

	system("CLS");
    printf("********************************************************************\n");
    printf("*                                                                  *\n");
    printf("*            <\4> ALKAN MOBIL BANKACILIK SISTEMI <\4>               *\n");
    printf("*                                                                  *\n");
    printf("********************************************************************\n");

        //Kullanici girisi icin sonsuz döngüye aldık
	while(1)
	{
		printf("\n TC Kimlik Numaranizi Giriniz:   ");
		scanf("%s", &girilenTc);

		fflush(stdin); //Veriyi girdikten sonra gerekli alan bosaltılmaktadır.Hatalari engellemek icin ekledik.
		checkTC = strcmp(girilenTc, kayitliTc); //Kullanici kimlik numaralari dizilerini karşılaştırmak icin kullandik.

        //İf else kosulu ile dogru ve yanlis ekranina geciyoruz
		if(checkTC != 0)
		{
			printf("\n Yanlis TC Kimlik Numarasi Girdiniz.\n");
			printf(" Lutfen Tekrar Deneyiniz.\n");
			printf("\n Lutfen Bekleyiniz...");
			Sleep(2000);
			system("CLS");
			printf("\n\n");
			continue;
		}

		else
		{
			printf("\n TC Kimlik Numarasi Dogrulanmaktadir... ");
			Sleep(2000);
			system("CLS");
			printf("\n TC Kimlik Numarasi Onaylandi.\n");
			break;
		}

	}


   	while(1)
	{
	    printf("\n Lutfen Kullanici Sifrenizi Giriniz:");
	    scanf("%d",&sifre);
	    fflush(stdin); //Girilen veri değişkene aktarıldıktan sonra gerekli alan boşaltılmaktadır.
	    if(kullanicisifresi!=sifre)
	    {
		    printf("\n Yanlis Sifre Girdiniz.\n");
            printf(" Lutfen Tekrar Deneyiniz.\n");
		    printf("\n Lutfen Bekleyiniz...");
		    printf("\n\n");
		    Sleep(2000);
		    system("CLS");
		    continue;
            }

	    else
	    {
		    printf("\n Kullanici Sifreniz Dogrulanmaktadir... ");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Kullanici Sifreniz Dogrudur.\n\n");
		    Sleep(1000);
		    system("CLS");


		    do
		    {
			Menu: //goto fonksiyonu için kullanılmıştır.
			printf("********************************************************************\n");
            printf("*                                                                  *\n");
			printf("*         <\4> ALKAN MOBIL BANKACILIK SISTEMI <\4>                   *\n");
            printf("*                                                                  *\n");
			printf("********************************************************************\n");
            printf(" \n Hosgeldiniz,                                                      \n");
		    printf("  %c M.Temsilci: Ali S.\n                                                                   \n", puts(isimsoy));
			printf("====================================================================\n\n");
            printf("                                                                    \n");
			printf("  ISLEM MENUSU                                                      \n");
			printf("==================================================================== \n\n");
			printf("* 1-Hesap Bakiyesi Goruntuleme                                     *\n");
			printf("* 2-Hesaba Para Yatirma                                            *\n");
			printf("* 3-Hesaptan Para Cekme                                            *\n");
			printf("* 4-Para Gonderme                                                  *\n");
			printf("* 5-Kredi Karti Borcu odeme                                        *\n");
			printf("* 0-Cikis                                                          *\n");
			printf("*\n Luften Rakam Girerek Yapacaginiz Islemi Seciniz (1/2/3/4/5/0):    *\n");
			printf("*==================================================================*\n\n");
			scanf("%c",&secim);



			fflush(stdin);
			printf("\n");
			switch(secim)
			{
				case '1':
					system("CLS");
					printf("\n Hesap Bakiyesi Goruntuleme");
					printf("\n --------------------------");
					printf("\n\n Hesabinizda Bulunan Para: %.2f TL \n", bakiye);
					printf("\n\n");
					break;

				case '2':
					system("CLS");
					printf("\n Hesaba Para Yatirma");
					printf("\n -------------------");
					printf("\n\n Hesabiniza Yatacak Para Tutarini Giriniz: ");
					scanf("%f", &yatanpara);
					bakiye = bakiye + yatanpara;
					printf(" Hesabiniza Yatan Para: %f TL \n", yatanpara);
					printf(" Hesabinizda Bulunan Para: %.2f TL \n", bakiye);
					printf("\n\n");
					break;

				case '3':
					while(1)
					{
						system("CLS");
						printf("\n Hesaptan Para Cekme");
						printf("\n -------------------");
						printf("\n\n Hesabinizdan Cekilecek Para Tutarini Giriniz: ");
						scanf("%f", &cekilenpara);
						while(1)
                        {
                            printf("\n Para Cekeceginiz ATM Numarasini Giriniz:");
                            scanf("%s", &girilenAtmNo);

                            fflush(stdin); //Girilen veriyi aktardıktan sonra gerekli alan boşaltılmaktadır.
                            checkAtm = strcmp(girilenAtmNo, kayitliAtmNo); //ATM Numarasi kontorl ediliyor.
                            if(checkAtm!=0)
                            {
                                printf("\n ATM Numarasini Bulamadik.\n");
                                printf(" Lutfen Tekrar Deneyiniz.\n");
                                printf("\n Lutfen Bekleyiniz...");
                                Sleep(2000);
                                system("CLS");
                                printf("\n\n");
                                continue;
                            }

                            else
                            {
                                printf("\n ATM Numarasi Dogrulanmaktadir... ");
                                Sleep(2000);
                                system("CLS");
                                break;
                            }

                        }

						if(cekilenpara <= bakiye)
						{
							bakiye = bakiye - cekilenpara;
							printf(" Hesabinizdan Cekilen Para: %.2f TL \n", cekilenpara);
							printf("\n Paranizi ATM den ALabilirsiniz.\n");
							printf(" Hesabinizda Kalan Para: %.2f TL \n", bakiye);
							break;
						}

						else
						{
							printf("\n Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Cekilecek Para Tutarini Tekrar Giriniz.\n\n");
							Sleep(2000);
							break;
						}
					}
					printf("\n\n");
					break;

				case '4':
					while(1)
					{
						system("CLS");
						printf("\n Para Gonderme");
						printf("\n -------------");
						printf("\n\n Hesabinizdan Gonderilecek Para Tutarini Giriniz: ");
						scanf("%f", &gonderilenpara);

						while(1)
                        {
                            printf("\n Para Gondereceginiz Hesap Numarasini Giriniz: ");
                            scanf("%s", &girilenHesapNo);

                            fflush(stdin);
                            checkhesap = strcmp(girilenHesapNo,kayitlihesapNo);
                            if(checkhesap != 0)
                            {
                                printf("\n Boyle Bir Hesap Numarasini Bulamadik.\n");
                                printf(" Lutfen Tekrar Deneyiniz.\n");
                                printf("\n Lutfen Bekleyiniz...");
                                Sleep(2000);
                                system("CLS");
                                printf("\n\n");
                                continue;
                            }

                            else
                            {
                                printf("\n Hesap Numarasi Dogrulanmaktadir...");
                                Sleep(2000);
                                system("CLS");
                                printf("\n Paraniz Hesaba Aktariliyor.\n");
                                Sleep(1000);
                                break;
                            }

                        }
						if(bakiye >= gonderilenpara)
						{
							bakiye = bakiye - gonderilenpara;
							printf(" Hesabinizdan Gonderilen Para Tutari: %f TL \n", gonderilenpara);
							printf(" Hesabinizda Kalan Para: %.2f TL \n", bakiye);
							break;
						}
						else
						{
							printf("\n");
							printf("Paraniz Hesaba Aktarilamadi");
							printf(" Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Gonderilecek Para Tutarini Tekrar Giriniz.\n");
							Sleep(2000);
							break;
						}

					}
					printf("\n\n");
					break;


                case '5':
					while(1)
					{
						system("CLS");
						printf("\n Kredi Karti Borc Odeme Ekrani");
						printf("\n -------------");
						printf("\n\n Kredi Karti Borc Tutari: %.2f \n", borc);
						Sleep(2500);

                                if(bakiye >= borc)
                                    {
                                    bakiye = bakiye - borc;
                                    printf(" Hesabinizdan Odenen Para Tutari: %.2f TL \n", borc);
                                    printf(" Hesabinizda Kalan Para: %.2f TL \n", bakiye);
                                    break;
                                    }
                                else
                                    {
                                printf("\n");
                                printf(" Bakiyeniz Yetersiz.\n");
                                printf(" Hesabiniz Para Tutarini Karsilamiyor \n");
                                Sleep(2000);
                                break;
                                    }

                    }
                    printf("\n\n");
					break;



				case '0':
					system("CLS");
					printf("\n");
					goto cikis; //Kullanıcı direkt olarak çıkışa yönlendirilir.

					default:
					system("CLS");
					printf("\n Boyle Bir Islem Secenegi Yoktur. Lutfen Tekrar Deneyiniz.\n");
					printf("\n");
					goto Menu; //Kullanıcı direkt olarak menüye yönlendirilir.
					break;
			}
			printf(" Baska Islem Yapmak Istiyor Musunuz? ( (E)vet - (H)ayir )");
			cevap = getch();
			system("CLS");
			printf("\n");
		}
		while(cevap == 'E' || cevap == 'e');
		if(cevap == 'H' || cevap == 'h')
		break;
		else
            goto Menu;
                break;
	      }
        }
	cikis:
        printf(" Cikis ");
	printf("\n -----");
	printf("\n\n ALKAN Mobil Bankacilik  Programindan Cikis Yaptiniz.");
	printf("\n ALKAN Mobil Bankacilik  Programini Kullandiginiz Icin Tesekkur Ederiz.");
	Sleep(2000);
	system("CLS");
	printf("\n Programi Kapatmak Icin Bir Tusa Basiniz.");
	_getch();
}

void programclose()
{
    system("CLS");
    printf(" Guvenli Cikis Ekrani");
	printf("\n -----");
	printf("\n\n ALKAN Mobil Bankacilik Programindan Cikis Yaptiniz.");
	printf("\n ALKAN Mobil Bankacilik  Programini Kullandiginiz Icin Tesekkur Ederiz.");
	Sleep(2000);
	system("CLS");
	printf("\n Programi Kapatmak Icin Bir Tusa Basiniz.");
	_getch();
}

void main()
{

    char islemsec;
    printf("******************************************************\n");
    printf("*                                                    *\n");
    printf("*      <\4> ALKAN MOBIL BANKACILIK SISTEMI <\4>        *\n");
    printf("*                                                    *\n");
    printf("******************************************************\n");
    printf("*\n\tLutfen Yapacaginiz Islemi Seciniz:           *\n");
    printf("*\n\t1-Musteri Giris                              *\n");
    printf("*\n\t0-Guvenli Cikis                              *\n");
    printf("******************************************************\n");
    scanf("%c", &islemsec);
    switch(islemsec)
    {
    case '1':
        MobilBanka() ;
        break;
    case '0':
        programclose();
        break;
    default:
        system("Cls");
        main();
        break;
    }

    _getch();
}

