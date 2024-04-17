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
