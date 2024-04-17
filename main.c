/*****************************************************************************
 * Lab 13 Starter
 * CS1050
 * Spring 2024
 * by Jim Ries
 * 
 * DO NOT CHANGE THIS FILE
 *****************************************************************************/
#include <stdio.h>
#include "university.h"

// Prototypes for functsion to be written in lab13.c
Course GetCourseByDeptAndNumber(char * dept, int number);
Course GetCourseByID(COURSE_ID id);
void PrintCourse(Course c);
Student * GetStudentsByLastName(char * lname);
#ifdef HONORS
Student * GetStudentsByFirstAndLastName(char * fname, char * lname);
#endif

// Main
int main(int argc, char * argv[])
{
    Course c;

    printf("Test #1:\n");
    c=GetCourseByID(5);
    PrintCourse(c);

    printf("\nTest #2:\n");
    c=GetCourseByID(11);
    PrintCourse(c);

    printf("\nTest #3:\n");
    c=GetCourseByID(999);
    PrintCourse(c);

    printf("\nTest #4:\n");
    c=GetCourseByDeptAndNumber("CS",1050);
    PrintCourse(c);

    printf("\nTest #5:\n");
    c=GetCourseByDeptAndNumber("STAT",4540);
    PrintCourse(c);

    printf("\nTest #6:\n");
    c=GetCourseByDeptAndNumber("ZZZZZZZZ",1050);
    PrintCourse(c);

    printf("\nTest #7:\n");
    c=GetCourseByDeptAndNumber("CS",999999);
    PrintCourse(c);

    /////////////////////////////
    // OPTIONAL BONUS TESTS
    /////////////////////////////
    Student * s;
    printf("\nTest #8 (bonus):\n");
    s=GetStudentsByLastName("Ries");
    PrintStudents(s);

    printf("\nTest #9 (bonus):\n");
    s=GetStudentsByLastName("Walkenhorst");
    PrintStudents(s);

    printf("\nTest #10 (bonus):\n");
    s=GetStudentsByLastName("ZZZZZZZZZZZ");
    PrintStudents(s);
    /////////////////////////////
    /////////////////////////////

#ifdef HONORS
    printf("\nTest #11 (honors):\n");
    s=GetStudentsByFirstAndLastName("Charlotte","Ries");
    PrintStudents(s);
#endif

    return 0;
}
