#include<iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** args)
{
    string yyin,yyout,eeyore,tigger;
	for (int i = 1;i < argc;i++){
		if (args[i][0] == '-'){
			switch(args[i][1]){
				case 'S':
					break;
				case 'e':
					break;
				case 'o':
					i++;
					yyout = args[i];
					break;
				default:
					break;
			}		
		}
		else{
			yyin = args[i];
		}		
	}
    eeyore = "./eeyore -S ";
    eeyore.append(yyin);
    eeyore.append(" -o ");
    eeyore.append(yyout);
    eeyore.append("ee");
    tigger = "./tigger -S ";
    tigger.append(yyout);
    tigger.append("ee ");
    tigger.append(" -o ");
    tigger.append(yyout);
    system(eeyore.c_str());
    system(tigger.c_str());
	return 0;
}