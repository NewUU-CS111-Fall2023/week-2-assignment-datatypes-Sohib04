/*
 * Author:Abdimannabov Sohibjon
 * Date:10/25/2023
 */

#include <iostream>
#include "task_1.h"
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {
    cout << "Task 1" << endl;
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if(year%400 == 0){
        cout<<year<<" is a leap year"<<endl;
    }
    else if(year%4 == 0){
        cout<<year<<" is a leap year"<<endl;
    }
    else if(year%100 == 0){
        cout<<year<<" is not a leap year"<<endl;
    }
    else{
        cout<<year<<" is not a leap year"<<endl;
    }

    cout << "Task 2" << endl;
    srand((unsigned) time(0));
    int random = rand()%100;
    cout<<"Enter your guess: ";
    int guess;
    cin>>guess;
    while(guess!=random){
        if(guess>random){
            cout<<"Too high!"<<endl;
        }
        else if(guess<random){
            cout<<"Too low!"<<endl;
        }
        cin>>guess;
    }
    if(guess==random){
        cout<<"Correct!"<<endl;
    }

    cout << "Task 3" << endl;
    int A;
    cin>>A;
    string hundredDigitNumber = "";
    for (int i = 0; i < 100; i++) {
        hundredDigitNumber += (rand() % 10) + 48;
        }
    long double result = stold(hundredDigitNumber) / A;
    cout<<"Result: "<<result<<endl;

    cout << "Task 4" << endl;
    string sentence, word;
    cout << "Enter a sentence: ";
    cin>>sentence;
    cout << "Enter a word: ";
    cin>>word;
    
    size_t index = sentence.find(word);
    if(index != string::npos){
        cout<<index<<endl;
    }
    else{
        cout<<"No match"<<endl;
    }
    cout << "Task 5" << endl;
    cout<<"Map size is 10x10"<<endl;
    int n;
    int counter = 0;
    cout<<"Enter N: ";
    cin>>n;
    int x, y;
    int enemyX, enemyY;
    enemyX = rand()%10;
    enemyY = rand()%10;
    bool status = true;
    while(status==true && counter<n){
       cout<<"Enter x, then y: ";
       cin>>x>>y; 
       if((x<0 && x>10) || (y<0 && y>10)){
        cout<<"Character died"<<endl;
        break;
       }
       else if(x == enemyX && y == enemyY){
        cout<<"Character died"<<endl;
        break;
       }
       else{
        cout<<"Character is alive"<<endl;
       }
       counter++;
    }
    cout<<"Enemy coordinates were: "<<"X:"<<enemyX<<" Y:"<<enemyY<<endl;
    return 0;
}
