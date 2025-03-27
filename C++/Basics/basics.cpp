// PRINT HELLO WORLD


// // #include<iostream>
// // using name space std;
// // int main(){
// //     cout<<"hello world ";
// //     return 0;
// // }




// PRINT SERIES FROM  1 TO 20

// // include<iostrem>
// // using name space std;
// // int main(){
// //     int i=0;
// //     for(i=0;i<20;i++){
// //         cout<<i;
    
// //     }
// //     return 0;
// // }


// //  print any even number from one to 20

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int i =1;
// //     for (i=1;i<20;i++){
// //         if(i%2==0){
// //             cout<<i;

// //         }
// // }




// #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int i =1;
// //     for (i=1;i<20;i++){
// //         if(i%2==0){
// //             cout<<i;

// //         }
// // }





#include <iostream>
using namespace std;

// Function to add two numbers in centimeters
float addCentimeters(float cm1, float cm2) {
    return cm1 + cm2;
}

int main() {
    float num1, num2;

    // Input: Get two numbers from the user
    cout << "Enter the first number in centimeters: ";
    cin >> num1;
    cout << "Enter the second number in centimeters: ";
    cin >> num2;

    // Calculate the sum
    float result = addCentimeters(num1, num2);

    // Output: Display the result
    cout << "The sum of " << num1 << " cm and " << num2 << " cm is " << result << " cm." << endl;

    return 0;
}