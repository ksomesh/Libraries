#include<sstream>
#include"bigData.h"
using namespace std;

void BigData::add(){
	int firstInt = 0;
	int secondInt = 0;
	int remInt = 0;
	int resInt = 0;
	int temp = 0;
	string res = "\0";
	string::reverse_iterator frit = firstOperand.rbegin();
	string::reverse_iterator srit = secondOperand.rbegin();
	while (frit != firstOperand.rend() || srit != secondOperand.rend()){
		if(frit == firstOperand.rend()){
			firstInt = 0;
		} else {
			firstInt = *frit;
			firstInt = firstInt -48;
			frit++;
		}
		if(srit == secondOperand.rend()){
			secondInt = 0;
		} else {
			secondInt = *srit;
			secondInt = secondInt - 48;
			srit++;
		}
		resInt = firstInt + secondInt + remInt;
		remInt = 0; 
		if (resInt >= 10){
			temp = resInt;
			resInt = resInt % 10;
			remInt = temp/10;	
		}
		std::stringstream ss;
		ss << resInt;
		std::string str = ss.str();
		res.insert(0,str);
	}
	setResult(res);
}
void BigData::subtract(){
	int firstInt = 0;
	int secondInt = 0;
	int resInt = 0;
	int remInt = 0;

}
void BigData::multiply(){
}
void BigData::devide(){
}
int main(){
	BigData obj;
	obj.setFirstOperand("19999999999999999999");
	obj.setSecondOperand("22999999999999999999");
	obj.add();
	cout << obj.getResult();
} 
