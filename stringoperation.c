//*****************************************************************************
// Copyright(c) 2026 Trenser Technology solution(P) Ltd
// Allrights are reserved
//*****************************************************************************
//
// File     :   stringoperation.c
// Summary  :
// Note     :
// Author   :   Arunya
// Date     :   06-02-2026
//************************ Include Files **************************************
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "stringoperation.h"

//*************************Local types*****************************************

//*************************Local contants**************************************
#define MAX_SIZE 100

//*************************Local variables ************************************

//*************************Local functions ************************************
uint32_t StringOperationFindLength(char *pcData);

//*****************************************************************************
// Purpose  : To find string length
// Input    : pcData - Input buffer
// Output   : Length of the string
// Return   : Length will be return 
// Note     :   
//*****************************************************************************
uint32_t StringOperationFindLength(char *pcData)
{
    uint32_t ulStringLength = 0;
    uint32_t ulIndex = 0;

    if(pcData == NULL)
    {
        ulStringLength = 0;
        return ulStringLength;
    }
    else
    {
        for(ulIndex = 0; pcData[ulIndex] != '\0'; ulIndex++)
        {
            ulStringLength++;  
        }
    }
    return ulStringLength;
}
//*****************************************************************************
// Purpose  : find length and print the length
// Input    : none
// Output   : legth will be displayed
// Return   : 1 - on success 0 - on failure 
// Note     :   
//*****************************************************************************
bool StringOperationLength(void)
{
    char *pReadInputData = NULL;
    uint32_t ulStringLength = 0;
    bool blReturnStatus = true;

    pReadInputData = (char *)malloc(MAX_SIZE * sizeof(char));
    if(pReadInputData == NULL)
    {
        printf("memory allocation failed");
        blReturnStatus = false;
        return blReturnStatus;
    }

    printf("Enter a string to find Length\n");
    scanf(" %s", pReadInputData);

    ulStringLength = StringOperationFindLength(pReadInputData);

    printf("Length of %s : %d\n", pReadInputData, ulStringLength);
}
