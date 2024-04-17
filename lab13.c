/*****************************************************************************
 * Lab 13 Starter
 * CS1050
 * Spring 2024
 * by Jim Ries
 *****************************************************************************/
#include <stdio.h>
#include "university.h"

// Stubs for functions you need to implement
Course GetCourseByDeptAndNumber(char * dept, int number)
{
    static Course course={-1};
    return course;
}

Course GetCourseByID(COURSE_ID id)
{
    static Course course={-1};
    return course;
}

void PrintCourse(Course c)
{
}

// Stubs for bonus functions you may choose to implement
Student * GetStudentsByLastName(char * lname)
{
    return NULL;
}

#ifdef HONORS
Student * GetStudentsByFirstAndLastName(char * fname, char * lname)
{
    return NULL;
}
#endif

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
