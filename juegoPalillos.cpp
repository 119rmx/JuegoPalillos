
#include <stdio.h>
#include <stdlib.h>

int resta(int x,int respuesta){
 
            x = x-respuesta;
            /* 
            if (respuesta == 1) {
               x = x - 1;
            } else if (respuesta == 2) {
               x = x - 2;
            } else if (respuesta == 3) {
               x = x - 3;
            }*/
             
             printf("\nQuedan %d palillos\n",x);
              
             for (int i=1;i<=x;i++){
                   printf("|");
             } 
             printf("\n");
                
             return x;      
   }
   
int main(){
    
   char primerJugador[100], segundoJugador[100];
   int i, respuesta, turno;
    
   printf("[DESCRIPCION DEL JUEGO]\n\n");
   
   // GUARDA EL NOMBRE DE LOS JUGADORES
    printf("Como se va a llamar el primer jugador?: ");
    gets(primerJugador);
    fflush(stdin);
    
    printf("Como se va a llamar el segundo jugador?: ");
    gets(segundoJugador);
    fflush(stdin);
    
    // INICIA EL JUEGO
    printf("\nCOMENCEMOS EL JUEGO \n\n");
    
    turno = 1;  
     
// el bucle resta dentro
for(i=15;i>0;){
             
            // MARCA TURNOS
            if(turno == 1){
               printf("\n\tes el turno de %s\n\n",primerJugador);
            }else if (turno == 2){
               printf("\n\tes el turno de %s\n\n",segundoJugador);}
            
            // PIDE LA CANTIDAD DE PALILLOS QUE DESEA RESTAR EL USUARIO
            do{
                   printf("elige cuantos palillos quieres restar 1,2 o 3: ");
                   scanf("%d",&respuesta);
                   fflush(stdin);
                   if(respuesta<1 || respuesta>3){printf("DEBE SER 1,2 o 3\n");}    
                
            }while(respuesta<1 || respuesta>3);
             
                             
            
            i = resta(i,respuesta);                           
         
          // HAY UN VENCEDOR
            if(i==1){
                 printf("\nEnhorabuena, has ganado\n");
                 break;
             }
          // CAMBIA TURNOS
            if (turno == 1) {
               turno = 2;
            } else if (turno == 2) {
               turno = 1;
            }

           // FIN DEL JUEGO
             if(i<=0){
                     printf("\ngame over\n");
                     }         
      }
     // FIN DEL PROGRAMA        
     system("pause");
     
     }
