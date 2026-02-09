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
#include <stdlib.h>
#include "stringoperation.h"

//*************************Local types*****************************************

//*************************Local contants**************************************

//*************************Local variables ************************************

//*************************Local functions ************************************
int32_t StringOperationCompare(char *pcInputData1, char *pcInputData2);

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

    free(pReadInputData);
    pReadInputData = NULL;
}

//*****************************************************************************
// Purpose  : compare two string
// Input    : pcInputData1 - store first string 
//            pcInputData2 - store second string
// Output   : none
// Return   : 0- string same , >=1 string 1 is greater ,< 0 string2 greater
// Note     :   
//*****************************************************************************
int32_t StringOperationCompare(char *pcInputData1, char *pcInputData2)
{
   uint32_t ulIndex = 0;
   uint32_t ulLengthOfFirstInput = 0;
   uint32_t ulLengthOfSecondInput = 0;
   uint8_t ucCompareFlag =0;

   if( pcInputData1 == NULL ||  pcInputData2 == NULL)
   {
        return -1;
   }
   
   ulLengthOfFirstInput = StringOperationFindLength(pcInputData1);
   ulLengthOfSecondInput = StringOperationFindLength(pcInputData2);

   if(ulLengthOfFirstInput != ulLengthOfSecondInput)
   {
      return 1;
   }
   else
   {
      for(ulIndex = 0; ulIndex < ulLengthOfFirstInput; ulIndex++)
      {
            if(pcInputData1[ulIndex] == pcInputData2[ulIndex])
            {

            }
            else
            {
                ucCompareFlag ++;
            }
      }
   }
   return ucCompareFlag;
}
//*****************************************************************************
// Purpose  : read two string from user and print the strings are equal or not
// Input    : pcInputData1 - store first string 
//            pcInputData2 - store second string
// Output   : none
// Return   : it will print equal or not
// Note     :   
//****************************************************************************
void StringOperationCheckEqual(void)
{
    char *pcInputData1 = NULL;
    char *pcInputData2 = NULL;

    pcInputData1 = (char *) malloc(MAX_SIZE * sizeof(char));
    if(pcInputData1 == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    pcInputData2 =  (char *) malloc(MAX_SIZE * sizeof(char));
    if(pcInputData2 == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    printf("enter first string \n");
    scanf(" %s", pcInputData1);

    printf("enter second  string \n");
    scanf(" %s", pcInputData2);

    if(StringOperationCompare(pcInputData1, pcInputData2) == 0)
    {
        printf("strings are equal\n");
        return;
    }
    else
    {
        printf("string are not equal\n");
        return;
    }

}