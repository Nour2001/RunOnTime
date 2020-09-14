#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

   void product(){
       
     int arr_1[10000];
     int arr_2[10000];
      
    for (int i=0; i<10000; i++){
          arr_1[i]= 100 + i;
          arr_2[i]= 10099 - i;
       
        int product = arr_1[i]*arr_2[i];
       
        cout<< "The result of the "<< i <<" index of array multiplication is: "<< product << endl;
    }
    
}

int main() {
    
    const clock_t begin_time = clock();
 
    product();
 
    std::cout << "Time elapsed: "<< float( clock () - begin_time ) /  CLOCKS_PER_SEC << "s" << endl;
   
    return 0;
}
