// credit card

#include <stdio.h>
#include <cs50.h>
#include <string.h>

//    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;

void checksum(long number);

int main(void)
{
    long number = get_long("Number: ");
    checksum(number);
}


void checksum(long number)
{
    long a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;

    if (number >= 1000000000000000)
    {
        a16 = number%10;
        printf("a16: %lo\n", a16);

        a15 = ((number - a16)/10)%10;
        printf("a15: %lo\n", a15);
        int b15 = a15*2;

        a14 = ((number - a15 - a16)/100)%10;
        printf("a14: %lo\n", a14);

        a13 = ((number - a14 - a15 - a16)/1000)%10;
        printf("a13: %lo\n", a13);
        int b13 = a13*2;

        a12 = ((number - a13 - a14 - a15 - a16)/10000)%10;
        printf("a12: %lo\n", a12);

        a11 = ((number - a12 - a13 - a14 - a15 - a16)/100000)%10;
        printf("a11: %lo\n", a11);
        int b11 = a11*2;

        a10 = ((number - a11 - a12 - a13 - a14 - a15 - a16)/1000000)%10;
        printf("a10: %lo\n", a10);

        a9 = ((number - a10 - a11 - a12 - a13 - a14 - a15 - a16)/10000000)%10;
        printf("a9: %lo\n", a9);
        int b9 = a9*2;

        a8 = ((number - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/100000000)%10;
        printf("a8: %lo\n", a8);

        a7 = ((number - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/1000000000)%10;
        printf("a7: %lo\n", a7);
        int b7 = a7*2;

        a6 = ((number - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/10000000000)%10;
        printf("a6: %lo\n", a6);

        a5 = ((number - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/100000000000)%10;
        printf("a5: %lo\n", a5);
        int b5 = a5*2;

        a4 = ((number - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/1000000000000)%10;
        printf("a4: %lo\n", a4);

        a3 = ((number - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/10000000000000)%10;
        printf("a3: %lo\n", a3);
        int b3 = a3*2;

        a2 = ((number - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/100000000000000)%10;
        printf("a2: %lo\n", a2);

        a1 = ((number - a2 - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15 - a16)/1000000000000000)%10;
        printf("a1: %lo\n", a1);
        int b1 = a1*2;

        int c11, c12, c31, c32, c51, c52, c71, c72, c91, c92, c111, c112, c131, c132, c151, c152;
        if (b1 >=10 || b3 >=10 || b5 >=10 || b7 >=10 || b9 >=10 || b11 >=10 || b13 >=10 || b15 >=10)
        {
            c11 = b1%10;
            c12 = ((b1-c11)/10)%10;

            c31 = b3%10;
            c32 = ((b3-c31)/10)%10;

            c51 = b5%10;
            c52 = ((b5-c51)/10)%10;

            c71 = b7%10;
            c72 = ((b7-c71)/10)%10;

            c91 = b9%10;
            c92 = ((b9-c91)/10)%10;

            c111 = b11%10;
            c112 = ((b11-c111)/10)%10;

            c131 = b13%10;
            c132 = ((b13-c131)/10)%10;

            c151 = b15%10;
            c152 = ((b15-c51)/10)%10;

            b1 = 0;
            b3 = 0;
            b5 = 0;
            b7 = 0;
            b9 = 0;
            b11 = 0;
            b13 = 0;
            b15 = 0;
        }

        else
        {
            c11 = 0;
            c12 = 0;
            c31 = 0;
            c32 = 0;
            c51 = 0;
            c52 = 0;
            c71 = 0;
            c72 = 0;
            c91 = 0;
            c92 = 0;
            c111 = 0;
            c112 = 0;
            c131 = 0;
            c132 = 0;
            c151 = 0;
            c152 = 0;
        }

        int sum1 = a2 + a4 + a6 + a8 + a10 + a12 + a14 + a16;
        int sum2 = b1 + b3 + b5 + b7 + b9 + b11 + b13 + b15 + c11 + c12 + c31 + c32 + c51 + c52 + c71 + c72 + c91 + c92 + c111 + c112 + c131 + c132 + c151 + c152;
        int sum3 = sum1 + sum2;

        printf("%i\n", sum3);

        int vld = sum3%10;

        if (vld ==0)
        {
            printf("Valid Card\n");
            if (a1 == 5 && a2 == 1)
            {
                printf("This number belongs to Master Card\n");
            }

            else if (a1 == 5 && a2 == 2)
            {
                printf("This number belongs to Master Card\n");
            }

            else if (a1 == 5 && a2 == 3)
            {
                printf("This number belongs to Master Card\n");
            }

            else if (a1 == 5 && a2 == 4)
            {
                printf("This number belongs to Master Card\n");
            }

            else if (a1 == 5 && a2 == 5)
            {
                printf("This number belongs to Master Card\n");
            }

            else if (a1 == 4)
            {
                printf("This number belongs to Visa Card\n");
            }
        }


        else
        {
            printf("Invalid Card\n");
        }

    }

    else if (number >= 100000000000000 && number < 1000000000000000)
    {
        a15 = (number)%10;
        printf("a15: %lo\n", a15);

        a14 = ((number - a15)/10)%10;
        printf("a14: %lo\n", a14);
        int b14 = a14*2;

        a13 = ((number - a14 - a15)/100)%10;
        printf("a13: %lo\n", a13);

        a12 = ((number - a13 - a14 - a15)/1000)%10;
        printf("a12: %lo\n", a12);
        int b12 = a12*2;

        a11 = ((number - a12 - a13 - a14 - a15)/10000)%10;
        printf("a11: %lo\n", a11);

        a10 = ((number - a11 - a12 - a13 - a14 - a15)/100000)%10;
        printf("a10: %lo\n", a10);
        int b10 = a10*2;

        a9 = ((number - a10 - a11 - a12 - a13 - a14 - a15)/1000000)%10;
        printf("a9: %lo\n", a9);

        a8 = ((number - a9 - a10 - a11 - a12 - a13 - a14 - a15)/10000000)%10;
        printf("a8: %lo\n", a8);
        int b8 = a8*2;

        a7 = ((number - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/100000000)%10;
        printf("a7: %lo\n", a7);

        a6 = ((number - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/1000000000)%10;
        printf("a6: %lo\n", a6);
        int b6 = a6*2;

        a5 = ((number - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/10000000000)%10;
        printf("a5: %lo\n", a5);

        a4 = ((number - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/100000000000)%10;
        printf("a4: %lo\n", a4);
        int b4 = a4*2;

        a3 = ((number - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/1000000000000)%10;
        printf("a3: %lo\n", a3);

        a2 = ((number - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/10000000000000)%10;
        printf("a2: %lo\n", a2);
        int b2 = a2*2;

        a1 = ((number - a2 - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13 - a14 - a15)/100000000000000)%10;
        printf("a1: %lo\n", a1);

        int c21, c22, c41, c42, c61, c62, c81, c82, c101, c102, c121, c122, c141, c142;
        if (b2 >=10 || b4 >=10 || b6 >=10 || b8 >=10 || b10 >=10 || b12 >=10 || b14 >=10)
        {
            c21 = b2%10;
            c22 = ((b2-c21)/10)%10;

            c41 = b4%10;
            c42 = ((b4-c41)/10)%10;

            c61 = b6%10;
            c62 = ((b6-c61)/10)%10;

            c81 = b8%10;
            c82 = ((b8-c81)/10)%10;

            c101 = b10%10;
            c102 = ((b10-c101)/10)%10;

            c121 = b12%10;
            c122 = ((b12-c121)/10)%10;

            c141 = b14%10;
            c142 = ((b14-c141)/10)%10;


            b2 = 0;
            b4 = 0;
            b6 = 0;
            b8 = 0;
            b10 = 0;
            b12 = 0;
            b14 = 0;
        }

        else
        {
            c21 = 0;
            c22 = 0;
            c41 = 0;
            c42 = 0;
            c61 = 0;
            c62 = 0;
            c81 = 0;
            c82 = 0;
            c101 = 0;
            c102 = 0;
            c121 = 0;
            c122 = 0;
            c141 = 0;
            c142 = 0;
        }

        int sum1 = a1 + a3 + a5 + a7 + a9 + a11 + a13 + a15;
        int sum2 = b2 + b4 + b6 + b8 + b10 + b12 + b14 + c21 + c22 + c41 + c42 + c61 + c62 + c81 + c82 + c101 + c102 + c121 + c122 + c141 + c142;
        int sum3 = sum1 + sum2;

        printf("%i\n", sum3);

        int vld = sum3%10;

        if (vld == 0)
        {
            printf("Valid card\n");
            if (a1 == 3 && a2 == 4)
            {
                printf("This number belongs to American Express\n");
            }

            else if (a1 == 3 && a2 == 7)
            {
                printf("This number belongs to American Express\n");
            }
        }

        else
        {
            printf("Invalid Card\n");
        }

    }

    else if (number >= 1000000000000 && number < 100000000000000)
    {
        a13 = (number)%10;
        printf("a13: %lo\n", a13);

        a12 = ((number - a13)/100)%10;
        printf("a12: %lo\n", a12);
        int b12 = a12*2;

        a11 = ((number - a12 - a13)/1000)%10;
        printf("a11: %lo\n", a11);

        a10 = ((number - a11 - a12 - a13)/10000)%10;
        printf("a10: %lo\n", a10);
        int b10 = a10*2;

        a9 = ((number - a10 - a11 - a12 - a13)/100000)%10;
        printf("a9: %lo\n", a9);

        a8 = ((number - a9 - a10 - a11 - a12 - a13)/1000000)%10;
        printf("a8: %lo\n", a8);
        int b8 = a8*2;

        a7 = ((number - a8 - a9 - a10 - a11 - a12 - a13)/10000000)%10;
        printf("a7: %lo\n", a7);

        a6 = ((number - a7 - a8 - a9 - a10 - a11 - a12 - a13)/100000000)%10;
        printf("a6: %lo\n", a6);
        int b6 = a6*2;

        a5 = ((number - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13)/1000000000)%10;
        printf("a5: %lo\n", a5);

        a4 = ((number - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13)/10000000000)%10;
        printf("a4: %lo\n", a4);
        int b4 = a4*2;

        a3 = ((number - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13)/100000000000)%10;
        printf("a3: %lo\n", a3);

        a2 = ((number - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13)/1000000000000)%10;
        printf("a2: %lo\n", a2);
        int b2 = a2*2;

        a1 = ((number - a2 - a3 - a4 - a5 - a6 - a7 - a8 - a9 - a10 - a11 - a12 - a13)/10000000000000)%10;
        printf("a1: %lo\n", a1);

        int c21, c22, c41, c42, c61, c62, c81, c82, c101, c102, c121, c122;
        if (b2 >=10 || b4 >=10 || b6 >=10 || b8 >=10 || b10 >=10 || b12 >=10)
        {
            c21 = b2%10;
            c22 = ((b2-c21)/10)%10;

            c41 = b4%10;
            c42 = ((b4-c41)/10)%10;

            c61 = b6%10;
            c62 = ((b6-c61)/10)%10;

            c81 = b8%10;
            c82 = ((b8-c81)/10)%10;

            c101 = b10%10;
            c102 = ((b10-c101)/10)%10;

            c121 = b12%10;
            c122 = ((b12-c121)/10)%10;


            b2 = 0;
            b4 = 0;
            b6 = 0;
            b8 = 0;
            b10 = 0;
            b12 = 0;
        }

        else
        {
            c21 = 0;
            c22 = 0;
            c41 = 0;
            c42 = 0;
            c61 = 0;
            c62 = 0;
            c81 = 0;
            c82 = 0;
            c101 = 0;
            c102 = 0;
            c121 = 0;
            c122 = 0;
        }

        int sum1 = a1 + a3 + a5 + a7 + a9 + a11 + a13;
        int sum2 = b2 + b4 + b6 + b8 + b10 + b12 + c21 + c22 + c41 + c42 + c61 + c62 + c81 + c82 + c101 + c102 + c121 + c122;
        int sum3 = sum1 + sum2;

        printf("%i\n", sum3);

        int vld = sum3%10;

        if(vld == 0)
        {
            printf("Valid card\n");
            if (a1 == 4)
            {
                printf("This number belongs to Visa Card\n");
            }
        }


        else
        {
            printf("Invalid Card\n");
        }


    }

    else
    {
        printf("Invalid Card\n");
    }

}



