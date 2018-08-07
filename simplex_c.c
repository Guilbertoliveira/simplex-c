#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <conio.h>


void aberturafatec ()
{system("color 6");
   printf("\n            __________________________________________________ \n");
   printf("            /                                                    \ \n" );
   printf("           |    _____________________________________________     | \n");
   printf("           |   |                                             |    | \n");
   printf("           |   |  C:\> _ FATEC    CONVERTOR                   |    | \n");
   printf("           |   |  FEITO POR:                                 |    |\n");
   printf("           |   |  GUILBERT A. DE OLIVEIRA (FODAO)            |    |\n");
   printf("           |   |  FABIO CALCAGNO                             |    |\n");
   printf("           |   |  ORLANDO OLIVEIRA                           |    |\n");
   printf("           |   |  LUIZ GOTTARDI                              |    |\n");
   printf("           |   |                                             |    |\n");
   printf("           |   |                                             |    |\n");
   printf("           |   | PROFESSOR: JEFFERSON                        |    |\n");
   printf("           |   | MATERIA: PROGRAMACAO LINEAR                 |    |\n");
   printf("           |   |                                             |    |\n");
   printf("           |   |                                             |    |\n");
   printf("           |   |                                             |    |\n");
   printf("           |   |_____________________________________________|    |\n");
   printf("           |                                                      |\n");
   printf("            \_____________________________________________________/ \n");
   printf("                   \_______________________________________/\n");
   printf("                _______________________________________________\n");
   printf("             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");
   printf("          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_\n");
   printf("       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");
   printf("    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");
   printf(" _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_\n");
   printf(":-----------------------------------------------------------------------------:\n");
   printf("`---._.-----------------------------------------------------------------._.---'\n");

   int opc;

   printf("DESEJA COMECAR A OPERACAO SE SIM (0) SE NAO (1)");
   scanf("%i", &opc);
   if (opc==0)
   {
       system("cls");
   }
else{
        printf("\n ESPERANDO ..., CASO DESEJE CONTINUAR APERTE ENTER OU QUALQUER TECLA \n");
        system("pause");
        system("cls");
    }



}

int main()
{
    aberturafatec();
 int argumentos, quantx, coluna;
 int cont1, cont2, cont3;
 float matriz[10][10];

 int contadorlinhasf;
 int contadorcolunaf;
 int contadorcolunaz;

 int contz1=1, contz2=1, contz3=1;
 int contf1=1, contf2=1, contf3=1;

 float menorvalor;
 int contadormenorvalor;
 int posicaomenorvalor;

 int contlinhamenorelemento;
 float resultado, resultado2;
 int linhadivisaoresultado;

int linhapivo;
int colunapivo;
int elementopivo;

float matriznova[10][10];
int contadorcolunanova=1;
float inversaodesinal;
inversaodesinal=-1;
int contadorlinhanova;

int colunamatriznova;
colunamatriznova=1;

int contadorlinhainverter=1;

int contadorlinhaconferir;
int contadorcolunaconferir;

float matrizinversao[10][10];
float resultadomatriz[10][10];
float resultadomatriz2[10][10];

printf("DIGITE A QUANTIDADE DE F(RESTRICOES)\n");
scanf("%i", &argumentos);
printf("QUANTIDADE DE X QUE HAVERA \n");
scanf("%i", &quantx);

float matriznova2[10][10];
coluna = argumentos+quantx+2;


// -------------------------------------- PARTE Z DA MATRIZ ---------------FUNÇÃO OBJETIVO-----// ARGUMENTOS (RESTRIÇÕES)---------------------
printf("--------------------------------- Z --------------- \n");
for(cont1=1; cont1<=coluna;)
{

    matriz[1][cont1]=1;
    cont1 ++;

 while(contz1<=quantx)
 {
     // printf("ARGUMENTO LINHA Z (digite o argumento de X%i)", contz1);
     printf("FUNCAO OBJETIVO Z ( X%i)", contz1);
     scanf("%f", &matriz[1][cont1]);
      matriz[1][cont1]=matriz[1][cont1]*(-1);
     cont1++;
     contz1++;
 }
 while(contz2<=argumentos)
 {

     matriz[1][cont1]=0;
     contz2++;
     cont1++;
 }


matriz[1][cont1]=0;
cont1++;
}
// -------------------------------------------------FIM DA PARTE Z DA MATRIZ ----------------


for (contadorlinhasf=2;contadorlinhasf <= argumentos+1;)
{

printf("--------------------------------- F%i --------------- \n", contadorlinhasf-1);

    for (contadorcolunaf=1; contadorcolunaf <= coluna;)
    {

        matriz[contadorlinhasf][contadorcolunaf]=0;
        contadorcolunaf ++;


         while(contf1<=quantx)
 {
     printf("restricoes  F%i (X%i)", contadorlinhasf-1, contf1);
     contf1++;
     scanf("%f", &matriz[contadorlinhasf][contadorcolunaf]);
     contadorcolunaf++;

 }

        while(contf2<=argumentos)
 {
     if(contadorlinhasf-1==contf2)
     {

     matriz[contadorlinhasf][contadorcolunaf]=1;
     contf2++;
     contadorcolunaf++;
     }
     else
     {
        matriz[contadorlinhasf][contadorcolunaf]=0;
     contf2++;
     contadorcolunaf++;

     }
 }

    printf("ARGUMENTO LINHA F%i (digite o valor de B)" ,contadorlinhasf-1);
    scanf("%f", &matriz[contadorlinhasf][contadorcolunaf]);
    contadorcolunaf++;



    }
contf1 = 1;
contf2 = 1;
contadorlinhasf++;
}


// ------------------------------- MENSAGEM ---------------------
printf("----------------------------------- TABELA CONVERTIDA -------------------------------------");
  printf("\n Z \t" );

  for(contadorcolunaz=1; contadorcolunaz<=coluna; )
  {

         printf("%.2f \t", matriz[1][contadorcolunaz]);


     contadorcolunaz++;
  }






for(contadorlinhasf=2; contadorlinhasf<=argumentos+1; )
{

    printf("\n F%i \t" ,contadorlinhasf-1);

  for(contadorcolunaf=1; contadorcolunaf<=coluna; )
  {

         printf("%.2f \t", matriz[contadorlinhasf][contadorcolunaf]);


     contadorcolunaf++;
  }

  contadorlinhasf++;
}


// -------------- FIM DA MENSAGEM ----------------------


// ACHANDO O MENOR VALOR DA LINHA Z ----------------------
 menorvalor=matriz[1][1];
for(contadormenorvalor=2; contadormenorvalor<=coluna;)
{


    if (matriz[1][contadormenorvalor]<menorvalor)
        {
           menorvalor=matriz[1][contadormenorvalor];
           posicaomenorvalor=contadormenorvalor;
           contadormenorvalor++;
        }
    else
    {
        contadormenorvalor++;
    }
}
printf("\n----------------------------------- MENOR NUMERO DE Z -------------------------------------\n");
printf("\n O MENOR DA VALOR DA LINHA Z E : %.2f", menorvalor);
printf("\n POSICAO DA COLUNA %i", posicaomenorvalor);

// FIM DA MENOR LINHA Z --------------------------------------






// --------------------------------------------- DIVISAO DO B/COLUNA PIVO ------------------------------
resultado = matriz[2][coluna] / matriz[2][posicaomenorvalor] ;
linhadivisaoresultado=2;
for (contlinhamenorelemento=3; contlinhamenorelemento<=argumentos+1;)
{

   resultado2 = matriz[contlinhamenorelemento][coluna] / matriz[contlinhamenorelemento][posicaomenorvalor] ;

   if(resultado2<resultado)
   {
   resultado=resultado2;
   linhadivisaoresultado=0;
   linhadivisaoresultado=contlinhamenorelemento;
   contlinhamenorelemento++;
   }

   else
    {
     contlinhamenorelemento++;
    }
}
printf("\n----------------POSICAO E MENOR ELEMENTO JA DIVIDIDO (B/COLUNA PIVO) --------------------------\n");
printf("\n MENOR ELEMENTO E: %.2f", resultado);
printf("\n LINHA DO ELEMENTO F%i \n", linhadivisaoresultado-1);
//-----------------------------------------------------------------------------------------------------------




//----------------------------------------PASSANDO VALORES PARA VARIAVEIS COM NOMES MAIS COERENTES
colunapivo=posicaomenorvalor;
linhapivo=linhadivisaoresultado;
elementopivo=matriz[linhapivo][colunapivo];
printf("-----------------------------------------------------------------------------------------");
printf("\n O ELEMENTO PIVO E: %i \n", elementopivo);
printf("-----------------------------------------------------------------------------------------\n");

//--------------------------------------------------------

//PEGANDO NOVA LINHA PIVOOOOOOOOOOOOOOOOO
printf("\n ------------------------------NOVA LINHA PIVO ------------------- \n");
while(contadorcolunanova<=coluna)
{
matriznova[linhapivo][contadorcolunanova]=matriz[linhapivo][contadorcolunanova]/elementopivo;

printf("%.2f \t", matriznova[linhapivo][contadorcolunanova]);
contadorcolunanova++;
}
printf("\n ----------------------------------------------------------------------- \n");


//------------------------------------------------------------------



// ----------------------- ACHANDO OS INVERTIDOOOS E INVERTENDO PARA NOVA MATRIZ --------------------------------
printf("\n ----------------------------NUMEROS INVERTIDOS----------------------- \n");
for(contadorlinhanova=1; contadorlinhanova<=argumentos+1; )
{
if(contadorlinhanova==linhapivo)
{
    contadorlinhanova++;
}
else
{
     while (contadorlinhainverter<=argumentos+1)
     if (contadorlinhainverter==linhapivo)
   {
       contadorlinhainverter++;
   }
    else
    {
   matrizinversao[contadorlinhainverter][colunapivo]=matriz[contadorlinhainverter][colunapivo]*inversaodesinal;
   printf("NUMEROS INVERTIDOS %.2f \n", matrizinversao[contadorlinhainverter][colunapivo]);
   contadorlinhainverter++;
    }
printf("\n --------------------------------------------------------------------------------------\n");
printf("\n ------------NOVA MATRIZ COM OS VALORES MULTIPLICADOS PELA COLUNA PIVO (OBS NAO POSSUI A LINHA PIVO) --------------- \n");
   for(contadorlinhanova=1; contadorlinhanova<=argumentos+1;)
{
printf("\n");

if(contadorlinhanova==linhapivo)
{
    contadorlinhanova=contadorlinhanova+1;
}

else{
   for(colunamatriznova=1;colunamatriznova<=coluna;)
   {
       matriznova[contadorlinhanova][colunamatriznova]=matriznova[linhapivo][colunamatriznova]*matrizinversao[contadorlinhanova][colunapivo];
       printf("%.2f \t", matriznova[contadorlinhanova][colunamatriznova]);
       colunamatriznova++;
   }
contadorlinhanova=contadorlinhanova+1;
}
}

}

}
// ------------------------------ -------------------------- --------------------------------






for(contadorlinhaconferir=1; contadorlinhaconferir<=argumentos+1;)
{

if(contadorlinhaconferir==linhapivo)
{
    contadorlinhaconferir++;
}
else
{

    for(contadorcolunaconferir=1; contadorcolunaconferir<=coluna;)
    {
           resultadomatriz[contadorlinhaconferir][contadorcolunaconferir]=matriznova[contadorlinhaconferir][contadorcolunaconferir]+matriz[contadorlinhaconferir][contadorcolunaconferir];
           contadorcolunaconferir++;
    }

contadorlinhaconferir++;
}
}
// ------------------------------------------- COLANDO O VALOR DA LINAH PIVO NO RESULTADO ! ----------------------------------------------------------------
for (contadorcolunaconferir=1; contadorcolunaconferir<=coluna;)
{
    resultadomatriz[linhapivo][contadorcolunaconferir]=matriznova[linhapivo][contadorcolunaconferir];
    contadorcolunaconferir++;
}

// ----------------------------------------------------------------------------------------------------------------------------------------------------------



// --------------------------------------------------- RESULTADOS PRONTOS -------------------------------------------------------------------------------
printf("\n ---------------------------CONFERINDO RESULTADOS PRONTOS !--------------------------------------");
printf("\n CONFERINDO MATRIZ NOVA COM OS VALORES JA RESOLVIDOS E A LINHA PIVO INCLUSA. \n");

for(contadorlinhaconferir=1; contadorlinhaconferir<=argumentos+1;)
{
    printf("\n");

    for(contadorcolunaconferir=1; contadorcolunaconferir<=coluna;)
    {
        printf("%.2f \t", resultadomatriz[contadorlinhaconferir][contadorcolunaconferir]);
        contadorcolunaconferir++;
    }
contadorlinhaconferir++;
}


// ----------------------------------------------------------------------------------


int mesalva=0;

int contadorconferir;
contadorconferir=1;
while (contadorconferir<=coluna)
{
    if(resultadomatriz[1][contadorconferir]<0)
    {
        printf("\n NAO E OTIMA");
        mesalva=1;
    }

    contadorconferir=contadorconferir+1;
}



printf("\n O VALOR DE Z E %f \n ", resultadomatriz[1][coluna]);

if (mesalva==0)
{
    printf("\n E OTIMA");
}



system("pause");
}

