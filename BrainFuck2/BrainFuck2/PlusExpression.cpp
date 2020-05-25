#include"PlusExpressionHeader.h"
bool PlusExpression::isComposite() { return false; };
void PlusExpression::execute()  {
	arr[*j]++; }
PlusExpression::PlusExpression(int* j, char* arr) {
	this->j = j;
	this->arr = arr;
}
