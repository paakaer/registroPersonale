//
// Created by paakaer on 03/11/2021.
//

#include "../header/fileIO.h"

void importData(const char *binaryFile, const char *CSVFile){
    FILE *binaryFileHandler, FILE *CSVFileHandler;
    binaryFileHandler = fopen(binaryFile, "rb");
    if(binaryFileHandler == NULL)
        puts(ERRORE, APERTURA FILE);
    else {
        CSVFileHandler = fopen(CSVFile, "w");
    }
}
