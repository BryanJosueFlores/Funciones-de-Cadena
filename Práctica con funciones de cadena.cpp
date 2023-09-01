#include <string.h>
#include <iostream>
#include <windows.h>
#include <locale.h>

void strcpy();
void strncmp();
void strnset();
void strcat();
void strlen();
void strlwr();
void strncat();
void strcspn();

main()
{
	int opc;
	setlocale(LC_CTYPE,"");//esta linea nos permite poner el progama en español
	do
	{
		printf("*******BIENVENIDO AL MENU DE OPCIONES*******\n");
		printf("1)strcpy\n2)strncmp\n3)strnset\n4)strcat\n5)strlen\n6)strlwr\n7)strncat\n8)strcspn\n");
		scanf("%d",&opc);
		system("cls");
		switch(opc)
		{
			case 1:
			strcpy();
			break;
			
			case 2:
			strncmp();
			break;
				
			case 3:
			strnset();
			break;
			
			case 4:
			strcat();
			break;
			
			case 5:
			strlen();
			break;
		
			case 6:
		    strlwr();
		    fflush(stdin);
			break;
			
			case 7:
			strncat();
			break;
			
			case 8:
		    strcspn();
			break;
			
		    default:printf("Opción desconocida\n");
			getchar();
		}
		
		
	}while(opc<9);
	
}

void strcpy()
{
   int x;
char cpy[30];
char cpy2[30];

    printf("strcpy copia la cadena apuntada por s2 (incluyendo el carácter nulo) a la cadena apuntada por s1.\n");
    printf("Ingrese una cadena:\n");
    fflush(stdin);
    gets(cpy);
    printf("Ingrese el numero de caracteres que quiera que se muestren:\n");
    scanf("%d",&x);
    strncpy(cpy2,cpy,x);
    //printf("La cadena es: %s\n",cpy);
    printf("los primeros %d caractedes son: %s\n",x,cpy2);
}

void strncmp()
{

char cmp[30],cmp2[30];

    printf("ingrese una cadena\n");
    fflush(stdin);
    gets(cmp);
    printf("ingrese otra cadena\n");
    gets(cmp2);
     if (strcmp(cmp,cmp2) == 0)
      {
     printf("Son iguales.\n");
      }
    else
    printf("no son iguales.\n");
}

void strnset()
{
	printf("La cadena strnset convierne x numero de letras de una cadena a un caracter a elejir\n");
	char string [30];
    char letra = 'x';
    printf("Ingrese la cadena: \n");
    fflush(stdin);
    gets(string);
   
    printf("string antes de strnset: %s\n", string);
    strnset(string, letra, 3);
    printf("string despues de strnset: %s\n", string);
	
}

void strcat()
{
	char cat[30],cat2[30];

    printf("Ingrese una cadena:\n");
    fflush(stdin);
    gets(cat);
    printf("Su cadena es: ");
    puts(cat);
    printf("Ingrese otra cadena:\n");
    gets(cat2);
    printf("Su segunda cadena es:");
    puts(cat2);
    printf("El resultado de la funcion strcat es:\n");
    strcat(cat,cat2);
    puts(cat);
}

void strlen()
{
	char s[30];
    printf("Ingrese la cadena: \n");
    fflush(stdin);
    gets(s);

   printf( "s=%s\n", s );
   printf( "strlen(s) = %d\n", strlen( s ) );
}

void strlwr()
{
	char string [30] ;
	fflush(stdin);
	printf("Ingrese la cadena: \n");
   gets(string);

   printf("string antes  de strlwr: %s\n", string);
   strlwr(string);
   printf("string despues de strlwr: %s\n", string);
}

void strncat()
{
   printf("La función retorna el valor de s1. Si la copia hace que los objetos se superpongan, entonces el comportamiento no está definido.\n");
   int x;
   char cad1[30] = "Hola ";
   char cad2[30] = "Maestra";

   printf( "Cad1=%s\n", cad1 );
   printf( "Cad2=%s\n", cad2 );
   printf("Ingrese un numero de letras que aparecerán en la segunda cadena\n");
   scanf("%d",&x);
   strncat( cad1, cad2, x );
   printf( "Cad1=%s\n", cad1,x );
}

void strcspn()
{
	printf("Busca caracteres especificos en la cadena 1 y los marca como error\n");
   int tam; 
    char str1[30];
    char str2[30]; 

    printf("Ingrese la cadena: ");
    fflush(stdin);
    gets(str1);
    printf("Ingrese una letra para encontrar alguna coincidencia en la cadena: ");
    gets(str2);
    tam= strcspn(str1, str2); 
    printf("Numero de caracteres antes de encontrar la coincidencia:  %d\n", tam); 
}

	

