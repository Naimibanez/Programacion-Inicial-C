
https://sites.google.com/a/ciencias.unam.mx/computo_cientifico/home/lenguaje_c

funcion main() - Punto de ingreso al programa
	-va acompañada de un tipo de dato, por lo general int (int main () {})
	
Tipo de datos	{				
 -Enteros					
	char	Define un  caracter,   emplea  el conjunto de caracteres ASCII.				
	int		Define un número  entero de 16 o 32 bits (dependiendo del procesador) Su tamaño   suele coincidir con el del bus del procesador.				
	long	Define un número entero de 32 a 64 bits.				
	short	Define un número enteros de tamaño menor a igual que int.				
					
-Reales					
	float	Define un nùmero en punto flotante de precision simple. El tamaño de este tipo suele ser 4    bytes (32 bits).				
	double	Define un número en punto flotante de precision doble. El tamaño de este tipo suele ser de 8 bytes (64 bits).  El tipo double puede ir     precedido del modificador long, lo que indica que su tamaño pasaría a ser de 10 bytes.				
}
	
Variables{
	- 	asignacion de espacio de memoria para que podamos guardar un dato
	-	mantienen valores que pueden variar a lo largo de la ejecucion
	-	es importante aclarar el valor de la variable cuando se la declara, si ese valor va a cambiar o no esta definido se le pone =0
	-	Se puede iniciarlizar muchas variables al mismo tiempo => int a,b,c=0;
}
	
/* Se puede re-definir los nombres de los tipos de dato usando el comando typedef
	typedef real float;
		real suma=0.0;
	typedef letra char;
		letra a=0	*/
		
Constantes {
	Una constante es una expresión cuyo valor no cambia durante toda la ejecución del programa. Las constantes son útiles para definir parámetros de un problema o constantes matemáticas o físicas: PI,e,g,etc.
	
la palabra const se usa para declarar constantes:
	constfloat g=9,8;
	doubleconst PI=3.1415;
	
}

Operadores {
	
	[Aritmetico]{
	+	suma 	c=a+b;
	-	resta	c=a-b;
	*	producto	c=a*b;
	/	cosciente	c=a/b;
	++	preincremento	b=++a;
	++	posincremento	b=a++;
	--	predecremento	b=--a;
	--	posdecremento	b=a--;
	%	modulo o resto	c=a%b;
	}
	[Asignacion]{
	=	asignacion simple	b=4;
	+=	suma y asigna	b+=4;
	-=	resta y asigna	b-=4;
	*=	multiplica y asigna	b*=4;
	/=	divide y asigna	b/=4;
	}
	[Comparacion]{
	==	igualdad	b==a;
	<	menor que	b<a;
	>	mayor que	b>a;
	<=	menor o igual	b<=a;
	>=	mayor o igual	b>=a;
	?:	si ? entonces : de lo contrario c=(a<b)?a:b;
	}
	[Logicos]{
	&&	AND		a&&b;
	||	OR		a||b;
	!	NOT		!a;
	&	AND bits	a & b;
	|	OR bits		a|b;
	^	XOR bits	a ^ b;
	~	NOT bits	~a;
	&=	AND bits asignados	a &= b;
	|=	OR bits asignados	a |= b;
	^=	XOR bits asignados	a ^= b;
	}	
	[Apuntadores]{
	*	resuelve apuntador		a=*b;
	->	resuelve apuntador sobre estructura		a=b->c;
	[]	elemento de un arreglo		a=b[1];
	()	llamada a funcion a=fun();
	}
	
}

printf {
	//printf ("");	imprime en pantalla	(printformatted - imprimir con formato)	
Caracteres especiales y contenedores
	%d	imprime variable int en formato decimal
	%ld	imprime long int en decimal
	%c	imprime caracter
	%s	imprime cadena de caracteres
	%f	imprime float o double
	%e	igual que %f pero con notacion exponencial
	%g	utiliza %f o %e dependiendo cual conviene
	%o	imprime entero en octal
	%x	imprime entero en hexadecimal
	%%	imprime el caracter %
	\n	hace un salto de linea hasta el siguiente renglon
	\t	hace una tabulacion 
	\a	genera un sonido de beep en la consola
	
		printf("%c %d %f %e %s %d %% \n",'1', 2, 3.14, 87654321., "ocho", 9);
		
		imprime
		1 2 3.140000 5.600000e+07 ocho 9%
	
	//Tambien se puede especificar cuantos caracteres se quieren usar a la hora de imprimir, por ejemplo, si se pone %3d nos dice que imprime un int en un campo de 3 caracteres
    //Si ponemos %3.1f quiere decir que nos va a devolver un numero entero de 3 digitos y 1 decimales
}

scanf {
	/*scanf("");	recupera del teclado un valor y lo guarda en variables
	
	scanf("%d", &Num1); -> scanf lee lo que escribe el usuario y & le asigna eso que lee a la variable (Num1 en este caso)*/	
	
Caracteres especiales y contenedores
	%d	imprime variable int en formato decimal
	%ld	imprime long int en decimal
	%c	imprime caracter
	%s	imprime cadena de caracteres
	%f	imprime float o double
	%e	igual que %f pero con notacion exponencial
	%g	utiliza %f o %e dependiendo cual conviene
	%o	imprime entero en octal
	%x	imprime entero en hexadecimal
	%%	imprime el caracter %
	\n	hace un salto de linea hasta el siguiente renglon
	\t	hace una tabulacion 
	\a	genera un sonido de beep en la consola	
	
	& le asigna el valor leido a la variable
		scanf("%d", &variable); //donde la variable tiene que ser de tipo int
		
	getchar	se elimina el salto de linea (ENTER) que tiene por defecto el comando scanf
	/*NOTA: La función scanf deja en el buffer de entrada el caracter'\n' que representa a la tecla ENTER que se utiliza para terminar la entrada de un dato, por lo que SIEMPRE que se utilice la función scanf se deberá llamar a la función getchar para que elimine el caracter'\n' del buffer de entrada.*/
}

