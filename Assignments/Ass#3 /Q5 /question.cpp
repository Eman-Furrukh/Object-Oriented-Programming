/*
 * question.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#include <iostream>
#include "question.h"
using namespace std;

question::question()
{
    p1Score = 0;
    p2Score = 0;

    //player 1 questions and choices
    p1_q1 = "How many countries are there in the world?";
    p1_q1_ans1 = " 189 ";
    p1_q1_ans2 = " 190";
    p1_q1_ans3 = " 194";
    p1_q1_ans4 = " 196";
    p1_q1_answer = 4;

    p1_q2 = "When did Pakistan win the Cricket World Cup ";
    p1_q2_ans1 = " 2000";
    p1_q2_ans2 = " 1996";
    p1_q2_ans3 = " 1992";
    p1_q2_ans4 = " 2004";
    p1_q2_answer = 3;

    p1_q3 = " How many letters are there in the English alphabet?";
    p1_q3_ans1 = " 32 ";
    p1_q3_ans2 = " 23 ";
    p1_q3_ans3 = " 24 ";
    p1_q3_ans4 = " 26 ";
    p1_q3_answer = 4;

    p1_q4 = " Who created dynamites? ";
    p1_q4_ans1 = " Alfred Noble ";
    p1_q4_ans2 = " Albert Einstein ";
    p1_q4_ans3 = " Isaac Newton ";
    p1_q4_ans4 = " Thomas Edison ";
    p1_q4_answer = 1;

    p1_q5 = " Which country experiences the coldest weather? ";
    p1_q5_ans1 = " Canada ";
    p1_q5_ans2 = " Greenland ";
    p1_q5_ans3 = " Russia ";
    p1_q5_ans4 = " USA";
    p1_q5_answer = 3;

    //player 2 questions and choices
    p2_q1 = " In which year did Pakistan gain Independence";
    p2_q1_ans1 = " 1940 ";
    p2_q1_ans2 = " 1943 ";
    p2_q1_ans3 = " 1947 ";
    p2_q1_ans4 = " 1948 ";
    p2_q1_answer = 3;

    p2_q2 = " In the board game Monopoly, how many \"Chance\" squares are there?";
    p2_q2_ans1 = " 2 ";
    p2_q2_ans2 = " 3 ";
    p2_q2_ans3 = " 4 ";
    p2_q2_ans4 = " 5 ";
    p2_q2_answer = 2;

    p2_q3 = " How many elements are there in the periodic table? ";
    p2_q3_ans1 = " 110 ";
    p2_q3_ans2 = " 122 ";
    p2_q3_ans3 = " 120 ";
    p2_q3_ans4 = " 118 ";
    p2_q3_answer = 4;

    p2_q4 = " Which country has the highest population? ";
    p2_q4_ans1 = " China ";
    p2_q4_ans2 = " USA ";
    p2_q4_ans3 = " India ";
    p2_q4_ans4 = " Indonesia ";
    p2_q4_answer = 1;

    p2_q5 = " How many continents are there?";
    p2_q5_ans1 = " 6 ";
    p2_q5_ans2 = " 7 ";
    p2_q5_ans3 = " 8 ";
    p2_q5_ans4 = " 9 ";
    p2_q5_answer = 2;


    Player1();
    Player2();
}

void question::Player1()
{
    int usersChoice;
    cout<<"\n\n\n";
    cout<<"Q1) "<<p1_q1;
    cout<<"\n 1.\t"<<p1_q1_ans1;
    cout<<"\n 2.\t"<<p1_q1_ans2;
    cout<<"\n 3.\t"<<p1_q1_ans3;
    cout<<"\n 4.\t"<<p1_q1_ans4;
    cout<<"\n Answer: \t";
    cin>>usersChoice;
    if(usersChoice == p1_q1_answer)
    {
        p1Score += 10;
    }

    cout<<"Q2) "<<p1_q2;
    cout<<"\n 1.\t"<<p1_q2_ans1;
    cout<<"\n 2.\t"<<p1_q2_ans2;
    cout<<"\n 3.\t"<<p1_q2_ans3;
    cout<<"\n 4.\t"<<p1_q2_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
        if(usersChoice == p1_q2_answer)
        {
            p1Score += 10;
        }

    cout<<"Q3) "<<p1_q3;
    cout<<"\n 1.\t"<<p1_q3_ans1;
    cout<<"\n 2.\t"<<p1_q3_ans2;
    cout<<"\n 3.\t"<<p1_q3_ans3;
    cout<<"\n 4.\t"<<p1_q3_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;

	if(usersChoice == p1_q3_answer)
	{
		p1Score += 10;
	}

    cout<<"Q4) "<<p1_q4;
    cout<<"\n 1.\t"<<p1_q4_ans1;
    cout<<"\n 2.\t"<<p1_q4_ans2;
    cout<<"\n 3.\t"<<p1_q4_ans3;
    cout<<"\n 4.\t"<<p1_q4_ans4;
    cout<<"\n Answer: \t";
    cin>>usersChoice;

	if(usersChoice == p1_q4_answer)
	{
		p1Score += 10;
	}

    cout<<"Q5) "<<p1_q5;
    cout<<"\n 1.\t"<<p1_q5_ans1;
    cout<<"\n 2.\t"<<p1_q5_ans2;
    cout<<"\n 3.\t"<<p1_q5_ans3;
    cout<<"\n 4.\t"<<p1_q5_ans4;
    cout<<"\n Answer: ";
    cin>>usersChoice;

	if(usersChoice == p1_q5_answer)
	{
		p1Score += 10;
	}

    cout<<"Player 1's score is: "<<p1Score<<endl;
}

void question::Player2()
{
    int usersChoice = 0;
    cout<<"\n\n\n";
    cout<<"Q1) "<<p2_q1;
    cout<<"\n 1.\t"<<p2_q1_ans1;
    cout<<"\n 2.\t"<<p2_q1_ans2;
    cout<<"\n 3.\t"<<p2_q1_ans3;
    cout<<"\n 4.\t"<<p2_q1_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
    if(usersChoice == p2_q1_answer)
	{
		p2Score += 10;
	}

    cout<<"Q2) "<<p2_q2;
    cout<<"\n 1.\t"<<p2_q2_ans1;
    cout<<"\n 2.\t"<<p2_q2_ans2;
    cout<<"\n 3.\t"<<p2_q2_ans3;
    cout<<"\n 4.\t"<<p2_q2_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
    if(usersChoice == p2_q2_answer)
	{
		p2Score += 10;
	}

    cout<<"Q3) "<<p2_q3;
    cout<<"\n 1.\t"<<p2_q3_ans1;
    cout<<"\n 2.\t"<<p2_q3_ans2;
    cout<<"\n 3.\t"<<p2_q3_ans3;
    cout<<"\n 4.\t"<<p2_q3_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
    if(usersChoice == p2_q3_answer)
	{
		p2Score += 10;
	}

    cout<<"Q4) "<<p2_q4;
    cout<<"\n 1.\t"<<p2_q4_ans1;
    cout<<"\n 2.\t"<<p2_q4_ans2;
    cout<<"\n 3.\t"<<p2_q4_ans3;
    cout<<"\n 4.\t"<<p2_q4_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
    if(usersChoice == p2_q4_answer)
	{
		p2Score += 10;
	}

    cout<<"Q5) "<<p2_q5;
    cout<<"\n 1.\t"<<p2_q5_ans1;
    cout<<"\n 2.\t"<<p2_q5_ans2;
    cout<<"\n 3.\t"<<p2_q5_ans3;
    cout<<"\n 4.\t"<<p2_q5_ans4;
    cout<<"\n Answer : \t";
    cin>>usersChoice;
    if(usersChoice == p2_q5_answer)
	{
		p2Score += 10;
	}

    cout<<"Player 2's score is: "<<p2Score<<endl;
}

//determines who the winner is
void question::Result() {
	if(p1Score > p2Score)
		cout<<"PLAYER 1 IS THE WINNER! \n";
	else if (p2Score > p1Score)
		cout<<"PLAYER 2 IS THE WINNER! \n";
	else
		cout<<"GAME HAS ENDED IN A DRAW :)";
}
