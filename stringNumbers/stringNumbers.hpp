#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class BigData {
private :
	string firstOperand;
	string secondOperand;
	string result;
	string operation;
	string quotient;
	string remainder;
public :
	BigData() : firstOperand("\0"),secondOperand("\0"),result("\0"),operation("\0"),quotient("\0"),remainder("\0"){
	}
	void setFirstOperand(string s){
		firstOperand = s;
	}
        void setSecondOperand(string s){
                secondOperand = s;
        }
        void setOperation(string s){
                operation = s;
        }
        void setResult(string s){
                result = s;
        }
        void setquotient(string s){
                quotient = s;
        }
        void setremainder(string s){
                remainder = s;
        }
	string getFirstOperand(){
		return firstOperand;
	}
        string getSecondOperand(){
                return secondOperand;
        }
        string getOperation(){
                return operation;
        }
        string getResult(){
                return result;
        }
        string getQuotient(){
                return quotient;
        }
        string getRemainder(){
                return remainder;
        }
	void add();
	void subtract();
	void multiply();
	void devide();
};



		
