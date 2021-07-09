#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Figura, intento=0, sigue=0, i=0, ej=0;
float Base, Altura, Lado_mayor, Lado_menor, Radio, Apotema, Pi=3.14159, Generatriz, Arista, R1, R2, R3;

int main()
{
		printf("\n\t\t+------------------------+");
		printf("\n\t\t|                        |");
		printf("\n\t\t|      Examen Final      |");
		printf("\n\t\t|                        |");
		printf("\n\t\t+------------------------+");

	printf("\n\nEjercicio"
	"\n\t\tNivel 0"			//-------nivel 0
	"\n\t Ingrese un menu donde elija entre las siguientes figuras"
	"\n\t\t Triangulo (equilatero)"
	"\n\t\t Cuadrado"
	"\n\t\t Rectangulo"
	"\n\t\t Heptagono"
	"\n\t\t Circulo"
	"\n\tImprime el area y perimetro."
	"\n\n\t\tNivel 1"			//-------nivel 1
	//https://www.shmoop.com/geometria-basica/objetos-3d.html
	//https://www.shmoop.com/geometria-basica/area-superficie.html
	"\n\t Ingrese un menu donde elija entre las siguientes figuras"
	"\n\t\t Piramide (equilatera)"
	"\n\t\t Cubo"
	"\n\t\t Prisma rectangular"
	"\n\t\t Prisma hexagonal"
	"\n\t\t Esfera"
	"\n\tImprime la superficie y volumen."
	"\n\n\t\tNivel 2"			//-------nivel 2
	//https://www.portaleducativo.net/segundo-basico/48/Cuerpos-geometricos-3-dimensiones
	"\n\t Ingrese un menu donde elija entre las siguientes figuras"
	"\n\t\t Ovoide"
	"\n\t\t Cono"
	"\n\t\t Piramide no equilatera"
	"\n\t\t Tetraedro"
	"\n\t\t Octaedro"
	"\n\tImprime la superficie y volumen."
	"\n\n\t\t...presione enter para continuar");
	getchar();fflush(stdin);system("cls");

		printf("\n\t\t+----------------------------------------------------------------+");
		printf("\n\t\t|  Programita elaborado, con varias horas de c#lo en silla, por: |");
		printf("\n\t\t|             Vanessa Penalver y Darwin Moreno                   |");
		printf("\n\t\t+----------------------------------------------------------------+");
		printf("\n\nBueno, empecemos con el nivel 0, presione enter.");
	getchar();fflush(stdin);system("cls");
	
//Nivel 0
	do{	system("cls");
		printf(
		"\n\n\tNivel 0 para principiantes:"
		"\n\t\tElija una figura para conocer su area y perimetro"
		"\n\t\t Marque 1 para Triangulo equilatero (si, ese que tiene lados iguales)"
		"\n\t\t Marque 2 para Cuadrado"
		"\n\t\t Marque 3 para Rectangulo"
		"\n\t\t Marque 4 para Heptagono"
		"\n\t\t Marque 5 para Circulo"
		"\n\t\t\t Recuerda ingresar los datos en una sola unidad"
		"\n\t\t Que figurita vamos a trabajar?:"); scanf("%i",&Figura);
	
		if (Figura==1){
			printf("\nIngrese, por favor, la Base:");scanf("%f",&Base);
			printf("\nAhora la Altura:");scanf("%f", &Altura);
			printf("\nEl area es: %f", (Base*Altura)/2);//---Aca se introduce la formula matematica para el calculo de el area
			printf("\nEl perimetro es: %f", Base*3);    //---Aca se introduce la formula matematica para el calculo de el perimetro
			sigue=1;
		}	
		else if (Figura==2){
			printf("\nIngrese, por favor, algun lado:");scanf("%f",&Lado_mayor);
			printf("\nEl area es: %f", Lado_mayor*Lado_mayor);
			printf("\nEl perimetro es: %f", Lado_mayor*4);
			sigue=1;
		}
		else if (Figura==3){
			printf("\nIngrese, por favor, Lado mayor:");scanf("%f",&Lado_mayor);
			printf("\nAhora el Lado menor:");scanf("%f",&Lado_menor);	
			printf("\nEl area es: %f", Lado_mayor*Lado_menor);
			printf("\nEl perimetro es: %f", ((Lado_mayor*2)+(Lado_menor*2)));
			sigue=1;
		}	
		else if (Figura==4){
			printf("\nIngrese, por favor, el valor de un Lado:");scanf("%f",&Lado_mayor);		
			printf("\nEl area es: %f", Lado_mayor*3.634);
			printf("\nEl perimetro es: %f", Lado_mayor*7);
			sigue=1;
		}
		else if (Figura==5){
			printf("\nIngrese, por favor, el Radio:");scanf("%f",&Radio);	
			printf("\nEl area es: %f", Pi*Radio*Radio);
			printf("\nEl perimetro es: %f", Pi*Radio);
			sigue=1;
		}
		else{
			puts("\nEn serio?, vamos!! no es tan dificil elegir un numero entre 1 y 5."
			"\nTe doy otra oportunidad, no la desperdicies, presiona enter para volver al menu principal.");
			intento++; getchar(); fflush (stdin);
			getchar();
		}
	}
	while(intento<3 && sigue == 0);
	getchar ();		
	printf("\n\n\t\t...presione una tecla para continuar con el siguiente nivel de dificultad");
	getchar(); fflush(stdin); system("cls");
		
//Nivel 1
	do{	system("cls");
		printf(
		"\n\tNivel 1 para no principiantes:"
		"\n\n\t\tElija una figura para conocer su superficie y volumen"
		"\n\t\t Marque 1 para Piramide equilatera (si, esa que tiene lados iguales)"
		"\n\t\t Marque 2 para Cubo"
		"\n\t\t Marque 3 para Prisma rectangular"
		"\n\t\t Marque 4 para Prisma hexagonal"
		"\n\t\t Marque 5 para Esfera"
		"\n\t\t\t Recuerda ingresar los datos en una sola unidad"
		"\n\t\t Que figura vamos a trabajar?:"); scanf("%i",&Figura);
		
		if (Figura==1){
			printf("\nIngrese, por favor, un lado de la Base:");scanf("%f",&Base);
			printf("\nAhora la Altura:");scanf("%f",&Altura);
			printf("\nAhora la Apotema:");scanf("%f",&Apotema);
			printf("\nLa superficie es: %f", ((Base*Base)+((Base*Apotema)/2)));
			printf("\nEl volumen es: %f", (Base*Altura)/3);
			ej=1;
		}
		else if (Figura==2){
			printf("\nIngrese, por favor, algun lado:");scanf("%f",&Lado_mayor);
			printf("\nLa superficie es: %f", 6*pow(Lado_mayor,2));
			printf("\nEl volumen es: %f", pow(Lado_mayor,3));
			ej=1;
		}
		else if (Figura==3){
			printf("\nIngrese, por favor, el Lado mayor:");scanf("%f",&Lado_mayor);
			printf("\nAhora el Lado menor:");scanf("%f",&Lado_menor);
			printf("\nAhora la Altura:");scanf("%f",&Altura);
			printf("\nLa superficie es: %f", ((2*Lado_mayor*Altura)+(2*Lado_mayor*Lado_menor)+(2*Lado_menor*Altura)));
			printf("\nEl volumen es: %f", (Lado_mayor*Lado_menor*Altura));
			ej=1;
		}
		else if (Figura==4){
			printf("\nIngrese, por favor, el valor de un lado de la base:");scanf("%f",&Lado_mayor);
			printf("\nAhora la Altura:");scanf("%f",&Altura);
			printf("\nAhora el Apotema:");scanf("%f",&Apotema);
			printf("\nLa superficie es: %f", 6*Lado_mayor*(Apotema+Altura));
			printf("\nEl volumen es: %f", 3*Lado_mayor*Apotema*Altura);
			ej=1;
		}
		else if (Figura==5){
			printf("\nIngrese, por favor, el Radio:");scanf("%f",&Radio);
			printf("\nLa superficie es: %f", 4*Pi*pow(Radio,2)); 
			printf("\nEl volumen es: %f", ((4/3)*Pi*pow(Radio,3))); 
			ej=1;
		}	
		else{
			puts("\nEn serio?, vamos!! no es tan dificil elegir un numero entre 1 y 5."
			"\nTe doy otra oportunidad, no la desperdicies, presiona enter para volver al menu principal.");
			i++; getchar(); fflush (stdin);
			getchar();
		}
	}
	while (i<2 && ej == 0);
	getchar ();		
	printf("\n\n\t\t...presione una tecla para continuar con el siguiente nivel de dificultad");
	getchar(); fflush(stdin); system("cls");

//Nivel 2 Ya hoo!!
	printf("\n\tNivel 2 para avanzados:"
	"\n\n\t\tElija una figura para conocer su superficie y volumen"
	"\n\t\t Marque 1 para Ovoide"//Aca supuse que era un elipsoide comun y silvestre. Solo consegui el volumen
	"\n\t\t Marque 2 para Cono"
	"\n\t\t Marque 3 para Piramide no equilatera"//Supongo que es de base cuadrada
	"\n\t\t Marque 4 para Tetraedro (Ese formado por 4 triangulos equilateros)"
	"\n\t\t Marque 5 para Octaedro"//Supongo octaedro regular
	"\n\t\t\t Recuerda ingresar los datos en una sola unidad"
	"\n\t\t Que figura vamos a trabajar?:"); scanf("%i",&Figura);
	
	switch(Figura)//Aca usare el switch, mas compacto, funciona igual. Esto no estaba en la pre entrega 
	{
	case 1: printf("Ingrese, por favor, el Radio 1:");scanf("%f",&R1);
			printf("Ahora el Radio 2:");scanf("%f",&R2);
			printf("Y por ultimo el Radio 3:");scanf("%f",&R3);
			printf("La superficie es: %f", (Base*Altura)/2);
			printf("\nEl volumen es: %f", (4/3)*Pi*R1*R2*R3);break;
	case 2: printf("Ingrese, por favor, el Radio de la base:");scanf("%f",&Radio);
			printf("Ahora la Generatriz:");scanf("%f",&Generatriz);
			printf("Y por ultimo la altura:");scanf("%f",&Altura);
			printf("La superficie es: %f", Pi*Radio*(Radio+Generatriz));
			printf("\nEl volumen es: %f", (Pi*pow(Radio,2)*Altura)/3);break;
	case 3: printf("Ingrese, por favor, Lado_mayor:");scanf("%f",&Lado_mayor);
			printf("Ahora el Lado_menor: %f", Lado_menor);scanf("%f",&Lado_menor);
			printf("La superficie es: %f", Lado_mayor*Lado_menor);
			printf("\nEl volumen es: %f", ((Lado_mayor*2)+(Lado_menor*2)));break;
	case 4: printf("Ingrese, por favor, el valor de la arista:");scanf("%f",&Arista);
			printf("La superficie es: %f", sqrt(3)*pow(Arista,2));
			printf("\nEl volumen es: %f", (sqrt(2)/12)*pow(Arista,3));break;
	case 5: printf("Ingrese, por favor, la arista:");scanf("%f",&Arista);
			printf("\nLa superficie es: %f", 2*sqrt(3)*Arista*Arista);
			printf("\nEl volumen es: %f", ((sqrt(2)/3)*pow(Arista,3)));break;
	default:printf("\nNo seleccionaste una figura del menu");
	}
	getchar();
	printf("\n\n\t\t Eso es todo amigos. Vuelvas prontos");
	getchar();
		
return 0;
}

