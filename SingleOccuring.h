/* 
 * File:   SingleOccuring.h
 * Author: shivam
 *
 * Created on 20 March, 2018, 8:01 PM
 */

#ifndef SINGLEOCCURING_H
#define	SINGLEOCCURING_H

class Maxoccurance{
    private:
        struct hash{
            char key;
            int val;
        };
        //string name;
        char a[5];
        hash h[5];
        int i,n,j;
public:
    void acceptdata();
    void displaydata();
    void singleoccurance();
};


#endif	/* SINGLEOCCURING_H */

