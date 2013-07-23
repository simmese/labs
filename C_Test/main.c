//
//  main.c
//  C_Test
//
//  Created by Simone Giacometti on 16/07/13.
//  Copyright (c) 2013 Simone Giacometti. All rights reserved.
//

#include "my.h"

int main(int argc, char * const argv[])
{
    int single_case;
    while ((single_case = getopt(argc, argv, "abc:")) != -1) {
        switch (single_case) {
            case 'a':
                f_str();
                break;
            case 'b':
                
                break;
            case 'c':
                
                break;
            default:
                break;
        }
    }
    
    /*printf("Inserisci la base\n");
    
    float base = 0;
    scanf("%f",&base);
    
    printf("Inserisci l'esponente\n");
    
    int esponente = 0;
    scanf("%d",&esponente);
    
    printf("Il risultato della potenza è %.8f\n",my_pow(base, esponente));
    
    printf("\nInserisci il numero di cui vorresti calcolare il fattoriale.\n");
    
    int n = 0;
    scanf("%d",&n);
    
    printf("%d\n",my_factorial(n));
    */
    printf("\nDigita una stringa seguita da INVIO\n");
    
    char string[1024];
    
    fgets(string, sizeof(string), stdin);
    
    printf("Stringa di %d caratteri\n", my_strlen(string));
    
    return EXIT_SUCCESS;
}

