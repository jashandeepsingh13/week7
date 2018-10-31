#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
 int bal = 500;
 int choice;
 int gamble;
 int comp = (rand() % 2);
 char ans;
 cout <<comp<< endl;
 cout <<"Your intial balance is" << bal << endl;
  
 

  cout <<"How much they want to bet?\n";
  cin>> gamble;

   while ( gamble <= bal )
   {
            cout <<"choose either the number 1 or 0\n";
            cin >> choice;
                if(choice == comp)
                   {
                      gamble = gamble*2;
                      bal = bal+gamble;
                   }
                  else
                   {
                     bal = bal - gamble;
                     cout << " your new balance is " << bal <<endl;
                   }
     
                    cout <<"Do you want to play again. Y for yes N for no\n";
                    cin >> ans;

                    while (ans == 'Y'|| bal > 0)
                    {       cout <<"Your balance is" << bal << endl;
                            cout <<"How much they want to bet?\n";
                            cin>> gamble;
                       if(choice == comp)
                        {
                          gamble = gamble*2;
                           bal = bal+gamble;
                        }
                        else
                        {
                          bal = bal - gamble;
                          cout << " your new balance is " << bal <<endl;
                        }
     
                         cout <<"Do you wnt to play again. Y for yes N for no\n";
                        cin >> ans;

                    } 
               
   }
}