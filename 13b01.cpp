//
//  13b01.cpp
//  ppp.cpp
//
//  Created by 孙起 on 2019/3/23.
//  Copyright © 2019 孙起. All rights reserved.
//

#include <iostream>
using namespace std;
#define x 365;
int main()
{
    int e[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a=8112,b,c=0,i;
    b =a/x;
    a = a%x;
    if(b%4==3)
        a -= (b/4+1);
    else
        a -= b/4;
    cout << b<< endl;
    b += 1777;
    cout<<a<<endl;
    
    for(i=4;i++;)
    {
        if(a/e[i%12]==0)
        {
            c++;
            break;
        }
        else{
            if(i%12==1)
                a -= 29;
            else
            {
            a = a-e[i%12];
            c++;
            }
        }
    }
    c = (c+4)%13;
    cout << b <<endl<<c<<endl<<a<<endl;
    return 0;
    
}



