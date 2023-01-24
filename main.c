#include <stdio.h>
int main(void) {
    //Eingabe 1
    int e1;
    printf("Wollen Sie einen Waehrungsumrechner, einen Zeitumrechner oder einfache Rechnungen benutzen?\nWaehrungsumrechner -> 1\nZeitumrechner -> 2\neinfache Rechnungen -> 3\n");
    scanf("%d", &e1);
    fflush(stdin);

    //if 1.1
    if (e1 == 1) {
        printf("Waehrungsumrechner\n");

        //Eingangswährung Eingabe
        int w1;
        int w2;
        printf("Welche Waehrung ist ihre Eingangswaehrung?\nUS-Dollar -> 1\nEuro -> 2\nBritischer Pfund -> 3\nJapanischer Yen -> 4\nChinesischer Yuan -> 5\nNicht gennant -> 6\n");
        scanf("%d", &w1);
        fflush(stdin);


        //if-register
        if (w1 == 1) {

            //Eingabe Währung 2
            printf("Welche Waehrung ist ihre Ausgangswaehrungen?\nEuro -> 1\nBritischer Pfund -> 2\nJapanischer Yen -> 3\nChinesischer Yuan -> 4\nNicht gennant -> 5\n");
            scanf("%d", &w2);
            fflush(stdin);

            //USD -> Währung
            if (w2 == 1) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Euro umrechnen wollen.\n");
                scanf("%f", &aw);

                //Rechnung
                float euro = aw * 1.00333f;
                printf("Das sind %.2f Euro.\n", euro);
            }
            if (w2 == 2) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Britischen Pfund umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float bp = aw * 0.861f;
                printf("Das sind %.2f Britische Pfund.\n", bp);
            }
            if (w2 == 3) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Japanische Yen umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float jy = aw * 147.465f;
                printf("Das sind %.2f Japanische Yen.\n", jy);
            }
            if (w2 == 4) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Chinesische Yuan umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float cy = aw * 7.26935f;
                printf("Das sind %.2f Chinesische Yuan.\n", cy);
            }
            if (w2 == 5) {
                //Eingabe
                float aw;
                float wk;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Ihre Währung umrechnen wollen, und den Wechselkurs.\n");
                scanf("%f", &aw);
                scanf("%f", &wk);
                //Rechnung
                float w = aw * wk;
                printf("Das sind %.2f Euro.\n", w);
            }
        }


        //Euro
        if (w1 == 2) {

            //Eingabe Währung 2
            printf("Welche Waehrung ist ihre Ausgangswaehrungen?\nUS-Dollar -> 1\nBritischer Pfund -> 2\nJapanischer Yen -> 3\nChinesischer Yuan -> 4\nNicht gennant -> 5\n");
            scanf("%d", &w2);
            fflush(stdin);

            if (w2 == 1) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Euro in US-Dollar umrechnen wollen.\n");
                scanf("%f", &aw);

                //Rechnung
                float euro = aw * 0.99629f;
                printf("Das sind %.2f Euro.\n", euro);
            }
            if (w2 == 2) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Euro in Britischen Pfund umrechnen wollen.\n");
                scanf("%f", &aw);

                //Rechnung
                float bp = aw * 0.8579f;
                printf("Das sind %.2f Britische Pfund.\n", bp);
            }
            if (w2 == 3) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Euro in Japanische Yen umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float jy = aw * 146.925f;
                printf("Das sind %.2f Japanische Yen.\n", jy);
            }
            if (w2 == 4) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Euro in Chinesische Yuan umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float cy = aw * 7.24238f;
                printf("Das sind %.2f Chinesische Yuan.\n", cy);
            }
            if (w2 == 5) {
                //Eingabe
                float aw;
                float wk;
                printf("Geben Sie an, wieviel Geld Sie von Euro in Ihre Währung umrechnen wollen, und den Wechselkurs.\n");
                scanf("%f", &aw);
                scanf("%f", &wk);
                //Rechnung
                float w = aw * wk;
                printf("Das sind %.2f Euro.\n", w);
            }
        }

        //Pfund
        if (w1 == 3) {

            //Eingabe Währung 2
            printf("Welche Waehrung ist ihre Ausgangswaehrungen?\nUS-Dollar -> 1\nEuro -> 2\nJapanischer Yen -> 3\nChinesischer Yuan -> 4\nNicht gennant -> 5\n");
            scanf("%d", &w2);
            fflush(stdin);

            if (w2 == 1) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Britischen Pfund in US-Dollar umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float euro = aw * 0.0068f;
                printf("Das sind %.2f Euro.\n", euro);
            }
            if (w2 == 2) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Britischen Pfund in Euro umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float bp = aw * 0.00584f;
                printf("Das sind %.2f Britische Pfund.\n", bp);
            }
            if (w2 == 3) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Britischen Pfund in US-Dollar Japanischer Yen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float jy = aw * 0.00678f;
                printf("Das sind %.2f Japanische Yen.\n", jy);
            }
            if (w2 == 4) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Britischen Pfund in Chinesische Yuan umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float cy = aw * 0.04927f;
                printf("Das sind %.2f Chinesische Yuan.\n", cy);
            }
            if (w2 == 5) {
                //Eingabe
                float aw;
                float wk;
                printf("Geben Sie an, wieviel Geld Sie von Yapanischen Yen in Ihre Währung umrechnen wollen, und den Wechselkurs.\n");
                scanf("%f", &aw);
                scanf("%f", &wk);
                //Rechnung
                float w = aw * wk;
                printf("Das sind %.2f Euro.\n", w);
            }
        }

        //Yen
        if (w1 == 4) {

            printf("Welche Waehrung ist ihre Ausgangswaehrungen?\nEuro -> 1\nBritischer Pfund -> 2\nJUS-Dollar -> 3\nChinesischer Yuan -> 4\nNicht gennant -> 5\n");
            scanf("%d", &w2);
            fflush(stdin);

            if (w2 == 1) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Japanischen Yen in Euro umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float euro = aw * 0.0068f;
                printf("Das sind %.2f Euro.\n", euro);
            }
            if (w2 == 2) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Japanischen Yen in Britischen Pfund umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float bp = aw * 0.00584f;
                printf("Das sind %.2f Britische Pfund.\n", bp);
            }
            if (w2 == 3) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Japanischen Yen in US-Dollar umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float jy = aw * 0.00678f;
                printf("Das sind %.2f Japanische Yen.\n", jy);
            }
            if (w2 == 4) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Japanischen Yen in Chinesische Yuan umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float cy = aw * 0.04927f;
                printf("Das sind %.2f Chinesische Yuan.\n", cy);
            }
            if (w2 == 5) {
                //Eingabe
                float aw;
                float wk;
                printf("Geben Sie an, wieviel Geld Sie von Yapanischen Yen in Ihre Währung umrechnen wollen, und den Wechselkurs.\n");
                scanf("%f", &aw);
                scanf("%f", &wk);
                //Rechnung
                float w = aw * wk;
                printf("Das sind %.2f Euro.\n", w);
            }
        }


        //Yuan
        if (w1 == 5) {

            printf("Welche Waehrung ist ihre Ausgangswaehrungen?\nEuro -> 1\nBritischer Pfund -> 2\nJapanischer Yen -> 3\nUS-Dollar -> 4\nNicht gennant -> 5\n");
            scanf("%d", &w2);
            fflush(stdin);

            if (w2 == 1) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Chinesischem Yuan in Euro umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float euro = aw * 0.13795f;
                printf("Das sind %.2f Euro.\n", euro);
            }
            if (w2 == 2) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Chinesischem Yuan in Britischen Pfund umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float bp = aw * 0.11839f;
                printf("Das sind %.2f Britische Pfund.\n", bp);
            }
            if (w2 == 3) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Chinesischem Yuan in Japanische Yen umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float jy = aw * 20.276f;
                printf("Das sind %.2f Japanische Yen.\n", jy);
            }
            if (w2 == 4) {
                //Eingabe
                float aw;
                printf("Geben Sie an, wieviel Geld Sie von Chinesischem yuan in US-Dollar umrechnen wollen.\n");
                scanf("%f", &aw);
                //Rechnung
                float cy = aw * 0.1375f;
                printf("Das sind %.2f Chinesische Yuan.\n", cy);
            }
            if (w2 == 5) {
                //Eingabe
                float aw;
                float wk;
                printf("Geben Sie an, wieviel Geld Sie von US-Dollar in Ihre Währung umrechnen wollen, und den Wechselkurs.\n");
                scanf("%f", &aw);
                scanf("%f", &wk);
                //Rechnung
                float w = aw * wk;
                printf("Das sind %.2f Euro.\n", w);
            }
        }

        if (w1 == 6) {
            float gm;
            float wk;
            printf("Geben Sie an, wieviel Geld Sie umrechnen wollen, und den dazugehörigen Wechselkurs.\n");
            scanf("%f", &gm);
            scanf("%f", &wk);
            float gm2 = gm * wk;
            printf("Das sind %.2f in Ihrer 2. angegebenen Währung.\n", gm2);
        }
    }
    if (e1 == 2)
    {
        int InputTime;
        printf("Geben sie an, ob ihre Zeit von Jahren, Monaten, Tagen, Stunden, Minuten oder Sekunden ausgeht.\n Bei einem Monat wird von 30 Tagen ausgegangen, und bei einem Jahr von 365 Tagen.\nJahre -> 1\nMonate -> 2\nTage -> 3\nStunden -> 4\nMinuten -> 5\nSekunden -> 6\n");
        scanf("%d", &InputTime);
        fflush(stdin);

        //Years
        if (InputTime == 1) {
            printf("Geben Sie an, wie viele Jahre umgerechnet werden sollen.\n");
            float number1;
            scanf("%f", &number1);
            fflush(stdin);

            number1 = number1 * 12;
            printf("Das sind %.4f Monate.\n", number1);
            number1 = number1 * 365.0f;
            printf("Das sind %.4f Tage.\n", number1);
            number1 = number1 * 8766.0f;
            printf("Das sind %.4f Stunden.\n", number1);
            number1 = number1 * 525960.0f;
            printf("Das sind %.4f Minuten.\n", number1);
            number1 = number1 * 31557600.0f;
            printf("Das sind %.4f Sekunden.\n", number1);
        }

        //Months
        if (InputTime == 2) {
            float number2;
            printf("Geben Sie an, wie viele Monate umgerechnet werden sollen.\n");
            scanf("%f", &number2);
            fflush(stdin);

            number2 = number2 / 12.0f;
            printf("Das sind %.4f Jahre.\n", number2);
            number2 = number2 * 30.0f;
            printf("Das sind %.4f Tage.\n", number2);
            number2 = number2 * 720.0f;
            printf("Das sind %.4f Stunden.\n", number2);
            number2 = number2 * 43200.0f;
            printf("Das sind %.4f Minuten.\n", number2);
            number2 = number2 * 2592000.0f;
            printf("Das sind %.4f Sekunden.\n", number2);
        }

        //Days
        if (InputTime == 3) {
            printf("Geben Sie an, wie viele Tage umgerechnet werden sollen.\n");
            float number3;
            scanf("%f", &number3);
            fflush(stdin);

            number3 = number3 / 365.0f;
            printf("Das sind %.4f Jahre.\n", number3);
            number3 = number3 / 30.0f;
            printf("Das sind %.4f Monate.\n", number3);
            number3 = number3 * 24.0f;
            printf("Das sind %.4f Stunden.\n", number3);
            number3 = number3 * 1440.0f;
            printf("Das sind %.4f Minuten.\n", number3);
            number3 = number3 * 86400.0f;
            printf("Das sind %.4f Sekunden.\n", number3);
        }

        //Hours
        if (InputTime == 4) {
            printf("Geben Sie an, wie viele Jahre umgerechnet werden sollen.\n");
            float number4;
            scanf("%f", &number4);
            fflush(stdin);

            number4 = number4 / 262800.0f;
            printf("Das sind %.4f Jahre.\n", number4);
            number4 = number4 / 720.0f;
            printf("Das sind %.4f Monate.\n", number4);
            number4 = number4 / 24.0f;
            printf("Das sind %.4f Tage.\n", number4);
            number4 = number4 * 60.0f;
            printf("Das sind %.4f Minuten.\n", number4);
            number4 = number4 * 3600.0f;
            printf("Das sind %.4f Sekunden.\n", number4);
        }

        //Minutes
        if (InputTime == 5) {
            printf("Geben Sie an, wie viele Jahre umgerechnet werden sollen.\n");
            float number5;
            scanf("%f", &number5);
            fflush(stdin);

            number5 = number5 / 15768000.0f;
            printf("Das sind %.4f Jahre.\n", number5);
            number5 = number5 / 43200.0f;
            printf("Das sind %.4f Monate.\n", number5);
            number5 = number5 / 1440.0f;
            printf("Das sind %.4f Tage.\n", number5);
            number5 = number5 / 60.0f;
            printf("Das sind %.4f Stunden.\n", number5);
            number5 = number5 * 60.0f;
            printf("Das sind %.4f Sekunden.\n", number5);
        }

        //Seconds
        if (InputTime == 6) {
            printf("Geben Sie an, wie viele Jahre umgerechnet werden sollen.\n");
            float number6;
            scanf("%f", &number6);
            fflush(stdin);

            number6 = number6 / 946080000.0f;
            printf("Das sind %.4f Jahre.\n", number6);
            number6 = number6 / 2592000.0f;
            printf("Das sind %.4f Mpnate.\n", number6);
            number6 = number6 / 86400.0f;
            printf("Das sind %.4f Tage.\n", number6);
            number6 = number6 / 360.0f;
            printf("Das sind %.4f Stunden.\n", number6);
            number6 = number6 / 60.0f;
            printf("Das sind %.4f Minuten.\n", number6);
        }
    }

    //if 1.3
    if (e1 == 3) {
        printf("Einfacher Rechner\n");

        float zahl1 = 0;
        printf("Geben Sie eine Zahl ein. Es duerfen auch Kommazahlen benutzt werden.\n");
        scanf("%f", &zahl1);
        fflush(stdin);

        int choice = 0;
        printf("Waehlen Sie aus, welche Rechenart Sie benutzen wollen.\nAddition=\t1\nSubtraktion=\t2\nMultiplikation=\t3\nDivision=\t4\n");
        scanf("%d", &choice);
        fflush(stdin);

        float zahl2 = 0;
        printf("Geben Sie eine weitere Zahl ein. Es duerfen auch Kommazahlen benutzt werden.\n");
        scanf("%f", &zahl2);

        if (choice == 1) {
            float erg1 = zahl1 + zahl2;
            printf("Das Ergebnis ist %.2f\n", erg1);
        }
        if (choice == 2) {
            float erg2 = zahl1 - zahl2;
            printf("Das Ergebnis ist %.2f\n", erg2);
        }
        if (choice == 3) {
            float erg3 = zahl1 * zahl2;
            printf("Das Ergebnis ist %.2f\n", erg3);
        }
        if (choice == 4) {
            float erg4 = zahl1 / zahl2;
            printf("Das Ergebnis ist %.2f\n", erg4);
        }
    }
}

