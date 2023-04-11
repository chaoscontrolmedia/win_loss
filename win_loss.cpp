#include <iostream>
using namespace std;

/*I was playing Elden Ring one day and I wanted to write a program that counted my wins and losses in a match in the game. 
I also wanted to make it a point to keep documentation in mind.*/

//write a program to count the number of wins and losses
//add counting invalid inputs
//Add option to exit program 
//Added message for when there's no total
//get actual total from subtracting invalid inputs
//add condition to exit program if more than 1 invalid input is added
//add break to skip to end of program if user enters more than a certain amount of invalid inputs
//The second invalid input should exit the program without adding to the count.







int main(){
    // number of wins, losses, invalid inputs, and total count
    double n;
    double w = 0;
    double l = 0;
    double inv = 0;
    double raw_total = 0;
    


//wwwlwwwllwlllwl
    //The basic question
   
    //A do-while loop is used to ensure program runs at least once.
   do{
        //The user either enters 1 for wins, 2 for losses, and 0 to exit.
        cout << "Win or loss: \n1 for win\n2 for loss. \n0 to exit: " << endl;
        
         cin >> n;
         //Raw total increases whether 0,1,or 2 is pressed.

         if (n != 0)raw_total++;

        //add to wins and losses. Breaks when user enters 0.
        if (n == 0){break;}
        else if (n == 1) {w++;}
        else if (n == 2) {l++;}

        else {
            inv++;
            cout << "Invalid.";

            //Skips to program results program if there are too many invalid inputs
            if (inv > 1){cout << "Exiting program."<<endl; break;}
            
            }


        //to ensure that count doesn't go up when user enters 0 to exit program
        
        if (raw_total > 9) {cout << "Max inputs reached." << endl;
        break;}

        
   }while (true);
   //No results if there's no total, printed on a separate line.
   if (raw_total == 0){cout << "No results" << endl;}

   
        
   //The actual total, the total inputs -valid inputs. 
   //I add +1 because raw_total counts exiting the program due to bad inputs in it's total.
   double total = (raw_total - inv);


    //percentage = 2/10 = .2 * 100 = 20%
   double win_percentage = (w/total) * 100;
   double loss_percentage = (l/total) * 100;
   
    
   cout << "Wins: " << w << endl;
   cout << "Losses: " << l << endl;
   cout << "Invalid inputs: " << inv << endl;
   cout << "Raw Total: " << raw_total << endl;
   cout << "Total: " << total << endl;
   cout << "Win percentage: " << win_percentage << "%" << endl;
   cout << "Loss percentage:" << loss_percentage << "%" << endl;
    

return 0;

}

