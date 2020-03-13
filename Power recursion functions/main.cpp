#include <iostream>
#include<math.h>
using namespace std;

// a to the power n by this equation --> power (a,n) = a*power(a,n-1)
template <class T>
T power1(int a,int n){
    if (n ==1 ){
        return a ;
    }
    else{
        return a * power1<T>(a,n-1);
    }
}

//a to the power n by using this equation --> power (a,n) = power(a,n/2)*power(a,n/2)
template <class T>

T power2(T a , T n){
    bool flag = false ;
    int product = 1 ;
    if (n%2 != 0){
        flag = true;
    }
    if (n == 1){
        return a ;
    }
    else{
        product*= (power2<T>(a,n/2) * power2<T>(a,n/2));
    }
    if (flag == true){
        return product*a;
    }
    else{
        return product;
    }
}

int main()
{
    return 0;
}
