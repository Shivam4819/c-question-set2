/* 
 * File:   StringFunction.h
 * Author: shivam
 *
 * Created on 17 March, 2018, 11:49 PM
 */

#ifndef STRINGFUNCTION_H
#define	STRINGFUNCTION_H
#include <string>
using namespace std; 
class StringOperation{
    
private:
   string name;
    char a[10],b[10];
    int i,n;
public:
    void accept();
    void display();
    void remove_duplicate();
    void remove_space();
};


#endif	/* STRINGFUNCTION_H */

