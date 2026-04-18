#include<iostream>
using namespace std;
int main()
{
cout<<"-----Welcome to Tic Tac Toe----- "<<endl;
cout<<endl;
int press;
while(true)
{
   cout<<"--MENU--"<<endl;
   cout<<" 1) Instructions and rules "<<endl;
   cout<<" 2) Play Game              "<<endl;
   cout<<" 3) Exit                   "<<endl;
   cout<<endl;
   cout<<"Enter your Option (1, 2 or 3) ";
   cin>>press;
   cout<<endl;
if(press==1)
   {
      cout<<" Tic-Tac-toe is a game in which two players take turns "<<endl;
      cout<<"in drawing either an ‘O’ or an ‘X’ in a square of a grid "<<endl;
      cout<<"consisting of nine squares.  "<<endl;
      cout<<"The winner is the first player to get three of the same "<<endl;
      cout<<"symbols in a row, column, or any of the diagonal. "<<endl;
      cout<<endl;
      
      cout<<"---RULES---"<<endl;
      cout<<"Players take turns by using 'X' and 'O' "<<endl;
      cout<<"First player to get three 'X' or 'O' in a row or diagonal wins. "<<endl;
      cout<<endl;
      
      cout<<"----BOARD POSITION----"<<endl;
      cout<<endl;
      
      cout<<" 1 | 2 | 3 "<<endl;
      cout<<" __|___|__ "<<endl;
      cout<<" 4 | 5 | 6 "<<endl;
      cout<<" __|___|__ "<<endl;
      cout<<" 7 | 8 | 9 "<<endl;
      cout<<"   |   |   "<<endl;
      cout<<endl;
        
    }
    else if(press==2)
    {
       cout<<"SELECT "<<endl;
       cout<<" Play as:  1) Player 1  ,  2) Player 2 "<<endl;
       int player_choice;
       while(true)
       {
         cin>>player_choice;
         if(player_choice==1 || player_choice==2)
         {
         cout<<"Playing as Player "<<player_choice<<endl;
         break;
         }
         else
         cout<<"Invalid selection "<<endl;
         }
         int other_player;
         if(player_choice==1)
         other_player=2;
         else
         other_player=1;
         bool toss;
         while(true)
         {
          cout<<"Enter toss (0,1) ";
          cin>>toss;
          if(toss==0 || toss==1)
          break;
          else
             cout<<"invalid input "<<endl;
             }
             
             int first_player,second_player;
             if(toss==1)
             {
              first_player=player_choice;
              second_player=other_player;
             }
             else
             {
              first_player=other_player;
              second_player=player_choice;
              }
              cout<<" Player "<<first_player<<" Won the toss"<<endl;
              
              char first_symbol,second_symbol;
             while(true)
             {
               cout<<"Player "<<first_player <<", Choose your symbol('X' or 'O') ";
               cin>>first_symbol;
               if(first_symbol=='x') first_symbol='X';
               if(first_symbol=='o') first_symbol='O';
               
               if(first_symbol=='X' || first_symbol=='O')
               {
                 if(first_symbol=='X') 
                 second_symbol='O';
                 else 
                     second_symbol='X';
                     break;
                     }
                   else
                     cout<<"Invalid symbol "<<endl;
                     }
                     cout<<endl;
                    cout<<"Player "<<first_player<<" has symbol "<<first_symbol<<endl;
                    cout<<"Player "<<second_player<<" has symbol "<<second_symbol<<endl;
                    cout<<endl;
                    char box1=' ', box2=' ' , box3=' ';
                    char box4=' ', box5=' ' , box6=' ';
                    char box7=' ', box8=' ' , box9=' ';
                    bool player_turn=true;
                    bool lose_condition=false;
                    
                    while(!lose_condition)
                    {
                      cout<<endl;
                      cout<<" "<<box1 <<" | " <<box2<<" | " <<box3<<endl;
                      cout<<" __|___|__ "<<endl;
                      cout<<" "<<box4 <<" | " <<box5<<" | "<<box6<<endl;
                      cout<<" __|___|__"<<endl;
                      cout<<" "<<box7 <<" | " <<box8<<" | "<<box9<<endl;
                      cout<<endl;
                      
                    char current_symbol;
                    int current_player;
                    if(player_turn)
                    {
                     current_player=first_player;
                     current_symbol=first_symbol;
                     }
                     else
                     {
                     current_player=second_player;
                     current_symbol=second_symbol;
                     }
                     
                     int move;
                     while(true)
                     {
                     cout<<"Player "<<current_player<<" move your turn   "<<current_symbol<<endl;
                     cin>>move;
                     if(move==1 && box1==' ')
                     {
                     box1=current_symbol;
                     break;
                     }
                     else if(move==2 && box2==' ')
                     {
                     box2=current_symbol;
                     break;
                     }
                     else if(move==3 && box3==' ')
                     {
                     box3=current_symbol;
                     break;
                     }
                      else if(move==4 && box4==' ')
                     {
                     box4=current_symbol;
                     break;
                     }
                     else  if(move==5 && box5==' ')
                     {
                     box5=current_symbol;
                     break;
                     }
                     else  if(move==6 && box6==' ')
                     {
                     box6=current_symbol;
                     break;
                     }
                     else  if(move==7 && box7==' ')
                     {
                     box7=current_symbol;
                     break;
                     }
                     else if(move==8 && box8==' ')
                     {
                     box8=current_symbol;
                     break;
                     }
                      else if(move==9 && box9==' ')
                     {
                     box9=current_symbol;
                     break;
                     }
                     else
                     cout<<"Invalid move, Try Again Please. "<<endl;
                     }
                     if((box1==current_symbol && box2==current_symbol && box3==current_symbol) || (box4==current_symbol && box5==current_symbol && box6==current_symbol) || (box7==current_symbol && box8==current_symbol && box9==current_symbol) || (box1==current_symbol && box4==current_symbol && box7==current_symbol) || (box2==current_symbol && box5==current_symbol && box8==current_symbol) || (box3==current_symbol && box6==current_symbol && box9==current_symbol) || (box1==current_symbol && box5==current_symbol && box9==current_symbol) || (box3==current_symbol && box5==current_symbol && box7==current_symbol))
                     {
                      cout<<endl;
                      cout<<" "<<box1 <<" | " <<box2<<" | " <<box3<<endl;
                      cout<<" __|___|__ "<<endl;
                      cout<<" "<<box4 <<" | " <<box5<<" | "<<box6<<endl;
                      cout<<" __|___|__"<<endl;
                      cout<<" "<<box7 <<" | " <<box8<<" | "<<box9<<endl;
                      cout<<endl;
                     cout<<"Player "<<current_player<<" WINS"<<endl;
                     cout<<"GAME ENDS"<<endl;
                     lose_condition=true;
                     }
                     else if( box1!=' ' && box2!=' ' && box3!=' ' && box4!=' ' && box5!=' ' && box6!=' ' && box7!=' ' && box8!=' ' && box9!=' ')
                     {
                      cout<<endl;
                      cout<<" "<<box1 <<" | " <<box2<<" | " <<box3<<endl;
                      cout<<" __|___|__ "<<endl;
                      cout<<" "<<box4 <<" | " <<box5<<" | "<<box6<<endl;
                      cout<<" __|___|__"<<endl;
                      cout<<" "<<box7 <<" | " <<box8<<" | "<<box9<<endl;
                      cout<<endl;
                     cout<<"Game is Draw "<<endl;
                     cout<<"GAME ENDS"<<endl;
                     lose_condition=true;
                     }
                     if(!lose_condition)
                     player_turn=!player_turn;
                     }
       break;
     }
     else if(press==3)
     { 
       cout<<" Goodbye "<<endl;
       break;
    }
     else
     {
       cout<<"Invalid Option "<<endl;
      } 
     } 
  return 0;
  }

