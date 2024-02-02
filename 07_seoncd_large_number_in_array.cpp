// // //find secod smallest elements in array

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n[] = {38, 583, 8234, 68, 384, 582};

//     int count = sizeof(n) / sizeof(int);

//     int max;

//     for (int i = 0; i < count; i++)
//     {
//         if (n[i] < max)
//         {
//             max = n[i];
//         }
//     }

//     int max2 ;

//     for (int i = 0; i < count; i++)
//     {
//         if (n[i] < max2)
//         {
//             if (n[i] != max)
//                 max2 = n[i];
//         }
//     }
//     cout << max2;
// }

// // write a program to copy contents of an array in another array in reverse order

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n[] = {38, 583, 8234, 68, 384, 582};
//     int count = sizeof(n) / sizeof(int);

//     int y[count];

//     for(int i=0,t=count-1;i<count;i++)
//     {
//         y[t]=n[i];
//         t--;
//     }
//     for(int i=0,t=count-1;i<count;i++)
//     {
//       cout << y[i] << " ";
//     }

// }

// // reverse an array without using any extra array

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n[] = {38, 583, 8234, 68, 384, 582, 58};
//     int count = sizeof(n) / sizeof(int);
//     int tmp;

//     for (int i = 0, t = count - 1; i < count / 2; i++, t--)
//     {
//         tmp = n[i];

//         n[i] = n[t];
//         n[t] = tmp;
//     }

//     for (int i = 0, t = count - 1; i < count; i++)
//     {
//         cout << n[i] << " ";
//     }
// }

// check if the array is palindrome or not

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n[] = {1,2,3,3,2,1};
//     int count = sizeof(n) / sizeof(int);
//     int tmp;

//     int y=0;

//     for (int i = 0, t = count - 1; i < count / 2; i++, t--)
//     {
//         if(n[i]==n[t])
//         {
//             y++;
//         }
//         else
//         {
//             y=0;
//         }

//     }

//     if(y==count/2)
//     {
//         cout << "Given array is palindrome array" << endl;
//     }
//     else
//     {
//         cout << "Array is not palindrome array" << endl;
//     }

// }

//  write a program to add two matrix

#include <iostream>

using namespace std;

int main(void)
{
    int n[2][2] = {{1, 2}, {4, 5}};
    int y[2][2] = {{7, 8}, {10, 11}};

    int sum[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = n[i][j] + y[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << endl;
        }
    }
}