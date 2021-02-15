#include <stdio.h>

int lista(char *nombre, int *edad, int *cuenta, int *calif);
int prom();
int edadprom(int *calf, int *edad);
char nombre[3][20];
int calif[3];
int edad[3];
int cuenta[3];
int i = 0;
int n = 0;

int main(){    
    printf("-----Lista de Calificaciones de Alumnos----- \n");
    printf("Cuantos alumnos va a registrar: \n");
    scanf("%i", &n);
    fflush(stdin);
    
    for(i = 1; i <= n; i++){
        printf("Ingresa el nombre del alumno: \n");
        scanf("%s", &nombre[i]);
        printf("Ingresa su edad : \n");
        scanf("%i", &edad[i]);
        fflush(stdin);
        printf("Ingresa su No. de cuenta: \n");
        scanf("%i", &cuenta[i]);
        fflush (stdin);
        printf("ingresa su calificacion solo numeros enteros: \n");
        scanf("%i", &calif[i]);
        fflush(stdin);
    }
    
    printf("Nombre -- Edad -- No. de Cuenta -- calif\n\n");
    
    for( i = 1; i <= n; i++){
        lista((char*) nombre[i], (int*) edad[i], (int*) cuenta[i], (int*) calif[i] );
    }
    
    prom((int*) calif);
    edadprom((int*) calif, (int*) edad);
    return 0;
}

int lista(char *nombre , int *edad , int *cuenta , int *calif ){
    printf("%s  --  %i -- %i --  %i \n",nombre, edad, cuenta, calif);
    return 0;
}

int prom(int *calif){
    int a = 1;
    int y = 0;
    float prom = 0;
    
    for( a = 1; a <= n; a++){
        prom += calif[a];
        y++;
    }
    
    prom = prom / y;
    printf("el promedio es del grupo es: %.1f \n",prom);
}

int edadprom(int *calif, int *edad){
    float eprom = 0;
    int a = 1;
    int x = 0;
    
    for(a =1; a <= n; a++){
        if(calif[a] >= 6){
            eprom += edad[a];
            x++;
        }
    }
    
    eprom = eprom / x;
    printf("el promedio de edad de los aprobados es: %.1f", eprom);
}