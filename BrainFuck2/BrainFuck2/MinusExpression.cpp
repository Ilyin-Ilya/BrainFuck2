#include"MinusExpressionHeader.h"
bool MinusExpression :: isComposite() { return false; };
void MinusExpression ::  execute() { arr[*j]--; }
MinusExpression::MinusExpression(int* j, char* arr) {
	this->j = j;
	this->arr = arr;
}