/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE194_Unexpected_Sign_Extension__connect_socket_malloc_81_goodG2B.cpp
Label Definition File: CWE194_Unexpected_Sign_Extension.label.xml
Template File: sources-sink-81_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 194 Unexpected Sign Extension
 * BadSource: connect_socket Read data using a connect socket (client side)
 * GoodSource: Positive integer
 * Sinks: malloc
 *    BadSink : Allocate memory using malloc() with the size of data
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE194_Unexpected_Sign_Extension__connect_socket_malloc_81.h"

namespace CWE194_Unexpected_Sign_Extension__connect_socket_malloc_81
{

void CWE194_Unexpected_Sign_Extension__connect_socket_malloc_81_goodG2B::action(short data) const
{
    /* Assume we want to allocate a relatively small buffer */
    if (data < 100)
    {
        /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
         * the conversion will cause malloc() to allocate a very large amount of data or fail */
        char * dataBuffer = (char *)malloc(data);
        /* Do something with dataBuffer */
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

}
#endif /* OMITGOOD */