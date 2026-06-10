#include <iostream>
using namespace std ;

int main() {

int n ;

cout << "Enter marks :" ;
cin >> n ;

if (80 <= n && n <= 100){
cout << "GRADE A" ;
}
else if (60 <= n && n < 80){
cout << "GRADE B" ;
}
else if (50 <= n && n < 60){             
cout << "GRADE C" ;
}
else if (45 <= n && n < 50){
cout << "GRADE D" ;
}
else if ( 25 <=n < 45){
cout << "GRADE E" ;
}
else if (n < 25){
cout << "GRADE F" ;
}

    return 0; 
}
