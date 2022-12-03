//how to use arry in c?    
#include <type_traits>

static_assert(!std::is_same<int[8], float[8]>::value, "distinct element type");
static_assert(!std::is_same<int[8],   int[9]>::value, "distinct size");


                  +---+---+---+---+---+---+---+---+
the_actual_array: |   |   |   |   |   |   |   |   |   int[8]
                  +---+---+---+---+---+---+---+---+
                    ^
                    |
                    |
                    |
                    |  pointer_to_the_first_element   int*


static_assert(!std::is_same<int[8], int*>::value, "an array is not a pointer");


static_assert(!std::is_same<int*, int(*)[8]>::value, "distinct element type");


      +-----------------------------------+
      | +---+---+---+---+---+---+---+---+ |
+---> | |   |   |   |   |   |   |   |   | | int[8]
|     | +---+---+---+---+---+---+---+---+ |
|     +---^-------------------------------+
|         |
|         |
|         |
|         |  pointer_to_the_first_element   int*
|
|  pointer_to_the_entire_array              int(*)[8]


std::cout << *(x+3) << ", " << *(x+7) << std::endl;


   +---+---+---+---+---+---+---+---+
x: |   |   |   |   |   |   |   |   |   int[8]
   +---+---+---+---+---+---+---+---+
     ^           ^               ^
     |           |               |
     |           |               |
     |           |               |
x+0  |      x+3  |          x+7  |     int*


   +---+---+---+---+---+---+---+---+
   |   |   |   |   |   |   |   |   |   int[8]
   +---+---+---+---+---+---+---+---+
     ^           ^               ^
     |           |               |
     |           |               |
   +-|-+         |               |
x: | | |    x+3  |          x+7  |     int*
   +---+


std::cout << x[3] << ", " << x[7] << std::endl;


std::cout << 3[x] << ", " << 7[x] << std::endl;


&x[i]  ==  &*(x+i)  ==  x+i


T* p = &array[0];  // rewritten as &*(array+0), decay happens due to the addition
T* q = array;      // decay happens due to the assignment


   +---+---+---+---+---+---+---+---+....
x: |   |   |   |   |   |   |   |   |   .   int[8]
   +---+---+---+---+---+---+---+---+....
     ^                               ^
     |                               |
     |                               |
     |                               |
x+0  |                          x+8  |     int*


std::sort(x + 0, x + n);
std::sort(&x[0], &x[0] + n);



import urllib.request, json
resp = urllib.request.urlopen('https://query2.finance.yahoo.com/v10/finance/quoteSummary/tsla?modules=price')
data = json.loads(resp.read())
price = data['quoteSummary']['result'][0]['price']['regularMarketPrice']['raw']
print(price)


//addition of two numbers in c?                
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    uint32_t a;

    printf("Enter number 1: ");
    scanf("%hd", (uint16_t *)(&a));

    printf("Enter number 2: ");
    scanf("%hd", ((uint16_t *)(&a))+1);

    printf("%X\n", a);

    printf("Sum = %"PRIu32"\n", (uint32_t)(*(uint16_t *)(&a)) + *(((uint16_t *)(&a)) + 1));

    return 0;
}

//addition of n numbers in c?
unsigned int n = 100;
unsigned long long int sum = 0;

for ( unsigned int ix = 1; ix <= n; ix++){
   sum = sum + ix;
}

printf("Sum of the first %u natural numbers is %llu\n" , n, sum);


#include <stdio.h>
#include <inttypes.h>

int main(void) 
{
    unsigned int n = 1000000;
    uintmax_t sum = 0;

    for ( unsigned int ix = 1; ix <= n; ix++){
       sum = sum + ix;
    }

    printf("Sum of the first %u natural numbers is %" PRIuMAX "\n" , n, sum);
    
    return 0;
}


Sum of the first 1000000 natural numbers is 500000500000


#include <stdio.h>
#include <inttypes.h>

int main(void) 
{
    unsigned int n = 1000000;
    uintmax_t sum = 0;

    while ( n ) sum += n--;
    
    printf( "Sum of the first %u natural numbers is %" PRIuMAX "\n" , n, sum );
    
    return 0;
}

//realloc function program? 
ptr = malloc(sizeof(int));
ptr1 = realloc(ptr, count * sizeof(int));
if (ptr1 == NULL) // reallocated pointer ptr1
{       
    printf("\nExiting!!");
    free(ptr);
    exit(0);
}
else
{
    ptr = ptr1;           // the reallocation succeeded, we can overwrite our original pointer now
}


//calloc function program in C?                    







//program for print first 100 numbers in c?    
//drrgdrrtrtwtwer                 




