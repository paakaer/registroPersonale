//
// Created by paakaer on 03/11/2021.
//

#ifndef REGISTROPERSONALE_MAIN_H
#define REGISTROPERSONALE_MAIN_H

#include <stdio.h>

#define LEN 30
#define s_LEN 8
#define NUMBER_OF_MARKS 15

typedef struct{
    char subject[LEN];
    marks valutation[NUMBER_OF_MARKS];
    //char teacher[s_LEN];

}register;

typedef struct marks{
    char written[s_LEN];
    char oral[s_LEN];
    char pratical[s_LEN];
};

#endif //REGISTROPERSONALE_MAIN_H
