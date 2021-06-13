/*
Author: Arda
Company: PhysTech
Date: 9/26/20
*/
#include  <iostream>
using namespace std;

int main()   {
    pair<int,int> player1,player2;

    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;

    while (n1 && n2 && n3 && n4)
    {
        if(n1>n2)
            player1 = pair<int,int>(n1,n2);
        else
            player1 = pair<int,int>(n2,n1);
        if(n3>n4)
            player2 = pair<int,int>(n3,n4);
        else
            player2 = pair<int,int>(n4,n3);
        if(player1.first == 2 && player1.second == 1)
        {
            if(player1 == player2)
                cout << "Tie." << endl;
            else
                cout << "Player 1 wins." << endl;
        }
        else if(player2.first == 2 && player2.second == 1)
        {
            if(player1 == player2)
                cout << "Tie." << endl;
            else
                cout << "Player 2 wins." << endl;
        }
        else if((player1.first == player1.second) && (player2.second == player2.first))
        {
            if(player1.first>player2.second)
                cout << "Player 1 wins." << endl;
            else if(player2.first == player1.first)
                cout << "Tie." << endl;
            else
                cout << "Player 2 wins." << endl;
        }
        else if(player1.first == player1.second)
            cout << "Player 1 wins." << endl;
        else if(player2.first == player2.second)
            cout << "Player 2 wins." << endl;
        else
        {
            if(player1.first > player2.first)
                cout << "Player 1 wins." << endl;
            else if(player1.first == player2.first)
            {
                if(player1.second < player2.second)
                {
                    cout << "Player 2 wins." << endl;
                }
                else if(player1.second == player2.second)
                    cout << "Tie." << endl;
                else
                    cout << "Player 1 wins." << endl;
            } else
                cout << "Player 2 wins." << endl;
        }
        cin >> n1 >> n2 >> n3 >> n4;

    }
    return 0;
}