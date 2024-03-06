/*Given a matrix of integers, count the number of times each number 0-9 appears. 
Print out your results on one line in the following form: 0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0; */

#include <iostream>
using namespace std;

void count_digits(int array[4][4])
{
    int num_0 = 0;
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int num_4 = 0;
    int num_5 = 0;
    int num_6 = 0;
    int num_7 = 0;
    int num_8 = 0;
    int num_9 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            switch (array[i][j])
            {
            case 0:
                num_0 ++;
                break;

            case 1:
                num_1 ++;
                break;
            
            case 2:
                num_2 ++;
                break;
            
            case 3:
                num_3 ++;
                break;
            
            case 4:
                num_4 ++;
                break;
            
            case 5:
                num_5 ++;
                break;
            
            case 6:
                num_6 ++;
                break;
            
            case 7:
                num_7 ++;
                break;
            
            case 8:
                num_8 ++;
                break;

            case 9:
                num_9 ++;
                break;
            

            }
        }
    }
    cout << "0:" << num_0 << ";1:" << num_1 << ";2:" << num_2 << ";3:" << num_3 << ";4:" << num_4
    << ";5:" << num_5 << ";6:" << num_6 << ";7:" << num_7 << ";8:" << num_8 << ";9:" << num_9 << ";\n";
}