/* 
 * File:   main.cpp
 * Author: shivam
 *
 * Created on 17 March, 2018, 8:05 PM
 */
#include <iostream>
#include "../ques_set2/StringFunction.h"


using namespace std;
int main() {
    char a[]="sh iv am";
    StringOperation s;
    s.accept();
    s.display();
    s.remove_duplicate();
    s.remove_space();
    
    return 0;
}

