//*****************************************************************************
// Copyright(c) 2026 Trenser Technology solution(P) Ltd
// Allrights are reserved
//*****************************************************************************
//
// File     :   palidromecheck.c
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
#include "palidromecheck.h"

//*************************Local types*****************************************

//*************************Local contants**************************************
#define DIVISION_FACTOR 2

//*************************Local variables ************************************

//*************************Local functions ************************************

//*****************************************************************************
// Purpose  : To find string is palidrome or not
// Input    : pcData - Input buffer
// Output   : if will print string palimdrome or not
// Return   : none 
// Note     :   
//*****************************************************************************
void PalidromeCheckUsingString(void)
{
    char *cInputString = NULL;
    uint8_t ucFailSet = 0;
    uint32_t ulLength = 0;
    uint32_t uliPos = 0;
    uint32_t uljPos = 0;
    uint32_t ulCheckedLen = 0;

    cInputString = (char *)malloc(MAX_SIZE * sizeof(char));
    if(cInputString == NULL)
    {
        printf("memory allocation failed");
         return ;
    }

    printf("Enter a string to to check palidrome or not\n");
    scanf(" %s", cInputString);

    ulLength = StringOperationFindLength(cInputString);
    ulCheckedLen = ulLength / DIVISION_FACTOR;

    uliPos = 0 ;
    uljPos = ulLength - 1;

    for(; uliPos < ulCheckedLen; uliPos++, uljPos--)
    {
        if( cInputString[uliPos] != cInputString[uljPos])
        {
            ucFailSet = 1;
        }
    }
    if(ucFailSet == 0 )
    {
        printf("Given string is palidrome\n");
    }
    else
    {
        printf("Given string is not a palidrome");
    }

}