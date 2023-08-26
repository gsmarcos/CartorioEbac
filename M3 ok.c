#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocaçõa de espaço em memória 
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca responsável por cuidar dos strings


int registro ()
{
	//iniciando criação de variável/string
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome [40];
		char cargo [40];
		//final da criação de variável/string
		
		printf("Digite o CPF a ser cadastrado: "); // coletando informações do usuário
		scanf ("%s", cpf); //%s refere-se a string
		
		strcpy(arquivo, cpf); //responsável por copiar os valores de string
	
	    FILE *file; //criar o arquivo
	    file = fopen(arquivo, "w"); // salvo o valor da variável 
	    fprintf(file, cpf); //fecha o arquivo 
	    fclose(file);
	    
	    file = fopen (arquivo, "a");
	    fprintf(file, ",");
	    fclose(file);
	    
	    
		
		printf("Digite o nome a ser cadastrado: "); //coletnado informações do usuário
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
		printf("Não foi possível abrir o arquivo, não localizado! \n");
    }  
    
    while(fgets(conteudo, 200, file) != NULL)
	{
    	printf("\n Essas são as informações do usuário");
    	printf("%s", conteudo);
    	printf("\n\n");	
	}

    system ("pause");



}

int deletar ()
{
	
     char cpf [40];
     
     printf ("Digite o usuário a ser deletado");
     scanf("%s", cpf);
	 
	 remove (cpf);
	 
	 FILE *file;
	 file = fopen(cpf, "r");
	 
	 if(file == NULL)
	 {
	 	printf ("O usuário não se encontra no sistema.\n");
	 	system ("pause");
	 }
}




int main()
{

		int opcao=0; //Definindo as variavíes
		int laco=1;
		
		for(laco=1;laco=1;)
	{
		system("cls");
	
		
		setlocale(LC_ALL, "Portuguese"); 
		
	    	printf("### Cartório da EBAC ###\n\n"); //iníncio do menu
		    printf("Escolha a opção desejada do menu\n\n");
		    printf("\t1 - Registrar nomes\n");
		    printf("\t2 - Consultar Nomes\n");
		    printf("\t3 - Deletar Nomes\n"); 
		    printf("\t4 - Sair do Sistema"   );
		
		    scanf("%d", &opcao);	
		
		    system("cls"); //responsálve por limpar a tela
		    
		    switch(opcao) //inicio da seleção dos menus		
		
		{case 1:
		    registro (); //chamada de funções
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
				printf("Essa opção não está disponíve\nl");
			system("pause");
			break;
		} //fim da seleção
	}
		
		
	
	
 }

