#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;
const int BASE_SCORE = 0;
int main()
{
        int periods;
        int teams;
        vector <vector <int> > scoreBoard;
        cout<<"How many competitors? ";
        cin>>teams;
        cout<<"How many scoring periods? ";
        cin>>periods;

        if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
                        teams > MAX_TEAMS || periods > MAX_PERIODS )
        {
                cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
                cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
                return 0;
        }
        else
        {
                scoreBoard.resize(teams);
                for(int row = 0; row < scoreBoard.size(); row++)
                {

                        scoreBoard[row].resize(periods);
                }

                for(int row = 0; row < scoreBoard.size(); row++)
                {
                        for(int col = 0; col < scoreBoard.size(); col++)
                        {
                                scoreBoard[row][col] = 0;
                        }

                }

                cout<<"SCOREBOARD"<<endl;    
                for(int row = 0; row < scoreBoard.size(); row++)
                {
                        cout<<"Player "<<row + 1<<": ";
                        for( int col = 0; col < scoreBoard[row].size(); col++)
                        {
                                cout<<scoreBoard[row][col]<<"|";
                        }
                        cout<<endl;
                }


                //make scoreboard and fill it with zeros

                //once created, display the scoreboard
        }

        return 0;
}
