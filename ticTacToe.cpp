#include"ticTacToe.hpp"
#include<stdlib.h>

void ttt::printMatrix() {
    for(int i = 0; i < 3 ; i++) {
	for (int j =0; j < 3; j++) {
	   std::cout << m [i][j] << "  ";
	}
	std::cout << "\n";
    }
}

bool ttt::validateInput(int i , int j, char h) {
	if(m[i][j] == '-') {
	    m[i][j] = h;
	    return true;
	}
	return false;
}
bool  ttt::validateWin(){
    for(int i = 0; i < 3; i++ ) {
	if ((m[i][0] != '-') && (m[i][0] == m[i][1]) && (m[i][1] == m[i][2])){
	    return true;
	}
	if ((m[0][i] != '-') && (m[0][i] == m[1][i]) && (m[1][i] == m[2][i])){
            return true;
        } 
    }
    if ((m[0][0] != '-') && (m[0][0] == m[1][1]) && (m[1][1] == m[2][2])){
        return true;
    }
    if ((m[0][2] != '-') && (m[0][2] == m[1][1]) && (m[1][1] == m[2][0])){
        return true;
    }
    return false;
}
  
int main() {

    ttt t;
    int i, j;
    int p = 1;
    char h= '0';
    int count = 0;
    while (1) {
	system("clear");
	t.printMatrix();
	std::cout << "Player " << p << "turn, enter i , j:" ;
	std::cin >> i >> j;
        std::cout << "\n";
	if(t.validateInput(i,j,h)) {
	    count++;
	} else {
//	    std::cout << "wrong input , re enter \n";
	    continue;
	}
	system("clear");
	t.printMatrix();
	if(t.validateWin()) {
	    std::cout << "Player" << p <<"WON \n";
	    return 0;
	} else {
	    p = (p+1)%2;
	    h = (h == '0')? 'x':'0';
 	}
	if (count == 9)
	    break;
    }    
    std::cout <<" MATCH DRAW\n:";
}



    
