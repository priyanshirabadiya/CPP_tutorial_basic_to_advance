// 1) Multification of two numbers

// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"Hello world"<<endl;
//     cout<<"This is Priyanshi Rabadiya here." << endl ;
//     cout<<"Enter two numbers for Multification" << endl ;
//     cout<<"Enter a:";
//     cin>>a;
//     cout << "enter b:";
//     cin >> b;
//     cout << a <<endl ;
//     cout << b << endl ;
//     cout << "Multification of a anf b is : " << a * b  << "\n";
//     return 0;
// }



// 2) Swap value of two numbers 

// #include <iostream>
// using namespace std;
// int main() {
//     int a , b , c;
//     cout << "Program to Swap value of two numbers." << endl;
//     cout << "Enter a :" ;
//     cin >> a ;
//     cout << "Enter b :" ;
//     cin >> b ;
    
//     c = a ;
//     a = b ;
//     b = c ;

//     cout << a << endl;
//     cout << b << endl;

//     return 0;
// }   




// Swap value of two numbers without using third variable using + - operator

// #include <iostream>
// using namespace std;
// int main() {
//     int a , b ;
//     cout << "enter a:" << endl;
//     cin >> a;
//     cout << "enter b:" << endl;
//     cin >> b;
//     a = a + b ;
//     b = a - b ;
//     a = a - b ;

//     cout << "After swapping:" << endl;
//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl;
//     return 0;
// }


// Swap value of two numbers without using third variable using * / operator

// #include <iostream>
// using namespace std;
// int main() {
//     int a , b;
//     cout << "Enter a:" ;
//     cin >> a;
//     cout << "Enter b:" ;
//     cin >> b;

//     a = a * b ; 
//     b = a / b ;
//     a = a / b ;


//     cout << "After swapping values are" <<endl;
//     cout << "A is :" << a <<endl ;
//     cout << "B is :" << b <<endl ;
//     return 0;
// }




// 3) Find largest and smallest values


// #include <iostream>
// using namespace std;
// int main(){
//     int m , n ;
//     cout << "Enter M:" << endl ;
//     cin >> m;
//     cout << "Enter N:" << endl ;
//     cin >> n;
//     if(m > n){
//         cout << "M : " << m  <<" is larger than N : " << n << endl ;
//     }
//     else {
//         cout << "N : " << n  <<" is larger than M : " << m << endl ;
//     }
//     return 0;
// }



// 4) print series 

// #include <iostream>
// using namespace std;
// int main() {
//     int n , i ;
//     cout << "enter n:" << endl ;
//     cin >> n;
//     for ( i = 1 ; i <= n ; i++ ) 
//     {
//         cout << i << endl ;
//     }
//     return 0;
// }



// 5) pattern

// pattern 1)

// #include <iostream>
// using namespace std;
// int main () {
//     int i , j ;
//     for( i = 1 ; i <= 5 ; i++ )
//     {
//         for (j = 1 ; j <= i ; j++)
//         {
//             cout << j << " " ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }


// pattern 2)

// #include <iostream>
// using namespace std;
// int main () {
//     int i , j , a = 1 ;
//     for(i = 1 ; i <= 5 ; i++ )
//     {
//         for (j = 1 ; j <= i ; j++ )
//         {
//             cout << a << " ";
//             a++;
//         }
//         cout << endl ;
//     }
//     return 0;
// }



// pattern 3)

// #include <iostream>
// using namespace std;
// int main () {
//     int i , j , a = 1;
//     for( i = 1 ; i <= 5 ; i++ )
//     {
//         for(j = 1 ; j <= i ; j++ )
//         {
//             a++;
//             if(i % 2 == 0)
//             {
//                 cout << " " << char(a + 63);
//             }
//             else {
//                 cout << " " << char(a + 95);
//             }
//         }
//         cout << endl;
//     }
// }




// pattern 4)

// #include <iostream>
// using namespace std;
// int main () {
//     int i , j , a = 1 ;
//     for( i = 1 ; i <= 5 ; i++ )
//     {
//         for( j = 1 ; j <= i ; j++ )
//         {
//             a++;
//             if(i % 2 == 0){
//                 cout << char(a + 63) << " ";   
//             }
//             else {
//                 cout << char( a + 95 ) << " ";
//             }
//         }
//         cout << endl;
//     }
//         return 0;
// }



// pattern 5)

// #include <iostream>
// using namespace std;
// int main(){
//     char i , j  ;
//     for (i = 'a' ; i <= 'e' ; i++ )
//     {
//         for ( j = 'a' ; j <= i ; j++ )
//         {
//         cout << " " << i ; 
//         }
//         cout << endl;
//     }
//     return 0;
// }



// pattern 5)

// #include <iostream>
// using namespace std;
// int main(){
//     int i , j = 1 , sp; 
//     for(i = 5 ; i >= 1 ; i-- )
//     {
//         for(sp = i ; sp <= 5 ; sp++ )
//         {
//             cout << " ";
//         }
//         for (j = 1 ; j <= i ; j++)
//         {
//             cout << j << " " ;
//         }
//         cout<< endl;
//     }
// }



// pattern 6)


// #include<iostream>
// using namespace std;
// int main() {

//     int i , j , sp;
//     for ( i = 1 ; i <= 6 ; i++ )
//     {
//         for(sp = 5 ; sp >= i ; sp-- )
//         {
//             cout << " ";
//         }
//         for( j = 1 ; j <= i ; j++ ) 
//         {
//             cout << "*" << " ";
//         }
//         cout<< endl;
//     }
//     for(i = 5 ; i >= 1 ; i-- )
//     {
//         for(sp = i ; sp <= 5 ; sp++ )
//         {
//             cout << " ";
//         }
//         for( j = 1 ; j <= i ; j++ )
//         {
//             cout<< "*" << " ";
//         }
        
//         cout<< endl;
//     }
//     return 0;
// }



// pattern 7)

// #include<iostream>
// using namespace std;
// int main(){
//     int i , j ;
//     for(i = 5 ; i >= 1 ; i-- )
//     {
//         for(j = 5 ; j >= i ; j-- )
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     for(i = 2 ; i <= 5 ; i++ )
//     {
//         for( j = 5 ; j >= i ; j-- )
//         {
//             cout << j << " ";
//         }
//         cout << endl ;
//     }
//     return 0;
// }




