#include <iostream>
#include "DihotTable.h"
#include <string>
#include <fstream>



using namespace std;


int main(){

        LexicalUnit lu[4];

        DihotTable D;
       
        lu[0] = LexicalUnit("i", "int", lu[0].setDescriptor(), 0);
        lu[1] = LexicalUnit("delta", "float", lu[1].setDescriptor(), lu[0].setAddress("int"));
        lu[2] = LexicalUnit("varch", "char", lu[2].setDescriptor(), lu[2].setAddress("float"));
        lu[3] = LexicalUnit("alpha", "double", lu[3].setDescriptor(), lu[3].setAddress("char"));
        
        D.AddLexUnit(lu[0]);
        D.AddLexUnit(lu[1]);
        D.AddLexUnit(lu[2]);
        D.AddLexUnit(lu[3]);
        D.Sort();
        D.Delete("delta");
        
        D.PrintTable();

        

        

       
       
        

        return 0;
}


