#ifndef SECRETNUMBER_H
#define SECRETNUMBER_H

class SecretNumber{
    private:
     int value;
     int low;
     int high;
    public:
     SecretNumber(int low, int high);
     int check(int guess)const; 
};
#endif