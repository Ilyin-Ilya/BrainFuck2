#include"DotExpression.h"
bool DotExpression:: isComposite() {
	return false; 
}
void DotExpression::execute() {
	putchar(arr[*j]);
}
DotExpression::DotExpression(int* j, char* arrs) {
	this->arr = arrs;
	this->j = j;
}
