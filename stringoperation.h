//*****************************************************************************
// Copyright(c) 2026 Trenser Technology solution(P) Ltd
// Allrights are reserved
//*****************************************************************************
// Summary  : perform basic string functions
// Note     : 
//*****************************************************************************

#ifndef STRING_OPERATION_H
#define STRING_OPERATION_H
//**********************Include File*******************************************
#include <stdbool.h>
#include <stdint.h>

//**********************Global types*******************************************

//**********************Global constants **************************************
#define MAX_SIZE 100

//**********************Global variable ***************************************

//***********************Forward declartion ***********************************
bool StringOperationLength(void);
uint32_t StringOperationFindLength(char *pcData);
void StringOperationCheckEqual(void);

//***********************Inline function implementation ***********************

#endif
//EOF
