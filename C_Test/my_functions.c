//
//  my_functions.c
//  C_Test
//
//  Created by Simone Giacometti on 16/07/13.
//  Copyright (c) 2013 Simone Giacometti. All rights reserved.
//

#include "my.h"

float my_pow(float base,int esponente){
    float ret = base;
    int i;

    for(i=1;i<esponente;i++){
        ret = ret * base;
    }
    
    return ret;
}

int my_factorial(int n){
    return (n==0 || n==1) ? n : n*my_factorial(n-1);
}

int my_strlen(char *s){
    int len = 0;
    while(*s){
        len++;
        s++;
    }
    
    return len-1;
}

char* my_substr(char *s,int start,int length){
    char *c = "";
    
    int i = 0;
    int end = start + length;
    
    if(end > my_strlen(s)){
        end = my_strlen(s);
    }
    
    while(*s){
        if(i >= start && i < end){
            
        }
        
        s++;
    }
    
    return c;
}

int my_isnumeric(char *s){
    while(*s){
        if(!isdigit(*s)) return 0;
        s++;
    }
    
    return 1;
}


