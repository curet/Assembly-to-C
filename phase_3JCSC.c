// author:  Jose C. S. Curet | Analyzing phase_5 binary bomb | Architecture class CCOM-4086
// Purpose: This program simulate the thinking process of the phase5 in the Binary Bomb
//          Does not follows all the exact procedures as the phase, but does have the same purporse and the the goal.
//                                                                              [explode the bomb on the noobs faces]

#include <stdio.h>
                                                                    // 0x70  --> 112 dec
int phase5(int firstValue, int secondValue){                        // 0x141 --> 321 dec
                                                                    // 0x3ad --> 941 dec
    int explode_bomb =-1;                                           // 0xd4  --> 212 dec                      
    int match[] = {0x70, 0x141, 0x3ad, 0xd4, 0x27b, 0x3bc};         // 0x27b --> 635 dec
    if(firstValue >7 || firstValue <0) return explode_bomb;         // 0x3bc --> 956 dec

    // ***********************************************************************************************************************************
    //     ESTA PARTE ES LA EXPLICACION ES PSEUDOCODIGO DE UNA FORMA DE COMO CORRERIA LA PASE 5 DESDE <+57> HASTA <+99>
    //
    //  En la parte de arriba utilice un arreglo para representar lo que ocurre en la fase 3 del examen.
    //  A continuacion voy a escribir un pseudocodigo de la misma estructura, pero mas cercana a como fue presentada en el codigo assembly.
    //
    //  Luego del programa verifiacar de que haya entrado por lo menos dos enteros y que el primer numero sea de 0 a 7:
    //  El siguiente seria la forma correcta en que el codigo seria representado en C.
    //
    //  if (eax == 0x70) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //  if (eax == 0x141) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //  if (eax == 0x3ad) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //  if (eax == 0xd4) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //  if (eax == 0x27b) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //  if (eax == 0x3bc) goto 0x400fcd (salir exitosamente) else goto 0x400fc8 (explode_bomb)
    //
    // ***********************************************************************************************************************************
    
    if(secondValue != match[firstValue]) return explode_bomb; // Aqui estoy corroborando que el segundo valor corresponda
    else return 1;                                            // al primer valor entrado.
}

int main(){
    int a, b;

    printf("Congratulations!! You have completed the fourth phase...\n\nWhat about now?\n");
    scanf("%d %d", &a, &b);

    if(phase5(a,b) == -1) printf("BOOM!!! \n\nYour student has been notified!");
    else printf("Wow! you have just defused the phase! \n...wait, I have more for you BUAHAHA!!!");
}