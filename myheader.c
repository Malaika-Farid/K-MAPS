#include "myheader.h"
void welcome()
{
    printf("\n\n\n\n\n");
    printf("\t\t    \033[1;35m^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("\t\t    \033[1;35m ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \n");
    printf("\033[1;33m");
    printf("\t\t\t%c", 220);      // upper-left corner
    for (int i = 1; i <= 40; i++) // upper border lines
    {
        printf("%c", 220);
    }
    printf("%c\n", 220); // upper-right corner
    printf("\t\t\t%c                                        %c\n", 219, 219);
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
    printf("\t\t\t%c                ", 219);
    printf("\033[4;31m");
    printf("WELCOME"); // left box line - text - rigfht box line
    printf("\033[0m");
    printf("\033[1;33m");
    printf("                 %c\n", 219);
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
    printf("\t\t\t%c", 219);                                                  // lower-right corner
    for (int i = 1; i <= 40; i++)                                             // lower box lines
    {
        printf("%c", 220);
    }
    printf("%c\n", 219); // lower-right lines
    printf("\033[0m");
    printf("\t\t    \033[1;35m ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \n");
    printf("\t\t    \033[1;35m^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("\n\n\n\n\n\n");

    next();
}
void intropage()
{
    printf("\n\t\t\t\t\t\033[1;35m\033[4;35mINTRODUCTION TO K-MAPS\n\n");
    printf("\t\t\033[0m"
           "It is a visual method due to which we can \033[4;32mminimize Boolean expressions of \n\t\t2 to 4 variables\033[0m very easily using K-map without using any Boolean algebra \n\t\ttheorems.");
    printf("\n\n");
    printf("\t\t\033[4;35mFor Example\033[0m: The k-map representation of a boolean expression \033[1;35mF(A,B) = %cm(1,2) \033[0mis : \n\n\n", 144);
    printf("\t\t\t\t\t     B'    B\n");
    printf("\t\t\t\t\t  %c", 218); // upper-left corner
    for (int i = 1; i <= 5; i++)   // upper border lines
        printf("%c", 196);
    printf("%c", 194);
    for (int i = 1; i <= 5; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                     // upper-right corner
    printf("\t\t\t\t\tA'%c  0  %c  1  %c\n", 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 195);                           // lower-right corner
    for (int i = 1; i <= 5; i++)                             // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);

    //______________________________________
    printf("\t\t\t\t\tA %c  1  %c  0  %c\n", 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 192);                           // lower-right corner
    for (int i = 1; i <= 5; i++)                             // lower box lines
        printf("%c", 196);
    printf("%c", 193);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 217);
    printf("\t\t\033[4;31mNOTE\033[0m : We will discuss k-map interpretation only for \033[4;31mminterms\033[0m.\n\n");
    next();
}
void next()
{
    printf("\033[1;31m");
    printf("\t\t\t\t\t\t\t\t\t\t");
    printf("%c", 201);            // upper-left corner
    for (int i = 1; i <= 10; i++) // upper border lines
    {
        printf("%c", 205);
    }
    printf("%c\n", 187);                                                          // upper-right corner
    printf("\t\t\t\t\t\t\t\t\t\t%c\033[1;33m  NEXT>>\033[1;31m  %c\n", 186, 186); // left box line - text - rigfht box line
    printf("\t\t\t\t\t\t\t\t\t\t%c", 200);                                        // lower-right corner
    for (int i = 1; i <= 10; i++)                                                 // lower box lines
    {
        printf("%c", 205);
    }
    printf("%c\n", 188);
    printf("\033[0m");
    char a = getch();
    system("cls");
}
void two_variables()
{
    printf("\n\n\t\tThis method is suitable for the boolean expressions of upto \033[4;35m4\033[0m variables.");
    printf("\n\n\t\033[4;31mK-MAP FOR TWO VARIABLES:\n");
    printf("\033[0m");
    printf("\n\t\tThere are \033[1;32mfour\033[0m minterms for two variables; hence, the map consists of four squares,\n\t\tone for each minterm. ");
    printf("For Example : \n\n");
    printf("\t\t\t\t\t     B'    B\n");
    printf("\t\t\t\t\t  %c", 218); // upper-left corner
    for (int i = 1; i <= 5; i++)   // upper border lines
        printf("%c", 196);
    printf("%c", 194);
    for (int i = 1; i <= 5; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                     // upper-right corner
    printf("\t\t\t\t\tA'%cA'B' %c A'B %c\n", 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 195);                           // lower-right corner
    for (int i = 1; i <= 5; i++)                             // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);

    //______________________________________
    printf("\t\t\t\t\tA %c AB' %c AB  %c\n", 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 192);                           // lower-right corner
    for (int i = 1; i <= 5; i++)                             // lower box lines
        printf("%c", 196);
    printf("%c", 193);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n\n", 217);
    next();
}
void three_variables()
{
    printf("\t\t\033[4;36mK-MAP FOR THREE VARIABLES:");
    printf("\n\n\t\t\t\033[0mThere are \033[1;31meight\033[0m minterms for \033[1;31mthree\033[0m binary \
variables; therefore, the map \n\t\t\tconsists of eight squares. Note that the minterms are \
arranged, not in a \n\t\t\tbinary sequence, but in a sequence similar to the \033[1;31mGray code\033[0m.");
    printf("\033[0m");
    printf("\n\n\t\t\033[4;36mFor Example\033[0m : \n\n");
    printf("\t\t\t\t\t     B'C'     B'C      BC       BC'\n");
    printf("\t\t\t\t\t  %c", 218); // upper-left corner
    for (int i = 1; i <= 8; i++)   // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                                                         // upper-right corner
    printf("\t\t\t\t\tA'%c A'B'C' %c A'B'C  %c  A'BC  %c  A'BC' %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 195);                                                               // mid left trio															 // lower-right corner
    for (int i = 1; i <= 8; i++)                                                                 // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);           // mid inter trio
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);                                                                         // lower-right corner
    printf("\t\t\t\t\tA %c  AB'C' %c  AB'C  %c   ABC  %c  ABC'  %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 192);                                                               // lower-right corner
    for (int i = 1; i <= 8; i++)                                                                 // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n\n", 217);
    next();
}
void four_variables()
{
    printf("\t\t\033[4;31mK-MAPS FOR FOUR VARIABLES\033[0m : \n");
    printf("\n\t\t\t\033[0mThere are \033[1;36msixteen\033[0m minterms for \033[1;36mfour\033[0m binary \
variables; therefore, the map \n\t\t\tconsists of eight squares.");
    printf("The rows and columns are numbered in a Gray code sequence, \n\t\t\twith only one digit \
changing value between two adjacent rows or columns.");
    printf("\n\n\t\tThe map for Boolean functions of four binary variables (A, B, C, D) is shown in Fig");
    printf("\n\n\t\t\t\t\t       C'D'        C'D         CD       CD'\n");
    printf("\t\t\t\t\t    %c", 218); // upper-left corner
    for (int i = 1; i <= 10; i++)    // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                                                                   // upper-right corner
    printf("\t\t\t\t\tA'B'%c A'B'C'D' %c A'B'C'D  %c  A'B'CD  %c  A'B'CD' %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                       // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                          // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);                                                                                   // lower-right corner
    printf("\t\t\t\t\tA'B %c A'BC'D'  %c  A'BC'D  %c  A'BCD   %c  A'BCD'  %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                       // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                          // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);
    printf("\t\t\t\t\t AB %c  ABC'D'  %c   ABC'D  %c   ABCD   %c   ABCD'  %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                       // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                          // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);
    printf("\t\t\t\t\tA'B %c  A'BC'D' %c  A'BC'D  %c  A'BCD   %c  A'BCD'  %c\n", 179, 179, 179, 179, 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 192);                                                                       // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                          // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n", 217);
    next();
}
void create_1()
{
    int num = 0;
    printf("\n\n\033[2;31mHow many minterms in your boolean function : ");
    while (!(num >= 1 && num <= 3))
    {
        gotoxy(48, 3);
        printf("      ");
        gotoxy(48, 3);
        scanf("%d", &num);
        if (!(num >= 1 && num <= 3))
        {
            Beep(523, 800);
            Beep(523, 800);
        }
    }
    printf("\033[2;35mChoose the minterms : \n");
    int array[4] = {0};
    int axis = 5;
    for (int i = 1; i <= num; i++)
    {
        int temp = -1;
        while (!(temp >= 0 && temp <= 3 && array[temp] == 0))
        {
            gotoxy(25, axis);
            scanf("%d", &temp);
            if (!(temp >= 0 && temp <= 3 && array[temp] == 0))
            {
                gotoxy(25, axis);
                Beep(523, 800);
                printf("    ");
            }
        }
        axis++;
        array[temp] = 1;
    }
    system("pause");
    system("cls");
    printf("\033[7:34mEXPRESSION : \n\t\t \033[0mF(A,B) = {");
    for (int i = 0; i < 4; i++)
    {
        if (array[i] != 0)
        {
            printf("%d,", i);
        }
    }
    printf("}\n\n");
    printf("\t\t\t\t\t     B'    B\n");
    printf("\t\t\t\t\t  %c", 218); // upper-left corner
    for (int i = 1; i <= 5; i++)   // upper border lines
        printf("%c", 196);
    printf("%c", 194);
    for (int i = 1; i <= 5; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                                           // upper-right corner
    printf("\t\t\t\t\tA'%c  %d  %c  %d  %c\n", 179, array[0], 179, array[1], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 195);                                                 // lower-right corner
    for (int i = 1; i <= 5; i++)                                                   // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);
    // ________________________________
    printf("\t\t\t\t\tA %c  %d  %c  %d  %c\n", 179, array[2], 179, array[3], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 192);                                                 // lower-right corner
    for (int i = 1; i <= 5; i++)                                                   // lower box lines
        printf("%c", 196);
    printf("%c", 193);
    for (int i = 1; i <= 5; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n\n", 217);
    system("pause");
    system("cls");
}
void create_2()
{
    int num = 0;
    printf("\n\n\033[2;31mHow many minterms in your boolean function : ");
    while (!(num >= 1 && num <= 8))
    {
        gotoxy(48, 3);
        scanf("%d", &num);
        if (!(num >= 1 && num <= 8))
        {
            Beep(523, 800);
            Beep(523, 800);
            gotoxy(48, 3);
            printf("      ");
        }
    }
    printf("\033[2;35mChoose the minterms : \n");
    int array[8] = {0};
    int axis = 5;
    for (int i = 1; i <= num; i++)
    {
        int temp = -1;
        while (!(temp >= 0 && temp <= 7 && array[temp] == 0))
        {
            gotoxy(25, axis);
            scanf("%d", &temp);
            if (!(temp >= 0 && temp <= 7 && array[temp] == 0))
            {
                gotoxy(25, axis);
                Beep(523, 800);
                printf("    ");
            }
        }
        axis++;
        array[temp] = 1;
    }
    system("pause");
    system("cls");
    printf("\033[7;34mEXPRESSION : \n\t\t\033[0m F(A,B,C) = {");
    for (int i = 0; i < 8; i++)
    {
        if (array[i] != 0)
        {
            printf("%d,", i);
        }
    }
    printf("}\n\n");
    printf("\t\t\t\t\t     B'C'     B'C      BC       BC'\n");
    printf("\t\t\t\t\t  %c", 218); // upper-left corner
    for (int i = 1; i <= 8; i++)   // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);           // break
    for (int i = 1; i <= 8; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                                                                                                     // upper-right corner
    printf("\t\t\t\t\tA'%c    %d   %c    %d   %c    %d   %c    %d   %c\n", 179, array[0], 179, array[1], 179, array[3], 179, array[2], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 195);                                                                                                           // mid left trio															 // lower-right corner
    for (int i = 1; i <= 8; i++)                                                                                                             // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);           // mid inter trio
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);                                                                                                                     // lower-right corner
    printf("\t\t\t\t\tA %c    %d   %c    %d   %c    %d   %c    %d   %c\n", 179, array[4], 179, array[5], 179, array[7], 179, array[6], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t  %c", 192);                                                                                                           // lower-right corner
    for (int i = 1; i <= 8; i++)                                                                                                             // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);           // break
    for (int i = 1; i <= 8; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n\n", 217);
    getch();
    system("cls");
}
void create_3()
{
    int num = 0;
    printf("\n\n\033[2;31mHow many minterms in your boolean function : ");
    while (!(num >= 1 && num <= 16))
    {
        gotoxy(48, 3);
        scanf("%d", &num);
        if (!(num >= 1 && num <= 16))
        {
            Beep(523, 800);
            Beep(523, 800);
            gotoxy(48, 3);
            printf("         ");
        }
    }
    printf("\033[2;35mChoose the minterms : \n");
    int array[16] = {0};
    int axis = 5;
    for (int i = 1; i <= num; i++)
    {
        int temp = -1;
        while (!(temp >= 0 && temp <= 15 && array[temp] == 0))
        {
            gotoxy(25, axis);
            scanf("%d", &temp);
            if (!(temp >= 0 && temp <= 15 && array[temp] == 0))
            {
                gotoxy(25, axis);
                Beep(523, 800);
                printf("       ");
            }
        }
        axis++;
        array[temp] = 1;
    }
    system("pause");
    system("cls");
    printf("\033[7;34mEXPRESSION : \n\t\t\033[0m F(A,B,C,D) = {");
    for (int i = 0; i < 15; i++)
    {
        if (array[i] != 0)
        {
            printf("%d,", i);
        }
    }
    printf("}\n\n");

    //++++++++++++++++++++++++
    printf("\n\n\t\t\t\t\t       C'D'        C'D         CD       CD'\n");
    printf("\t\t\t\t\t    %c", 218); // upper-left corner
    for (int i = 1; i <= 10; i++)    // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c", 194);            // break
    for (int i = 1; i <= 10; i++) // upper border lines
        printf("%c", 196);
    printf("%c\n", 191);                                                                                                                               // upper-right corner
    printf("\t\t\t\t\tA'B'%c     %d    %c     %d    %c     %d    %c     %d    %c\n", 179, array[0], 179, array[1], 179, array[3], 179, array[2], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                                                                   // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                                                                      // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);                                                                                                                               // lower-right corner
    printf("\t\t\t\t\tA'B %c     %d    %c     %d    %c     %d    %c     %d    %c\n", 179, array[4], 179, array[5], 179, array[7], 179, array[6], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                                                                   // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                                                                      // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);
    printf("\t\t\t\t\t AB %c     %d    %c     %d    %c     %d    %c     %d    %c\n", 179, array[12], 179, array[13], 179, array[15], 179, array[14], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 195);                                                                                                                       // mid left trio															 // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                                                                          // lower lines															 // lower box lines
        printf("%c", 196);
    printf("%c", 197);            // mid inter trio
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 197);
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n", 180);
    printf("\t\t\t\t\tA'B %c     %d    %c     %d    %c     %d    %c     %d    %c\n", 179, array[8], 179, array[9], 179, array[11], 179, array[10], 179); // left box line - text - rigfht box line
    printf("\t\t\t\t\t    %c", 192);                                                                                                                     // lower-right corner
    for (int i = 1; i <= 10; i++)                                                                                                                        // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c", 193);            // break
    for (int i = 1; i <= 10; i++) // lower box lines
        printf("%c", 196);
    printf("%c\n\n", 217);
    system("pause");
    system("cls");
}
void thankyou()
{
    printf("\n\n\n\n\n");
    printf("\t\t    \033[1;35m^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("\t\t    \033[1;35m ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \n");
    printf("\033[1;33m");
    printf("\t\t\t%c", 220);      // upper-left corner
    for (int i = 1; i <= 40; i++) // upper border lines
    {
        printf("%c", 220);
    }
    printf("%c\n", 220); // upper-right corner
    printf("\t\t\t%c                                        %c\n", 219, 219);
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
    printf("\t\t\t%c                ", 219);
    printf("\033[4;31m");
    printf("THANK YOU"); // left box line - text - rigfht box line
    printf("\033[0m");
    printf("\033[1;33m");
    printf("               %c\n", 219);
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
    printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
    printf("\t\t\t%c", 219);                                                  // lower-right corner
    for (int i = 1; i <= 40; i++)                                             // lower box lines
    {
        printf("%c", 220);
    }
    printf("%c\n", 219); // lower-right lines
    printf("\033[0m");
    printf("\t\t    \033[1;35m ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ \n");
    printf("\t\t    \033[1;35m^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("\n\n\n\n\n\n\033[0m");
    system("pause");
    system("cls");
}
void answers()
{
	FILE *fp;
	fp = fopen("answerkey.txt", "r");
	char c;
	int i = 1;
	while (!feof(fp))
	{
		c = fgetc(fp);
		if (c != '\n')
		{
			if (i != 6)
			{
				printf("%d : %c\n", i, c);
				i++;
			}
		}
	}
	fclose(fp);
}