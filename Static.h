#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

//Library that lets you change beeetween som bases
int iSize = 0;
//checamos si viene un 1 o 0 y agregamos lo adecuado
int asciiBinaryToInt(char *ptr)
{

    int iRes = 0;

    for(ptr; *ptr != '\0'; ptr++)
    {
        if(*ptr == '1')
        {

          iRes = iRes + pow(2.0,iSize-1);

          iSize = iSize -1;
        }
        else
            if(*ptr == '0')
        {
            iSize = iSize -1;
        }


    }
    printf("%i\n",iRes);

}
//Checamos si lo que viene en el arreglo de caracteres es un caracter valido y dependiendo de cual sea restamos lo adecuado
int asciiHEXToInt(char *ptr)
{
    int iResu = 0;
    for(ptr; *ptr != '\0'; ptr++)
    {

        if(*ptr >=65 && *ptr <=70)
        {
           iResu += (*ptr -55)* pow(16,iSize-1);
           iSize--;
        }
        else
            if(*ptr >=97 && *ptr <=102)
            {
                iResu += (*ptr -87)* pow(16,iSize-1);
                iSize--;
            }
        else
            if(*ptr >= 48 && *ptr <=57)
            {
                iResu += (*ptr -48)* pow(16,iSize-1);
                iSize--;
            }
            else
            {
              printf("Numero invalido\n");
              return 0;
            }

    }
    return iResu;


}
int asciiOCTToInt(char *ptr)
{
	int iResu = 0;
	for(ptr; *ptr != '\0'; ptr++){

		if(*ptr >=65 && *ptr <=70)
        {
           iResu += (*ptr -55)* pow(16,iSize-1);
           iSize--;
        }
        else
            if(*ptr >=97 && *ptr <=102)
            {
                iResu += (*ptr -87)* pow(16,iSize-1);
                iSize--;
            }
        else
            if(*ptr >= 48 && *ptr <=57)
            {
                iResu += (*ptr -48)* pow(16,iSize-1);
                iSize--;
            }
            else
            {
              printf("Numero invalido\n");
              return 0;
            }

	}
	return iResu;
}
void divideByTwo(int *iNum)
{
    printf("%i",*iNum>>1);
}

void multByTwo(int *iNum)
{
  printf("%i",*iNum<<1);
}