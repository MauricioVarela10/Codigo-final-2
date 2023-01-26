# include <stdio.h>
# include <string.h>
    
    int opcion;
    char nombre[200],sexo[50],sector[70],email[500],edad[3],id[10],telefono[10],opM[1],opM2[200];
    
    int main(){
    FILE *PPF=NULL;
    FILE *PPF2=NULL;
    FILE *PPF3=NULL;

    PPF= fopen("Mb.txt","r");
    PPF2= fopen("RD.txt","w");
    PPF3= fopen("Med.txt","r");
    char cara[200],cara2[900];
    for (int i = 0; i < 9; i++)
    {
    fgets(cara,200,PPF);
    printf("%s",cara);
    }

    scanf("%d",&opcion);
    

    if (opcion==1)
    {
        printf("Ingrese su nombre: \n");
        scanf("%s",&nombre);
        printf("Ingrese su edad: \n");
        scanf("%s",&edad);
        printf("Ingrese su numero de cedula: \n");
        scanf("%s",&id);
        printf("Ingrese su sexo: \n");
        scanf("%s",&sexo);
        printf("Ingrese su sector: \n");
        scanf("%s",&sector);
        printf("Ingrese su telefono/celular: \n");
        scanf("%s",&telefono);
        printf("Ingrese su correo electronico: \n");
        scanf("%s",&email);
        fprintf(PPF2,"Nombre: %s\n Edad: %s\n Id: %s\n Sexo: %s\n Sector: %s\n Telefono o Celular: %s\n Email: %s\n",nombre,edad,id,sexo,sector,telefono,email);
        printf("!!!La informacion fue registrada correctamente!!! \n");
        printf("\n");
        printf("\n");
        for (int j = 0; j < 22; j++)
            {
                fgets(cara2,900,PPF3);
                printf("%s",cara2);
            }
        printf("Ingrese el numero del medico que se adapte a sus nececidades \n");
        scanf("%s",&opM);
        fscanf(PPF3,"%s",&opM2);
        if (strcmp(opM,opM2)==0)
        {
            printf(PPF3,"%s",opM2);
        }
    }
    else
    {
        printf("Gracias por utilizar el servicio");
    }  
    fclose(PPF);
    fclose(PPF2);
    fclose(PPF3);
    }
    
