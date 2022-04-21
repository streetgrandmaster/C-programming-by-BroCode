#include <stdio.h>


double square(double my_num) // 
{
    // double result = my_num * my_num;
    // return result;

    return my_num * my_num;
}

int main(){

    // return statements 🔙
    //      Returns a value back to a calling function.
    
    double my_num = square(20);
    printf("%lf\n", my_num);

    return 0;
}
