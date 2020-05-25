#pragma once
#include"Expression.h"
#include"DotExpression.h"
#include"Libs.h"
#include"PlusExpressionHeader.h"
#include"MinusExpressionHeader.h"
#include"BiggerExpressionHeader.h"
#include"SmallerExpressionHeader.h"
#include"EndWhileExpressionHeader.h"

class Rules {  //class that sets convertation rules - how to convert a char symbol to Expression object
public:
	Rules(); 
	Expression* toObject(char symbol,int* j,char* arr,int* i, int pos);//converts a char to an Expression (brainfuck command object). 
	//Except [ command. In this case it throws -1
};