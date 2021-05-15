

#ifndef BETA_BANK_FRONTEND_H
#define BETA_BANK_FRONTEND_H

void anamenu();

void applicationStart();

void bakiyeSorgulama() {}

void sifreDegistirme() {
    char passwordCurrent[] = "123456";
    char response[] = "";
    int result;

    printf("\nSIFRE DEGISTIRME");
    printf("\nVAR OLAN SIFRENIZI GIRINIZ:\n");
    scanf("%s", response);
    result = strcmp(response, passwordCurrent);

    if (result == 0) {
        char passwordNew[] = "";
        printf("\nYENI SIFRENIZI GIRINIZ:\n");
        scanf(" %s", passwordNew);
        printf("YENI SIFRENIZ: %s", passwordNew);
    }

}

void ibanGoruntuleme() {
    char iban[] = "1234-5678-9101-1121";
    printf("\nIBAN GORUNTULE\n");
    printf("IBAN: %s", iban);
}

void hesapOzeti() {
    printf("\nHESAP OZETI");
}

void betaKart_Menu() {
    int response;

    printf("BETAKART MENUSU\n");
    printf("1 - HESAP OZETI\n");
    printf("2 - IBAN GORUNTULE\n");
    printf("3 - SIFRE DEGISTIR\n");
    printf("4 - BAKIYE SORGULA\n");


    printf("Menu numarasini giriniz: ");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            hesapOzeti();
            break;
        case 2:
            ibanGoruntuleme();
            break;
        case 3:
            sifreDegistirme();
            break;
        case 4:
            bakiyeSorgulama();
            break;

        default:
            printf("\nHatali secim yaptiniz\n\n");
            betaKart_Menu();
            break;
    }
}



void dovizAlim() {
    int response;
    printf("DOVIZ ALIM\n");
    printf("1 - DOLAR\n");
    printf("2 - EURO\n");
    printf("3 - ALTIN\n");
    printf("Alacaginiz doviz tipini seciniz: ");
    scanf(" %d", &response);
    switch (response) {
        case 1:
            printf("Alacaginiz dolar miktarini giriniz: ");
            break;
        case 2:
            printf("Alacaginiz euro miktarini giriniz: ");
            break;
        case 3:
            printf("Alacaginiz altin miktarini giriniz: ");
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            dovizAlim();
            break;
    }
}

void dovizSatim() {
    int response;
    printf("DOVIZ SATIM\n");
    printf("1 - DOLAR\n");
    printf("2 - EURO\n");
    printf("3 - ALTIN\n");
    printf("Satacaginiz doviz tipini seciniz: ");
    scanf(" %d", &response);
    switch (response) {
        case 1:
            printf("Satacaginiz dolar miktarini giriniz: ");
            break;
        case 2:
            printf("Satacaginiz euro miktarini giriniz: ");
            break;
        case 3:
            printf("Satacaginiz altin miktarini giriniz: ");
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            dovizSatim();
            break;
    }
}

void yatirimIslemleri_Menu() {
    int dolar = 3, euro = 4, altin = 221, response;
    printf("\nYATIRIM ISLEMLERI MENUSU\n");
    printf("DOVIZ KURLARI:\n");
    printf("DOLAR/TL: %d\n", dolar);
    printf("EURO/TL: %d\n", euro);
    printf("ALTIN/TL: %d\n", altin);
    printf("VARLIKLARINIZ\n");
    printf("DOLAR:%s\n", user.dolar_bakiye);
    printf("EURO:%s\n", user.euro_bakiye);
    printf("ALTIN:%s\n", user.altin_bakiye);


    printf("1- DOVIZ ALIM \n");
    printf("2- DOVIZ SATIM \n");
    printf("Seciniz: ");
    scanf(" %d", &response);
    switch (response) {
        case 1:
            dovizAlim();
            break;
        case 2:
            dovizSatim();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            yatirimIslemleri_Menu();
            break;
    }

}

void bireyselKrediBasvurusu() {
    int maas, oran = 2, vade;
    printf("BIREYSEL KREDI BASVURUSU\n");
    printf("AYLIK NET MAASINIZI GIRINIZ:");
    scanf(" %d", &maas);
}

void krediLimitArttirma() {
    printf("KREDI KARTI LIMIT ARTTIRMA");
}

void krediKartiBasvurusu() {
    printf("KREDI KARTI BASVURUSU\n");

}

void basvuruIslemleri_Menu() {

    int response;
    printf("\nBASVURU ISLEMLERI MENUSU\n");
    printf("1 - KREDI KARTI BASVURUSU\n");
    printf("2 - KREDI KARTI LIMIT ARTTIRMA\n");
    printf("3 - BIREYSEL KREDI BASVURUSU\n");
    printf("4 - ANA MENU\n");
    printf("Menu numarasini giriniz: ");
    scanf(" %d", &response);
    switch (response) {
        case 1:
            krediKartiBasvurusu();
            break;
        case 2:
            krediLimitArttirma();
            break;
        case 3:
            bireyselKrediBasvurusu();
            break;
        case 4:
            anamenu();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            basvuruIslemleri_Menu();
            break;

    }
}

void egitimOdemeIslemleri() {
    printf("EGITIM ODEME ISLEMLERI\n");
    int response;

    strcpy(user.yks_ucreti, "100");
    strcpy(user.kpss_ucreti, "250");
    strcpy(user.ehliyet_ucreti, "750");
    strcpy(user.bakiye, "300");

    printf("1 - YKS ucreti: %d\n", atoi(user.yks_ucreti));
    printf("2 - KPSS ucreti: %d\n", atoi(user.kpss_ucreti));
    printf("3 - Ehliyet sinavi ucreti: %d\n", atoi(user.ehliyet_ucreti));

    printf("Ucretini odemek istediginiz sinavin numarasini giriniz:");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            if (atoi(user.bakiye) >= atoi(user.yks_ucreti)) {
                strcpy(user.yks_ucreti, "0");
                printf("Isleminiz basariyla gerceklesmistir.\n");
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        case 2:
            if (atoi(user.bakiye) >= atoi(user.kpss_ucreti)) {
                strcpy(user.kpss_ucreti, "0");
                printf("Isleminiz basariyla gerceklesmistir.\n");
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        case 3:
            if (atoi(user.bakiye) >= atoi(user.ehliyet_ucreti)) {
                strcpy(user.ehliyet_ucreti, "0");
                printf("Isleminiz basariyla gerceklesmistir.\n");
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            anamenu();
            break;
    }
}

void trafikCezaOdemeIslemleri() {
    printf("TRAFIK CEZASI ODEME ISLEMLERI\n");
    int response;
    strcpy(user.trafik_cezasi_borc, "1000");
    strcpy(user.bakiye, "2000");

    if (atoi(user.trafik_cezasi_borc) != 0) {
        printf("Trafik cezasi borcunuz: %d\n", atoi(user.trafik_cezasi_borc));
    } else {
        printf("Borcunuz bulunmamaktadir.\n");
    }
    printf("Borcunuzu odemek istiyorsaniz 1'e yoksa 0'a basiniz:");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            if (atoi(user.bakiye) >= atoi(user.trafik_cezasi_borc)) {
                strcpy(user.trafik_cezasi_borc, "0");
                printf("Borcunuz basariyla odendi.\n");
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        case 0:
            anamenu();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            anamenu();
            break;
    }
}

void faturaOdemeIslemleri() {
    printf("FATURA ODEME ISLEMLERI\n");
    int response;

    strcpy(user.su_faturasi, "500");
    strcpy(user.elektrik_faturasi, "1000");
    strcpy(user.dogalGaz_faturasi, "1500");
    strcpy(user.bakiye, "1000");

    printf("1 - Su faturasi borcunuz: %d\n", atoi(user.su_faturasi));
    printf("2 - Elektrik faturasi borcunuz: %d\n", atoi(user.elektrik_faturasi));
    printf("1 - Dogalgaz faturasi borcunuz: %d\n", atoi(user.dogalGaz_faturasi));

    printf("Yatirmak istediginiz fatura numarasini giriniz:");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            if (atoi(user.bakiye) >= atoi(user.su_faturasi)) {
                strcpy(user.su_faturasi, "0");

                printf("1 - Su faturasi borcunuz: %d\n", atoi(user.su_faturasi));
                printf("2 - Elektrik faturasi borcunuz: %d\n", atoi(user.elektrik_faturasi));
                printf("1 - Dogalgaz faturasi borcunuz: %d\n", atoi(user.dogalGaz_faturasi));
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        case 2:
            if (atoi(user.bakiye) >= atoi(user.elektrik_faturasi)) {
                strcpy(user.elektrik_faturasi, "0");

                printf("1 - Su faturasi borcunuz: %d\n", atoi(user.su_faturasi));
                printf("2 - Elektrik faturasi borcunuz: %d\n", atoi(user.elektrik_faturasi));
                printf("3 - Dogalgaz faturasi borcunuz: %d\n", atoi(user.dogalGaz_faturasi));
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        case 3:
            if (atoi(user.bakiye) >= atoi(user.dogalGaz_faturasi)) {
                strcpy(user.dogalGaz_faturasi, "0");

                printf("1 - Su faturasi borcunuz: %d\n", atoi(user.su_faturasi));
                printf("2 - Elektrik faturasi borcunuz: %d\n", atoi(user.elektrik_faturasi));
                printf("1 - Dogalgaz faturasi borcunuz: %d\n", atoi(user.dogalGaz_faturasi));
            } else {
                printf("Borcunuzu odemek icin yeterli bakiyeye sahip degilsiniz.\n");
            }
            anamenu();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            anamenu();
            break;
    }
}

void odemeIslemleri_Menu() {
    printf("2 - ODEME ISLEMLERI MENUSU\n");
    int response;

    printf("1 - Fatura Odeme \n");
    printf("2 - Trafik Cezasi Odeme \n");
    printf("3 - Egitim Odemeleri \n");

    printf("Odemek istediginiz faturanin numarasini giriniz:");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            faturaOdemeIslemleri();
            break;
        case 2:
            trafikCezaOdemeIslemleri();
            break;
        case 3:
            egitimOdemeIslemleri();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            anamenu();
            break;
    }
}

void paraCekme();

void krediKartinaYatirma();

void hesabaYatirma();

void paraYatirma_Menu() {

}

void paraIslemleri_Menu() {
    printf("1 - PARA ISLEMLERI MENUSU\n");
}

void anamenu() {
    int response;

    printf("ANA MENU\n");
    printf("1 - PARA ISLEMLERI MENUSU\n");
    printf("2 - ODEME ISLEMLERI MENUSU\n");
    printf("3 - BASVURU ISLEMLERI MENUSU\n");
    printf("4 - YATIRIM ISLEMLERI MENUSU\n");
    printf("5 - BETAKART MENUSU\n");

    printf("Menu numarasini giriniz: ");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            paraIslemleri_Menu();
            break;
        case 2:
            odemeIslemleri_Menu();
            break;
        case 3:
            basvuruIslemleri_Menu();
            break;
        case 4:
            yatirimIslemleri_Menu();
            break;
        case 5:
            betaKart_Menu();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            anamenu();
            break;
    }
}


void girisYap() {
    char password[] = "123456";
    char response[] = "123456";
    int result;
    printf("GIRIS YAP\n\n");
    printf("HESABINIZA AIT SIFREYI GIRINIZ:");
    // scanf("%s", response);

    //gets(response);
    printf("şifre : %s", response);

    result = strcmp(response, password);
//    printf("%d", result);

    if (result == 0) {
        anamenu();
    } else {
        printf("\nHATALI SIFRE GIRDINIZ TEKRAR DENEYIN\n");
        girisYap();
    }
}

void sinavOdemeleri_Menu() {
    printf("SINAV ODEMELERI SAYFASI\n");
    char kimlikNo[11];
    int kpssUcreti = 300;
    int response;

    printf("TC kimlik numaranizi giriniz:");
    gets(kimlikNo);

    while (strlen(kimlikNo) != 11) {
        printf("\nHatali kimlik no giris yaptiniz, tekrar giriniz...\n");
        gets(kimlikNo);
    }
    printf("KPSS sinav ucreti: %d\n", kpssUcreti);
    printf("Odemek istiyorsaniz 1'e, cikis yapmak icin 0'a basiniz:");
    scanf(" %d", &response);

    switch (response) {
        case 1:
            kpssUcreti = 0;
            printf("Odemeniz basariyla alinmistir.\n");
            applicationStart();
            break;
        case 0:
            printf("Odeme gerceklestirilmedi...\n");
            printf("Giris sayfasina yonlendiriliyorsunuz...\n");
            applicationStart();
            break;
        default:
            printf("\nHatali secim yaptiniz\n\n");
            applicationStart();
            break;
    }
}

void applicationStart() {

    int response;
    printf("BETABANK'A HOS GELDINIZ\n");
    printf("1 - GIRIS YAP\n");
    printf("2 - KARTSIZ ISLEMLER(SINAV ODEMELERI)\n");
    scanf(" %d", &response);
    switch (response) {
        case 1:
            girisYap();
            break;
        case 2:
            sinavOdemeleri_Menu();
            break;
        default:
            applicationStart();
            break;
    }
}


#endif //BETA_BANK_FRONTEND_H
