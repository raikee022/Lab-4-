#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int name [5] = {1,2,3,4,5};
	int * ptr = name;
	
	for(int i=0;i<5;i++){
		cout<< *ptr;
		ptr++;
		
	}
	return 0;
}
