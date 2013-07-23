//
//  my.h
//  C_Test
//
//  Created by Simone Giacometti on 16/07/13.
//  Copyright (c) 2013 Simone Giacometti. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#ifndef C_Test_my_h
#define C_Test_my_h

float my_pow(float base,int esponente);
int my_factorial(int n);
int my_strlen(char *s);
int my_isnumeric(char *s);

char* my_substr(char *s,int start,int length);

int choose_opt(char opt);

#endif
