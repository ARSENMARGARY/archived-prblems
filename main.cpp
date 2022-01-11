#include <iostream>
#include <cmath>
using namespace std;

// int ex1()
// {
//     int sum {};
//     for(int i = 1; i < 1000; ++i)
//     {
//         if((i % 3 == 0) || (i % 5 == 0) )
//         {
//             sum+= i;
//         }
//     }
//     return sum;
// }


// int fib(int n)
// {
//     if(n <= 1)
//     {
//         return 1;
//     }

//     return fib(n-1) + fib(n-2);
// }

// size_t ex2()
// {
//     size_t sum {};
//     for(int i{}; i < 33; ++i)
//     {
//         if(fib(i) % 2 == 0)
//         {
//             sum+= fib(i);
//         }
//     }
//     return sum;
// }


// void ex3(size_t n ) {

//    for (int i = 3; i <= sqrt(n); i = i+2){
//       while (n%i == 0){
//          cout<<i<<"\t";
//          n = n/i;
//       }
//    }
//    if (n > 2)
//    cout<<n<<"\t";
// }


// int larrgestPalindrome(int n)
// {
//     int upper_limit = pow(10,n) - 1;
//     int lower_limit = 1 + upper_limit / 10;

//     int max_product = 0; 
//     for (int i = upper_limit; i >= lower_limit; --i)
//     {
//         for (int j = i; j >= lower_limit; --j)
//         {
//             int product = i * j;
//             if (product < max_product)
//             {
//                 break;
//             }
//             int number = product;
//             int reverse = 0;

         
//             while (number != 0)
//             {
//                 reverse = reverse * 10 + number % 10;
//                 number /= 10;
//             }

//             if (product == reverse && product > max_product)
//             {
//                 max_product = product;
//             }
//         }
//     }
//     return max_product;
// }

// size_t ex6(int num)
// {
//     size_t num1 = 0;
//     size_t num2 = 1;
//     size_t sum {};
//     for(int i = num1; i < num + 1; ++i)
//     {
//         num1 += pow(i,2);
//         sum+= i;
//     }

//     num2 = sum*sum;
//     cout << "num1  " << num1 << endl;
//     cout << "num2  " << num2 << endl;
//     cout << "a  " << sum << endl;
//     return num2 - num1;
    
// }

bool is_prime(size_t num)
{
    size_t m = num/2;
    int flag = 0;
    for(int i = 2; i < m; ++i)
    {
        if(num % 2 == 0)
        {
            return false;
        }else{
           return true;
        }
    }
}

// size_t ex7(size_t limit)
// {
//     size_t index = 0;
//     size_t i = 3;
    
   
//   while (index < limit) {

// 		if (is_prime(i)) {
// 			++index;
// 			if (index==10001) {
// 				return i;
// 			}
// 		}
// 		i += 2;
// 	}
// }

// void ex8(string arr)
// {
//     size_t len = sizeof(arr) - 1;
//     size_t i{};
//     size_t j{};
//     size_t max_val {};

//     for(i ; i < len-13; ++i)
//     {
//         size_t p = 1;
//         for(j ; j < 14; ++j)
//         {
//             p *= 
//         }
//     }

// }

// void pyut()
// {
//     const int sum = 1000;
//     int a;
//     for (a = 1; a <= sum/3; a++)
//     {
//         int b;
//         for (b = a + 1; b <= sum/2; b++)
//         {
//             int c = sum - a - b;
//             if ( a*a + b*b == c*c )
//                cout << a << '\t' << b << '\t' << c << endl;
//         }
//     }
// }

// size_t ex10(size_t limit)
// {
//     size_t sum{};
    
//     for(size_t i = 2; i < limit; ++i)
//     {
//         if(is_prime(i))
//         {
//             sum += i;
//         }
        
//     }

//     return sum;
// }


// size_t ex14(size_t num)
// {
//     const int number = num;
 
// long sequenceLength = 0;
// long startingNumber = 0;
// long sequence;
 
// for (int i = 2; i <= number; i++) 
//     {
//         int length = 1;
//         sequence = i;
//         while (sequence != 1) {
//             if ((sequence % 2) == 0) {
//                 sequence = sequence / 2;
//             } else {
//                 sequence = sequence * 3 + 1;
//             }
//             length++;
//         }
    
    
//         if (length > sequenceLength) {
//             sequenceLength = length;
//             startingNumber = i;
//         }
//     }

//     return startingNumber;
// }


// size_t ex15(size_t size)
// {
//     int i;
//     int j;
//     int arr[size + 1][size + 1];
//     for(i = 0; i < size + 1; ++i)
//     {
//         for(j = 0; j < size + 1; ++j)
//         {
//             arr[i][j] = 1;
//         }
//     }

//     for(i = 1; i < size + 1; ++i)
//     {
//         for(j = 1; j < size + 1; ++j)
//         {
//             arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//         }
//     }

//     return arr[i-1][j-1];
// }

// size_t ex16()
// {
//    double i = pow(2,1000);
//     cout << i << endl;
// }



// int ex20(int n)
// {
//     size_t big_num = fact(n);
//     cout << big_num << endl;
//     int sum{};
//     int div{};
//     while(big_num > 0)
//     {
//       div = big_num % 10;
//       sum += div;
//       big_num /= 10;
      
//     }

//     return sum;
// }


class B{

    void f(){cout << "S" << endl;}
};

struct A:B{
    private:    
    int x{};
};


int main(){



    return 0;
}