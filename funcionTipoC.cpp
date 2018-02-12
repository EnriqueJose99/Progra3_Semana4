#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//prototipo fc print
void print(char*);


int main(){
	char str[] = "Hola Mundo";
	int enteros [] = {1,2,3,4,5,6,7,8,9,10};
	string meses[] = {"Enero", "Febrero", "Marzo"};
	print(str);
	cout<<endl;
	return 0;
}

void print(char* c){
	if(*c){//anteponer un * estamos desreferenciando pero solo a apuntadores 
		//putchar(*c);
		print(c+1);//imprime alreves
		putchar(*c);
	}
}
