/*
 * question.h
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#ifndef QUESTION_H_
#define QUESTION_H_
#include <string>

class question {
    int p1Score;
    int p2Score;

    //player 1
    string p1_q1;
    string p1_q1_ans1;
    string p1_q1_ans2;
    string p1_q1_ans3;
    string p1_q1_ans4;
    int p1_q1_answer;

    string p1_q2;
    string p1_q2_ans1;
    string p1_q2_ans2;
    string p1_q2_ans3;
    string p1_q2_ans4;
    int p1_q2_answer;

    string p1_q3;
    string p1_q3_ans1;
    string p1_q3_ans2;
    string p1_q3_ans3;
    string p1_q3_ans4;
    int p1_q3_answer;

    string p1_q4;
    string p1_q4_ans1;
    string p1_q4_ans2;
    string p1_q4_ans3;
    string p1_q4_ans4;
    int p1_q4_answer;

    string p1_q5;
    string p1_q5_ans1;
    string p1_q5_ans2;
    string p1_q5_ans3;
    string p1_q5_ans4;
    int p1_q5_answer;

    //Player 2
    string p2_q1;
    string p2_q1_ans1;
    string p2_q1_ans2;
    string p2_q1_ans3;
    string p2_q1_ans4;
    int p2_q1_answer;

    string p2_q2;
    string p2_q2_ans1;
    string p2_q2_ans2;
    string p2_q2_ans3;
    string p2_q2_ans4;
    int p2_q2_answer;

    string p2_q3;
    string p2_q3_ans1;
    string p2_q3_ans2;
    string p2_q3_ans3;
    string p2_q3_ans4;
    int p2_q3_answer;

    string p2_q4;
    string p2_q4_ans1;
    string p2_q4_ans2;
    string p2_q4_ans3;
    string p2_q4_ans4;
    int p2_q4_answer;

    string p2_q5;
    string p2_q5_ans1;
    string p2_q5_ans2;
    string p2_q5_ans3;
    string p2_q5_ans4;
    int p2_q5_answer;

public:
    question();
    void Player1();
    void Player2();
    void Result();
};


#endif /* QUESTION_H_ */
