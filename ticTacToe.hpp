#include <iostream>

class ttt {
    private:
	char m[3][3] ;

    public:
	ttt() {
            for(int i = 0; i < 3 ; i++) {
	        for (int j =0; j < 3; j++) {
	            m [i][j] = '-';
	        }
            }

	}
	void printMatrix();
	bool validateWin();
	bool validateInput(int i, int j, char h);
};


