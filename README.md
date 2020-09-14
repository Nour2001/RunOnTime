# RunOnTime
A program that simply calculates the running time of your program!

/*
 Title: RunOnTime
 Description: preforms multiplication of array indices and calculates the elapsed time of the program
 Date: July 29, 2020
 Author: Nour Elgawish
 Copyright: 2020 Nour Elgawish
*/

/*
 DOCUMENTATION
 
 Program Purpose:
     This program uses the ctime library to calculate the elapsed time of 10000 multiplications. The multiplications are being derived from multiplying the indices of 2 arrays, each with 10000 indices.

 
  Classes: none
    
 Variables declared in main:
      none.
 Variables in Product function:
 arr_1 - int  - has 10000 indecies and stores numbers from 100 to 10099
 arr_2 - int  - has 10000 indecies and stores numbers from 10099 to 100 (oppisitie of arr_1)
    
 */

/*
 TEST PLAN

 Normal case:
     >The program excutes properly and shows the time elapsed
     >The seconds come out as a float not an integer
     >The multiplication is preformed correctly.
 
 Bad Data case (The time elapsed come out as integer)
     >Some compilers might hace a problem with the way the time elapsed is casted.
     >This will output imprecise data
 
 Abnormal data (multiplication is done incorrectly)
     >If the loop was given an infinant amount of indecies and the loop kept going for ever the program will not be able to capture timing
     >If arrays were initilized incoorectly, the program will output wrong values.
 
 Limits of the program
 >Arrays need to be initialized properly in order to output correct values
 > For accurate time elapsed, results cannot be integers
 
 Discussion:
     The program will output correct values if valid inputs are given
     If arryas have infinant numbers the program will not be able to claculate the time elapsed
     Arrays need to be initilized properly and if there are no casting errors the program should output the elapsed time not as an integer.
*/
