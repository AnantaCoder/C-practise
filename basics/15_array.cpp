// // // // #include <iostream>

// // // // using namespace std;

// // // // int main() {

// // // //     // size of a n array
// // // //     int array[]={45,65,263,47,56,9};
// // // //     cout<< "size of "<<sizeof(array);

// // // // return 0;

// // // // }// size of 24

// // // //[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]

// // // #include <iostream>

// // // using namespace std;

// // // int main() {

// // //     int arrayy[]={45,65,263,47,56,9};
// // //     cout<< sizeof(arrayy)/sizeof(int);  //To find out how many elements an array has, 

// // // return 0;

// // // }//output -6

// // //=============================================================================================

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int myNumbers[5] = {10, 20, 30, 40, 50};
// //     for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
// //     cout << myNumbers[i] << "\n";
// //     }
// //     return 0;
// // }//output 10,20,30,40,50

// //==============================================================================================

// #include <iostream>

// using namespace std;

// int main() {

//     //creating a 2d arraywith 3 rows and 4 columns

//     int twoDarray[3][4]={
//         {2,4,5,8},
//         {2,4,5,8},
//         {2,4,5,8}
//     };
//     //acc3ssing the printing elements of a 2d array

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<"the elements of the array is "<<twoDarray[i][j]<<"\n";
//         }
        
//     }
    

// return 0;

// } // rerturn all the members

#include <iostream>

int main() {
    // Creating a 3D array with dimensions 2x3x4
    int threeDArray[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing and printing elements of the 3D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                std::cout << threeDArray[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}