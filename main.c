#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
        printf("1. Gest�o de TI\n");
        printf("2. An�lise d Desenvolvimento de Sistemas\n");
        printf("3. Seguran�a da Informa��o\n");
        printf("4. M�dia do aluno\n");
        printf("5. Diferen�a maior ou menor\n\n");
        printf("6. M�dia aluno ADS\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                calculoMedia();
                break;

            case 5:
                diferencaMaiorMenor();
                break;

            case 6:
                alunoAds();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma op��o v�lida\n");
        }
    } while(continuar);
}
void gestaoTI()
{
    float voltar;
    printf("Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n\n Digite 0 para retornar ao menu: ");
    scanf("%f", &voltar);
    if (voltar != 0)
           {
               printf("\t\nDigito inv�lido");
               sleep(1);
               system("cls || clear");
               return gestaoTI();
           }
               system("cls || clear");
}
void analiseDesenvolvimentoSistemas()
{
    float voltar;
    printf("O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n\n Digite 0 para retornar ao menu: ");
    scanf("%f", &voltar);
    if (voltar != 0)
           {
               printf("\t\nDigito inv�lido");
               sleep(1);
               system("cls || clear");
               return analiseDesenvolvimentoSistemas();
           }
               system("cls || clear");
}
void segurancaInformacao()
{
    float voltar;
    system("cls || clear");
    printf("Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n\n Digite 0 para retornar ao menu: ");
    scanf("%f", &voltar);
    if (voltar != 0)
           {
               printf("\t\nDigito inv�lido");
               sleep(1);
               system("cls || clear");
               return segurancaInformacao();
           }
               system("cls || clear");
}
void calculoMedia()
{
    // Declaracao de variaveis
    float nota1, nota2, nota3, nota4, exame, mediaAnual, mediaFinal;

    // Entrada
    printf("\tCalculo de m�dia do aluno\n");
    // Nota 1
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    if (nota1 >10 || nota1 <0)
    {
        printf("\nNota inv�lida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Nota 2
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    if (nota2 >10 || nota2 <0)
    {
        printf("\nNota inv�lida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Nota 3
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    if (nota3 >10 || nota3 <0)
    {
        printf("\nNota inv�lida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Nota 4
    printf("\nDigite a nota 4: ");
    scanf("%f", &nota4);
    if (nota4 >10 || nota4 <0)
    {
        printf("\nNota inv�lida");
        sleep(2);
        system("cls || clear");
        return calculoMedia();
    }
    // Processamento
    mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4;

    // Saida
    if (mediaAnual >= 7)
    {
        printf("\nAPROVADO!!\n\n");
        sleep(3);
        system("cls || clear");
    }
    else
    {
        printf("\nReprovado, aluno dever� realizar exame. Insira nota do exame: ");
        scanf("%f", &exame);
        if (exame>10 || exame<0)
        {
            printf("\nNOTA INV�LIDA!");
            sleep(2);
            system("cls || clear");
            return calculoMedia();
        }

        mediaFinal = (mediaAnual + exame) / 2;

        if(mediaFinal>=7)
        {
            printf("\nAPROVADO!!\n\n");
            sleep(3);
            system("cls || clear");
        }
        else
        {
            printf("\nREPROVADO!!\n\n");
            sleep(3);
            system("cls || clear");
        }
    }
    return 0;
}
void diferencaMaiorMenor()
{
 // declara��o de variaveis
  	int n1;
  	int n2;
  	int result;

  	// entrada
  	printf("Digite o valor do primeiro numero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo numero : ");
	scanf("%d", &n2);

  	// processamento
  	if (n1 > n2)
  	{
  		result = n1 - n2;
    }
  	else
  	{
	    result = n2 - n1;
  	}

  	// saida
  	printf("O Resultado da diferen�a do maior numero pelo menor � : %d", result);
  	sleep(3);
    system("cls || clear");
  	return 0;
}
void alunoAds()
{
  float np1, np2, pim, mediaAds, faltas;

    printf("Nota 1: ");
    scanf("%f", &np1);

    printf("Nota 2: ");
    scanf("%f", &np2);

    printf("Nota PIM: ");
    scanf("%f", &pim);

    printf("N�mero de faltas: ");
    scanf("%f", &faltas);

    mediaAds = (np1 * 0.4) + (np2 * 0.4) + (pim * 0.2);
    faltas = (faltas * 100) / 50;

    if ((mediaAds >= 5) && (faltas < 25))
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }
    return 0;
}
void sair()
{
    printf("Obrigado por visitar nossa lista de cursos!\n");
    sleep(4);
}
