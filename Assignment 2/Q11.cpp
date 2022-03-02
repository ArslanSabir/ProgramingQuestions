/*xi.	Write a program to calculate GPA of the semester, assuming there are 5 courses and each course is having following break-up:
Mid-Term Marks: 35  Final: 50   Quiz: 5 Assignment: 10 */

#include <iostream>
#include <iomanip>
using namespace std;

float Course_Percent(int Q1, int Q2, int Q3, int Q4, float A1, float A2, float A3, float A4, float mid, float final)
{
    int Quiz;
    float Assignment;
    float MidTerm, FinalTerm, Total;

    // Quizzes weightage (per Quiz T.Marks =10)
    Quiz = ((Q1 + Q2 + Q3 + Q4) / (10 * 4)) * 5;

    // Assignments weightage (per Assignment T.Marks =20)
    Assignment = ((A1 + A2 + A3 + A4) / (20 * 4)) * 10;

    //  Mid-term weightage (Mid T.Marks= 40)
    MidTerm = (mid / 40) * 35;

    //  Final-term weightage (Final T.Marks= 65)
    FinalTerm = (final / 65) * 50;

    Total = Quiz + Assignment + MidTerm + FinalTerm;

    // cout<< "total % is "<<Total;
    return Total;
}

main()
{
    string C1, C2, C3, C4, C5;
    int C1Q1, C1Q2, C1Q3, C1Q4, C2Q1, C2Q2, C2Q3, C2Q4, C3Q1, C3Q2, C3Q3, C3Q4, C4Q1, C4Q2, C4Q3, C4Q4, C5Q1, C5Q2, C5Q3, C5Q4;
    float C1A1, C1A2, C1A3, C1A4, C1Mid, C1Final, C2A1, C2A2, C2A3, C2A4, C2Mid, C2Final, C3A1, C3A2, C3A3, C3A4, C3Mid, C3Final, C4A1, C4A2, C4A3, C4A4, C4Mid, C4Final, C5A1, C5A2, C5A3, C5A4, C5Mid, C5Final;

    cout << "\n\n\t\t ******** Enter data for first Course ********  \n\n";
    cout << "\n  Enter the name of first course:  ";
    cin >> C1;
    cout << "\n  Enter Obtained Marks of Quizzes (out of 10) as:\n Quiz_1  Quiz_2  Quiz_3  Quiz_4 \n  ";
    cin >> C1Q1 >> C1Q2 >> C1Q3 >> C1Q4;
    cout << "\n  Enter Obtained Marks of Assignment (out of 20) as:\n Assignment_1  Assignment_2  Assignment_3  Assignment_4 \n\t";
    cin >> C1A1 >> C1A2 >> C1A3 >> C1A4;
    cout << "\n  Enter Obtained Marks (out of 40) of Mid-Term:  ";
    cin >> C1Mid;
    cout << "\n  Enter Obtained Marks (out of 65) of Final-Term:  ";
    cin >> C1Final;

    cout << "\n\n\t\t ******** Enter data for second Course ********  \n\n";
    cout << "\n  Enter the name of second course:  ";
    cin >> C2;
    cout << "\n  Enter Obtained Marks of Quizzes (out of 10) as:\n Quiz_1  Quiz_2  Quiz_3  Quiz_4 \n  ";
    cin >> C2Q1 >> C2Q2 >> C2Q3 >> C2Q4;
    cout << "\n  Enter Obtained Marks of Assignment (out of 20) as:\n Assignment_1  Assignment_2  Assignment_3  Assignment_4 \n\t";
    cin >> C2A1 >> C2A2 >> C2A3 >> C2A4;
    cout << "\n  Enter Obtained Marks of (out of 40) Mid-Term:  ";
    cin >> C2Mid;
    cout << "\n  Enter Obtained Marks of (out of 65) Final-Term:  ";
    cin >> C2Final;

    cout << "\n\n\t\t ******** Enter data for third Course ********  \n\n";
    cout << "\n  Enter the name of third course:  ";
    cin >> C3;
    cout << "\n  Enter Obtained Marks of Quizzes (out of 10) as:\n Quiz_1  Quiz_2  Quiz_3  Quiz_4 \n  ";
    cin >> C3Q1 >> C3Q2 >> C3Q3 >> C3Q4;
    cout << "\n  Enter Obtained Marks of Assignment (out of 20) as:\n Assignment_1  Assignment_2  Assignment_3  Assignment_4 \n\t";
    cin >> C3A1 >> C3A2 >> C3A3 >> C3A4;
    cout << "\n  Enter Obtained Marks of (out of 40) Mid-Term:  ";
    cin >> C3Mid;
    cout << "\n  Enter Obtained Marks of (out of 65) Final-Term:  ";
    cin >> C3Final;

    cout << "\n\t\t ******** Enter data for fourth Course ********  \n\n";
    cout << "\n  Enter the name of fourth course:  ";
    cin >> C4;
    cout << "\n  Enter Obtained Marks of Quizzes (out of 10) as:\n Quiz_1  Quiz_2  Quiz_3  Quiz_4 \n  ";
    cin >> C4Q1 >> C4Q2 >> C4Q3 >> C4Q4;
    cout << "\n  Enter Obtained Marks of Assignment (out of 20) as:\n Assignment_1  Assignment_2  Assignment_3  Assignment_4 \n\t";
    cin >> C4A1 >> C4A2 >> C4A3 >> C4A4;
    cout << "\n  Enter Obtained Marks of (out of 40) Mid-Term:  ";
    cin >> C4Mid;
    cout << "\n  Enter Obtained Marks of (out of 65) Final-Term:  ";
    cin >> C4Final;

    cout << "\n\t\t ******** Enter data for fifth Course ********  \n\n";
    cout << "\n  Enter the name of fifth course:  ";
    cin >> C5;
    cout << "\n  Enter Obtained Marks of Quizzes (out of 10) as:\n Quiz_1  Quiz_2  Quiz_3  Quiz_4 \n  ";
    cin >> C5Q1 >> C5Q2 >> C5Q3 >> C5Q4;
    cout << "\n  Enter Obtained Marks of Assignment (out of 20) as:\n Assignment_1  Assignment_2  Assignment_3  Assignment_4 \n\t";
    cin >> C5A1 >> C5A2 >> C5A3 >> C5A4;
    cout << "\n  Enter Obtained Marks of (out of 40) Mid-Term:  ";
    cin >> C5Mid;
    cout << "\n  Enter Obtained Marks of (out of 65) Final-Term:  ";
    cin >> C5Final;

    float T1 = Course_Percent(C1Q1, C1Q2, C1Q3, C1Q4, C1A1, C1A2, C1A3, C1A4, C1Mid, C1Final);
    float T2 = Course_Percent(C2Q1, C2Q2, C2Q3, C2Q4, C2A1, C2A2, C2A3, C2A4, C2Mid, C2Final);
    float T3 = Course_Percent(C3Q1, C3Q2, C3Q3, C3Q4, C3A1, C3A2, C3A3, C3A4, C3Mid, C3Final);
    float T4 = Course_Percent(C4Q1, C4Q2, C4Q3, C4Q4, C4A1, C4A2, C4A3, C4A4, C4Mid, C4Final);
    float T5 = Course_Percent(C5Q1, C5Q2, C5Q3, C5Q4, C5A1, C5A2, C5A3, C5A4, C5Mid, C5Final);

    float TotalPerc = (T1 + T2 + T3 + T4 + T5) / 5;

    string G1, G2, G3, G4, G5, Grade;
    float gpa1, gpa2, gpa3, gpa4, gpa5, GPA;

    //  grading for Course 1
    if (T1 >= 90 && T1 <= 100)
        G1 = "A+";
    else if (T1 >= 85 && T1 < 90)
        G1 = 'A';
    else if (T1 >= 80 && T1 < 85)
        G1 = "A-";
    else if (T1 >= 75 && T1 < 80)
        G1 = "B+";
    else if (T1 >= 71 && T1 < 75)
        G1 = "B";
    else if (T1 >= 68 && T1 < 71)
        G1 = "B-";
    else if (T1 >= 61 && T1 < 68)
        G1 = 'C';
    else if (T1 >= 50 && T1 < 61)
        G1 = 'D';
    else
        G1 = 'F';

    //  grading for Course 2
    if (T2 >= 90 && T2 <= 100)
        G2 = "A+";
    else if (T2 >= 85 && T2 < 90)
        G2 = 'A';
    else if (T2 >= 80 && T2 < 85)
        G2 = "A-";
    else if (T2 >= 75 && T2 < 80)
        G2 = "B+";
    else if (T2 >= 71 && T2 < 75)
        G2 = 'B';
    else if (T2 >= 68 && T2 < 71)
        G2 = "B-";
    else if (T2 >= 61 && T2 < 68)
        G2 = 'C';
    else if (T2 >= 50 && T2 < 61)
        G2 = 'D';
    else
        G2 = 'F';

    //  grading for Course 3
    if (T3 >= 90 && T3 <= 100)
        G3 = "A+";
    else if (T3 >= 85 && T3 < 90)
        G3 = 'A';
    else if (T3 >= 80 && T3 < 85)
        G3 = "A-";
    else if (T3 >= 75 && T3 < 80)
        G3 = "B+";
    else if (T3 >= 71 && T3 < 75)
        G3 = 'B';
    else if (T3 >= 68 && T3 < 71)
        G3 = "B-";
    else if (T3 >= 61 && T3 < 68)
        G3 = 'C';
    else if (T3 >= 50 && T3 < 61)
        G3 = 'D';
    else
        G3 = 'F';

    //  grading for Course 4
    if (T4 >= 90 && T4 <= 100)
        G1 = "A+";
    else if (T4 >= 85 && T4 < 90)
        G4 = 'A';
    else if (T4 >= 80 && T4 < 85)
        G4 = "A-";
    else if (T4 >= 75 && T4 < 80)
        G4 = "B+";
    else if (T4 >= 71 && T4 < 75)
        G4 = 'B';
    else if (T4 >= 68 && T4 < 71)
        G4 = "B-";
    else if (T4 >= 61 && T1 < 68)
        G4 = 'C';
    else if (T4 >= 50 && T4 < 61)
        G4 = 'D';
    else
        G4 = 'F';

    //  grading for Course 5
    if (T5 >= 90 && T5 <= 100)
        G5 = "A+";
    else if (T5 >= 85 && T5 < 90)
        G5 = 'A';
    else if (T5 >= 80 && T5 < 85)
        G5 = "A-";
    else if (T5 >= 75 && T5 < 80)
        G5 = "B+";
    else if (T5 >= 71 && T5 < 75)
        G5 = 'B';
    else if (T5 >= 68 && T5 < 71)
        G5 = "B-";
    else if (T5 >= 61 && T5 < 68)
        G5 = 'C';
    else if (T5 >= 50 && T5 < 61)
        G5 = 'D';
    else
        G5 = 'F';

    // gpa for  courses indiviually
    gpa1 = (T1 / 100) * 4;
    gpa2 = (T2 / 100) * 4;
    gpa3 = (T3 / 100) * 4;
    gpa4 = (T4 / 100) * 4;
    gpa5 = (T5 / 100) * 4;

    int cre1, cre2, cre3, cre4, cre5, credit;
    // credit of all course is 3
    cre1 = cre2 = cre3 = cre4 = cre5 = 3;
    credit = cre1 + cre2 + cre3 + cre4 + cre5;
    //  overall gpa of all courses of semester
    GPA = (gpa1 * cre1 + gpa2 * cre2 + gpa3 * cre3 + gpa4 * cre4 + gpa5 * cre5) / credit;

    cout << "\n\t\t\t*****************************************";
    cout << "\n\n\t\t\t\t The Semester GPA is: " << fixed << setprecision(2) << GPA;
    cout << "\n\n\t\t\t*****************************************";

    cout << "\n\n**************************************************************************";
    cout << "\n\n Course# \t"
         << "Course \t\t"
         << "Grade Points \t"
         << "Grade \t"
         << "Percentage \n\n";
    cout << "**************************************************************************\n\n";

    cout << "   1 \t\t" << C1 << "\t\t" << fixed << setprecision(2) << gpa1 << "\t\t" << G1 << "   \t" << T1 << " % \n\n";
    cout << "   2 \t\t" << C2 << "\t\t" << fixed << setprecision(2) << gpa2 << "\t\t" << G2 << "   \t" << T2 << " % \n\n";
    cout << "   3 \t\t" << C3 << "\t\t" << fixed << setprecision(2) << gpa3 << "\t\t" << G3 << "   \t" << T3 << " % \n\n";
    cout << "   4 \t\t" << C4 << "\t\t" << fixed << setprecision(2) << gpa4 << "\t\t" << G4 << "   \t" << T4 << " % \n\n";
    cout << "   5 \t\t" << C5 << "\t\t" << fixed << setprecision(2) << gpa5 << "\t\t" << G5 << "   \t" << T5 << " % \n\n";
}