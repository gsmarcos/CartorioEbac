#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��a de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar dos strings


int registro ()
{
	//iniciando cria��o de vari�vel/string
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome [40];
		char cargo [40];
		//final da cria��o de vari�vel/string
		
		printf("Digite o CPF a ser cadastrado: "); // coletando informa��es do usu�rio
		scanf ("%s", cpf); //%s refere-se a string
		
		strcpy(arquivo, cpf); //respons�vel por copiar os valores de string
	
	    FILE *file; //criar o arquivo
	    file = fopen(arquivo, "w"); // salvo o valor da vari�vel 
	    fprintf(file, cpf); //fecha o arquivo 
	    fclose(file);
	    
	    file = fopen (arquivo, "a");
	    fprintf(file, ",");
	    fclose(file);
	    
	    
		
		printf("Digite o nome a ser cadastrado: "); //coletnado informa��es do usu�rio
	    scanf ("%s", nome); //%s refere-se a string
	    
	    file = fopen(arquivo, "a"); //
	    fprintf (file, nome);
	    fclose (file);
	    
	    
	    
	    printf("Digite o sobrenome cadastrado: "); //colet
	    scanf("%s", sobrenome);
		
		file = fopen (arquivo,"a");
		fprintf (file,sobrenome);
		fclose (file);
		
		file = fopen (arquivo, "a");
		fprintf(file, ",");
		fclose (file);
		
		
		
		printf ("Digite o cargo a ser cadastrado:");
		scanf("%s", cargo);
		
		file = fopen (arquivo, "a");
		fprintf(file, cargo);
		fclose(file);
		
		system ("pause");
		
}

int consultar ()

{
	setlocale(LC_ALL, "Portuguese"); 
	
      char  cpf [40];
	  char conteudo [200];
	  
	  printf ("Digite o CPF a ser consultado");
	  scanf ("%s", cpf);
	  
	  
	FILE *file;
	file = fopen(cpf, "r");
	 
	 if (file == NULL)
	 
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
    }  
    
    while(fgets(conteudo, 200, file) != NULL)
	{
    	printf("\n Essas s�o as informa��es do usu�rio");
    	printf("%s", conteudo);
    	printf("\n\n");	
	}

    system ("pause");



}

int deletar ()
{
	
     char cpf [40];
     
     printf ("Digite o usu�rio a ser deletado");
     scanf("%s", cpf);
	 
	 remove (cpf);
	 
	 FILE *file;
	 file = fopen(cpf, "r");
	 
	 if(file == NULL)
	 {
	 	printf ("O usu�rio n�o se encontra no sistema.\n");
	 	system ("pause");
	 }
}




int main()
{

		int opcao=0; //Definindo as variav�es
		int laco=1;
		
		for(laco=1;laco=1;)
	{
		system("cls");
	
		
		setlocale(LC_ALL, "Portuguese"); 
		
	    	printf("### Cart�rio da EBAC ###\n\n"); //in�ncio do menu
		    printf("Escolha a op��o desejada do menu\n\n");
		    printf("\t1 - Registrar nomes\n");
		    printf("\t2 - Consultar Nomes\n");
		    printf("\t3 - Deletar Nomes\n"); 
		    printf("\t4 - Sair do Sistema"   );
		
		    scanf("%d", &opcao);	
		
		    system("cls"); //respons�lve por limpar a tela
		    
		    switch(opcao) //inicio da sele��o dos menus		
		
		{case 1:
		    registro (); //chamada de fun��es
			system("pause");
			break;
			
			case 2:
			consultar();	
			system("pause");
			break;
			
			case 3:
			deletar ();
			system("pause");
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;	
			break;
			default:
				printf("Essa op��o n�o est� dispon�ve\nl");
			system("pause");
			break;
		} //fim da sele��o
	}
		
		
	
	
 }

