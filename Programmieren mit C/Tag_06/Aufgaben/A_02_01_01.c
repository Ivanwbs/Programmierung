#include <stdio.h>	
//#include <windows.h>	
	
	
int main()	
{	
    system("chcp 1252");	
    system("cls");	

    char x;

    do
    {
     printf("Hallo!\n");
     printf("Wollen Sie, das ein wieteres mal Hallo ausgegeben wird?\n");
     printf("Geben Sie 'j' fuer ja oder 'n'");
     fflush(stdin);
     scanf(" %c", &x);
    }
    while('j'==x);

    printf("Dann giebt es eben keine weitere Begrüssung mehr... und tschööö!\n");
}