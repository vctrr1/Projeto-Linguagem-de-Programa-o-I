#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main (){
    int opcao,retornoDoMenu;
    do{
        opcao = menuPrincipal();

        if(opcao == 1){
            retornoDoMenu = menuInteiros();
            
            if(retornoDoMenu == 1){
                int num1, num2, result;
                system("cls");
                printf("\n\tDigite os numeros pra fazer a multiplicacao: ");
                scanf("%d%d",&num1,&num2);
                result = num1 * num2;
                printf("\n\tO resultado da multiplicacao foi: %d\n\t",result);
                system("pause");
            }
            if(retornoDoMenu == 2){
                numeroPrimo();
                system("pause");
            }
            if (retornoDoMenu == 3){
                tabuada();
                system("pause");
            }
        }
        else if(opcao == 2){
            retornoDoMenu = menuMatrizes();

            if(retornoDoMenu == 1){
                somaMatriz();
                system("pause");
            }
            if(retornoDoMenu == 2){
                diagonalMatriz();
                system("pause");

            }
        }
        else if(opcao == 3){
            retornoDoMenu = menuStrings();

            if(retornoDoMenu == 1){
                juntarCaracteres();
                system("pause");
            }
            if(retornoDoMenu == 2){
                caracteresMaiusculo();
                system("pause");
            }
            if(retornoDoMenu == 3){
                stringPalindromo();
                system("pause");
            }

        }else if(opcao == 4){
            retornoDoMenu = menuVetores();

            if(retornoDoMenu == 1){
                inverterVetor();
                system("pause");
            }
            if(retornoDoMenu == 2){
                MultVet();
                system("pause");
            }
        }else if(opcao ==5){
            exit(0);
        }

    }while(opcao != 0);


    return 0;
}

///////////////////////////////Funcao Menu Princial /////////////////////////////////
int menuPrincipal (){
    int opcao2;

    system("cls");

    printf("\tM E N U    P R I N C I P A L\n");
    printf("\n\n\t1 - Numeros Inteiros");
    printf("\n\n\t2 - Matrizes");
    printf("\n\n\t3 - Strings");
    printf("\n\n\t4 - Vetores");
    printf("\n\n\t5 - Sair");

    printf("\n\n\tEscolha uma das opcoes acima: ");
        scanf("%d",&opcao2);
    
    if(opcao2 < 0 || opcao2 > 5){
        printf("\n\n\tDigite uma opcao valida!!! ");
        getch();
    }

    return opcao2;
}

///////////////////////////////Funcao Menu Inteiros ////////////////////////////////
int menuInteiros(){
    int opcao3;

    system("cls");

    printf("\tM E N U    D E   I N T E I R O S\n");
    printf("\n\n\t1 - Multiplicacao de Inteiros");
    printf("\n\n\t2 - Verificar se e numero primo");
    printf("\n\n\t3 - Tabuada de um numero");

    printf("\n\n\tEscolha uma das opcoes acima: ");
        scanf("%d",&opcao3);
    
    if(opcao3 < 0 || opcao3 > 3){
        printf("\n\n\tDigite uma opcao valida!!! ");
        getch();
    }

    return opcao3;
}
///////////////////////////////Funcao Menu Matrizes /////////////////////////////
int menuMatrizes(){
    int opcao4;

    system("cls");

    printf("\tM E N U    D E   M A T R I Z E S\n");
    printf("\n\n\t1 - Soma de Matrizes");
    printf("\n\n\t2 - Diagonal Principal");

    printf("\n\n\tEscolha uma das opcoes acima: ");
        scanf("%d",&opcao4);
    
    if(opcao4 < 0 || opcao4 > 2){
        printf("\n\n\tDigite uma opcao valida!!! ");
        getch();
    }

    return opcao4;
}

///////////////////////////////Funcao Menu Strings ///////////////////////////////
int menuStrings(){
    int opcao5;

    system("cls");

    printf("\tM E N U    D E   S T R I N G S\n");
    printf("\n\n\t1 - Juntar duas Strings");
    printf("\n\n\t2 - Deixar todas as letras maiusculas");
    printf("\n\n\t3 - Verificar se uma String eh palindromo");


    printf("\n\n\tEscolha uma das opcoes acima: ");
        scanf("%d",&opcao5);
    
    if(opcao5 < 0 || opcao5 > 3){
        printf("\n\n\tDigite uma opcao valida!!! ");
        getch();
    }

    return opcao5;
}

///////////////////////////////Funcao Menu Vetores /////////////////////////////
int menuVetores(){
    int opcao6;

    system("cls");

    printf("\tM E N U    D E   V E T O R E S\n");
    printf("\n\n\t1 - Inverter vetor");
    printf("\n\n\t2 - multiplicar por 2 cada elemento do vetor");

    printf("\n\n\tEscolha uma das opcoes acima: ");
        scanf("%d",&opcao6);
    
    if(opcao6 < 0 || opcao6 > 2){
        printf("\n\n\tDigite uma opcao valida!!! ");
        getch();
    }

    return opcao6;
}

///////////////////////////////Funcao Numero Primo ////////////////////////////////
int numeroPrimo()
{
    int n,d,resposta;
    
    system("cls");

    d = 2;
    resposta = 1;

    printf("\n\tForneca um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 1)
	resposta = 0;

    while (resposta == 1 && d <= n / 2) {
	if (n % d  == 0)
	    resposta = 0;
	d = d + 1;
    }

    if (resposta == 1)
	    printf("\n\t%d eh primo \n", n);
    else
	    printf("\n\t%d nao eh primo \n", n);

    return resposta;
}

/////////////////////////////////////Funcao Tabuada ////////////////////////////////////////
int tabuada () {
    int numero = 1;
    int n1;
    system("cls");
    printf("\n\tDigite o numero que voce quer fazer a tabuada: ");
    scanf("%d", &n1);

    while(numero <= 25) {

        printf("\t%d * %d = %d\n",n1, numero, n1 * numero);
        numero = numero + 1;
    }

    return 0;
}

/////////////////////////////Função Pra Gerar Matriz aleatoria///////////////////////////////

/* int gerarMatriz() {

    int mat[5][6], i, j, numAleatorios;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            numAleatorios = (rand() % 11) + 1;
            mat[i][j] = numAleatorios;
            printf("\t%3d ", mat[i][j]); 
        }
        printf("\n");
    }

    printf("\n");
  
    return 0;
}
*/

///////////////////////////////////Soma de Matrizes/////////////////////////////////
int somaMatriz(){
    int m, n, i, j,m1[3][3], m2[3][3], m3[3][3];

    for (i = 0; i < 3; i = i + 1){ //le a primeira matriz
        for (j = 0; j < 3; j = j + 1){
            printf("\t\nDigite o numero da casa %d %d: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    for (i = 0; i < 3; i = i + 1){ // le a sefunda matriz
        for (j = 0; j < 3; j = j + 1){
            printf("\t\nDigite o numero da casa %d %d: ",i,j);
            scanf("%d", &m2[i][j]);
        }
    }
    system("cls");
    printf("\n"); // imprime a primeira matriz na tela
    printf("Primeira matriz digitada: \n\n");
    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("%3d",m1[i][j]);
        }
        printf("\n\n");
    }

    printf("\n"); // imprime a segunda matriz na tela
    printf("Segunda matriz digitada: \n\n");
    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("%3d",m2[i][j]);
        }
        printf("\n\n");
    }


    printf("Resultado da soma entre as matrizes: \n\n"); // imprime a sema entre as duas matrizes
    for (i = 0; i < 3; i = i + 1){
        for (j = 0; j < 3; j = j + 1){
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%3d", m3[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

///////////////////////////// Diagonal Principal da matriz //////////////////////////////
int diagonalMatriz(){
    int i,j;
    int mat[3][3];
    int dp[3];
    system("cls");

    for(i=0; i<3; i++){ // le os numeros da matriz
        for(j=0; j<3; j++){
            printf("\tDigite o numero da casa %d %d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");

    printf("\tMatriz digitada: \n\n");
    for(i=0;i<3;i++){ // mostra a matriz digitada
        for(j=0; j<3; j++){
            printf("\t%3d",mat[i][j]);
        }
        printf("\n\n");
    }
    printf("\tOs valores da diagonal principal sao: ");
    for(i=0; i<3; i++){ //verifica se na matriz existe um numero com o incide i e j iguais e imprime na tela 
        for(j=0; j<3; j++){
            if(j == i){
                dp[3]= mat[i][j];
                printf("%2d",dp[3]);            
            }
        }
    }
    printf("\n\n\n\n");

    return 0;
}

////////////////////////////////////Funcao Juntar Caracteres ////////////////////////////////////

int juntarCaracteres(){
    char nome1[50];
    char nome2[50];

    system("cls");

    printf("\n\n\tprimeiro nome: ");
    scanf("%s",nome1);

    printf("\n\tsegundo nome: ");
    scanf("%s",nome2);

    strcat(nome1, nome2);

    printf("\n\tFicou: %s\n\n",nome1);

    return 0;
}

//////////////////////////////Funcao deixar Caracteres Maiusculo /////////////////////////////////
int caracteresMaiusculo(){

    char nome[50];

    system("cls");
    printf("\n\tDigite uma palavra: ");
    scanf("%s",nome);


    strupr(nome);

    printf("\n\tResultado Maiusculo: %s\n\n",nome);

    
    return 0;
}

////////////////////////////// Funcao Palindromo String //////////////////////////////////////
int stringPalindromo() {
    char palavra[10];

    system("cls");

    printf("\n\tInsira uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho / 2; i++) { //so ira até o meio
        if (palavra[i] != palavra[tamanho - i - 1]) {
            printf("\n\n\tA palavra inserida nao eh um palindromo.\n\n");
            return 0;
        }
    }
    printf("\n\n\tA palavra inserida eh um palindromo.\n\n");
}

////////////////////////////// funcao Inverter Vetor /////////////////////////////////////
int inverterVetor(){
    int vet[30];
    int vetInvertido[30];
    int i,j;

    system("cls");

    printf("\tVetor random eh: ");
    srand(time(NULL));
    for (int j = 0; j < 30; j++){
        vet[j] = rand() % 50 + 1;

        printf("\t%d",vet[j]);
    }
    printf("\n\n\n\n\n");
    printf("\tVetor invertido eh: ");
    for(i = 0; i < 30; i++){
        vetInvertido[i] = vet[30-i-1];
        printf("\t%d", vetInvertido[i]);
    }
    printf("\n\n\n");

    return 0;
}

///////////////// Funcao multiplicar elemento do vetor /////////////
int MultVet(){
    int vetor[30];
    int vetorMult[30];
    int i,j;

    system("cls");

    printf("\tVetor random eh: ");
    srand(time(NULL));
    for (int i = 0; i < 30; i++){
        vetor[i] = rand() % 50 + 1;

        printf("\t%d",vetor[i]);
    }
    printf("\n\n\n\n\n");

    printf("\tVetor multiplicado eh: ");
    for(j=0; j<30; j++){
        vetorMult[j] = (vetor[j]*2);
        printf("\t%d", vetorMult[j]);
    }
    printf("\n\n\n");
    return 0;
}
//caboooo
