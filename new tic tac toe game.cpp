#include <iostream>
using namespace std;

char space[3][3]={{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};
int r;
int c;
char val= 'x';
bool tie= false;
string name1=" ";
string name2=" ";
string currentPlayer; // Variable to keep track of current player

void function1();
void function2();
bool function3();

void resetGame() {
    // Reset game board
    space[0][0] = '1'; space[0][1] = '2'; space[0][2] = '3';
    space[1][0] = '4'; space[1][1] = '5'; space[1][2] = '6';
    space[2][0] = '7'; space[2][1] = '8'; space[2][2] = '9';
}

void function1()
{
    cout<<"     |         |     "<<endl;
    cout<<"     |         |     "<<endl;
    cout<<" "<<space[0][0]<<"   |  "<<space[0][1]<<"      | "<<space[0][2]<<endl;
    cout<<"_____|_________|______"<<endl;
    cout<<"     |         |     "<<endl;
    cout<<" "<<space[1][0]<<"   |  "<<space[1][1]<<"      | "<<space[1][2]<<endl;
    cout<<"_____|_________|______"<<endl;
    cout<<"     |         |     "<<endl;
    cout<<" "<<space[2][0]<<"   |  "<<space[2][1]<<"      | "<<space[2][2]<<endl;
    cout<<"_____|_________|______"<<endl;
    cout<<"     |         |     "<<endl;
    cout<<"     |         |     "<<endl;
}

void function2()
{
    int digit;
    
    cout << currentPlayer << ", please enter; it's your turn" << endl;
    cin >> digit;
    
    switch(digit)
    {
        case 1:
            r=0;
            c=0;
            break;
        case 2:
            r=0;
            c=1;
            break;
        case 3:
            r=0;
            c=2;
            break;
        case 4:
            r=1;
            c=0;
            break;
        case 5:
            r=1;
            c=1;
            break;
        case 6:
            r=1;
            c=2;
            break;
        case 7:
            r=2;
            c=0;
            break;
        case 8:
            r=2;
            c=1;
            break;
        case 9:
            r=2;
            c=2;
            break;
        default:
            cout<<"Invalid input! Please enter a number between 1 and 9."<<endl;
            function2();
            return;
    }
    
    if(space[r][c] !='x' && space[r][c] !='o')
    {
        space[r][c] = val;
        if (function3()) // Check for winner or tie
            return;
        // Switch player
        val = (val == 'x') ? 'o' : 'x';
        currentPlayer = (currentPlayer == name1) ? name2 : name1;
    }
    else
    {
        cout<<"Sorry! That position is already taken."<<endl;
        function2();
    }
    function1();
}

bool function3()
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        {
            return true; // for row and column
        }
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true; // for diagonal
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j] != 'x' && space[i][j] != 'o')
            {
                return false; //for tie
            }
        }
    }
    tie=true; // when all spaces are filled
    return true;// it's a tie 
}

int main()
{
    cout<<" Enter the name of first player: "<< endl;
    getline(cin, name1);
    cout<<" Enter the name of second player: "<< endl; 
    getline(cin, name2);
    currentPlayer = name1; // Initialize current player
    cout<< name1 <<" is player 1 so he/she will have first turn "<< endl;
    cout<< name2 <<" is player 2 so he/she will have second turn "<< endl;
    
    while(true)
    {
        resetGame(); // Reset game board for a new game
        tie = false; // Reset tie status
        
        while(!function3())
        {
            function1();
            function2();
        }
        
        if (tie)
        {
            cout << "It's a draw!" << endl;
            // Swap signs and players after draw
            val = (val == 'x') ? 'o' : 'x';
            currentPlayer = (currentPlayer == name1) ? name2 : name1;
            cout << "Starting a new game. " << currentPlayer << " will start with sign " << val << endl;
        }
        else
        {
            if(function3() && val == 'x')
            {
                cout<< name1 <<" Wins!!"<< endl;
            }
            else if(function3() && val == 'o')
            {
                cout<< name2 <<" Wins!!"<<endl;
            }
        }
        
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y')
            break; 
    }
    
    return 0;
}

