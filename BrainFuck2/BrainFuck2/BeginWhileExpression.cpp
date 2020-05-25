#include"BeginWhileExpressionHeader.h"
#include"EndWhileExpressionHeader.h"


bool BeginWhileExpression:: isComposite() { return true; }

void BeginWhileExpression::execute() {
	while(arr[*j]){
		for (int k = 0; k < expressions.size(); k++) {
				expressions[k]->execute();		
		}
    }
}

Expression* BeginWhileExpression::getObject() { return this; }


BeginWhileExpression::BeginWhileExpression(string str, Rules rules ,int* i,int* j,char* arr) {
	this->arr = arr;
	this->i = i;
	this->j = j;
	int temp = *i;
	do {
		(*i)++;
		try {
			Expression* expr = rules.toObject(str[*i], j, arr, i, temp);
			expressions.push_back(expr);
		}
		catch(int){
			expressions.push_back(BeginWhileExpression(str, rules,i,j,arr).getObject());
		}

	} while (str[*i] != ']');
}