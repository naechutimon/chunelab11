// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    srand(time(0));
    string grades[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future." << "\n";
    
    int i =0;
    while(i<3)
    {
        cin.ignore();
        i++;
    }
    
    string prediction = grades[rand()%9];
    cout <<"You will get " << prediction <<" in this 261102."<<"\n";
    
    return 0;
}