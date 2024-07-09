// Array : Here is same array as like c language , simple reminder of array
// what is array ?
// => Array is collection of same datatype.

// 1) Simple program to print addition

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] , b[5] , sum[10] , i;
//     for(i = 0 ; i < 3 ; i++)
//     {
//         cout << "Enter value of a[" << i << "] : ";
//         cin >> a[i];
//     }
//     for(i = 0 ; i < 3 ; i++)
//     {
//         cout << "Enter value of b[" << i << "] : ";
//         cin >> b[i];
//     }
//     for(i = 0 ; i < 3 ; i++)
//     {
//         sum[i] = a[i] + b[i];
//         cout << a[i] << "\t" << b[i] << "\t" << sum[i] << endl;
//     }
//     return 0;
// }



// 2) print marksheet

// #include <iostream>
// using namespace std;
// int main(){
    
//     int i , stat[2] , acc[2] , eng[2] , total = 0  , per ;
//     for (i = 0 ; i <= 2 ; i++ ) 
//     {
//         cout << "enter English marks :" ;
//         cin >> eng[i] ;
//     }
//    for (i = 0 ; i <= 2 ; i++ ) 
//     {
//         cout << "enter Account marks :" ;
//         cin >> acc[i] ;
//     }
//     for (i = 0 ; i <= 2 ; i++ ) 
//     {
//         cout << "enter Stat marks :" ;
//         cin >> stat[i] ;
//     }

//     cout << "Stat"  << "\t\t" << "Account" << "\t\t" << "English" << "\t\t" << "Total" << "\t\t" << "Percentage"  << endl;
//     for (i = 0 ; i <= 2 ; i++ ) 
//     {
//         total = eng[i] + acc[i] + stat[i];
//         per = total / 3;
//         cout << stat[i] << "\t\t" << acc[i] << "\t\t" << eng[i] << "\t\t" << total << "\t\t" << per <<endl;
//     }

//     return 0;
// }




// 3 ) odd evensum

// #include <iostream>
// using namespace std;
// int main(){
//     int a[5] , i , oddsum = 0 , evensum = 0 , totalsum = 0;
//     for(i = 0 ; i < 5 ; i++)
//     {
//         cout << "Enter value of a [" << i << "] :";
//         cin >> a[i];
//     }

//     for(i = 0 ; i < 5 ; i++)
//     {
//         if( a[i] % 2 == 0 )
//         {
//             evensum += a[i];
//         }
//         else {
//             oddsum += a[i];
//         }
//     }

//     cout <<"Evensum :" << evensum << endl;
//     cout <<"Oddsum :" << oddsum << endl;

//     return 0;
// }



// 4) Sum of two matrixs

// #include <iostream>
// using namespace std;
// int main() {
//     int a[5][5] , b[5][5] , sum[5][5] , i , j;
//     for(i = 0 ; i < 3 ; i++ )  
//     {
//         for (j = 0 ; j < 3 ; j++ )
//         {
//             cout << "Enter value of a:" ;
//             cin >> a[i][j];
//         }
//     }
//     for(i = 0 ; i < 3 ; i++ )  
//     {
//         for (j = 0 ; j < 3 ; j++ )
//         {
//             cout << "Enter value of b:" ;
//             cin >> b[i][j];
//         }
//     }

//     cout << "Matrix A is :" << endl ;
//     for( i = 0 ; i < 3 ; i++ )
//     {
//         for( j = 0 ; j < 3 ; j++ )
//         {
//             cout <<a[i][j] << " " ; 
//         }
//         cout << endl;
//     }
//     cout << "Matrix B is :" << endl ;
//     for( i = 0 ; i < 3 ; i++ )
//     {
//         for( j = 0 ; j < 3 ; j++ )
//         {
//             cout << b[i][j] << " " ;
//         }
//         cout << endl;
//     }
//     cout << " Sum of matrix is :" << endl ;
//     for( i = 0 ; i < 3 ; i++ )
//     {
//         for( j = 0 ; j < 3 ; j++ )
//         {
//             sum[i][j] = a[i][j] + b[i][j]; 
//             cout << sum[i][j] << " " ;
//         }
//         cout << endl;
//     }

//     return 0;
// }





