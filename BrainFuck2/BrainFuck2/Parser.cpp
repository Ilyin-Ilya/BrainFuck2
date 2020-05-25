#include"ParserHeader.h"
#include"BeginWhileExpressionHeader.h"
queue<Expression*> Parser::getListOfExpressions() { 
	return listOfExpressions;
}

void Parser::parseString(string s,int* i,int* j, char* arr) {
	while(*i<s.size()){
		try {
			Expression* expr = rules.toObject(s[*i], j, arr, i, 0);
			(*i)++;
			listOfExpressions.push(expr);
		}
		catch (int) {
				listOfExpressions.push(new BeginWhileExpression(s, rules, i, j, arr));
				(*i)++;
				continue;
		}
    }
}


Parser::Parser(Rules rules) { this->rules = rules; }