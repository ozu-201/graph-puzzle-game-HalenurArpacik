//
// Created by ha028653 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    fstream f;
    f.open("",ios::in);
    string line;
    if(f.is_open()){
        while(getline(f,line)){



            cout << line<< endl;
        }
    }else{
        cout << "file cannot opened" << endl;
    }



    return  0;
}
