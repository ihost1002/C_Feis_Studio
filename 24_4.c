/*
 * pointers and const
 */
#include <stdio.h>

int main(void) {
    char strA[5] = "test";
    char *strB = "test";
    const char *strC = "Test";
    char *originStrB = strB;
    
    /* cannot assign to array
    strA = strB;
    strA = strC;
    */
    strA[0] = 'T';
    /* undefined behavior, don't write this
     * in my raspberry pi, it result Segmentation fault when excute
    strB[0] = 'T';
     */
    printf("strA[0] = %c, strA[0] at %p, strA[1] at %p\n", strA[0], strA, strA+1);
    printf("strB[0] = %c, strB[0] at %p\n", strB[0], strB);
    printf("strC[0] = %c, strC[0] at %p\n", strC[0], strC);
    
    
    strB = strA;
    printf("assignment from strA, now strB[0] = %c, strB[0] at %p\n", strB[0], strB);
    strB = strC; // show warnning but can read 
    printf("assignment from strC, now strB[0] = %c, strB[0] at %p\n", strB[0], strB);
    /* try to change read-only location will cause segmentation fault
    strB[0] = 'U';
	*/
	strB = originStrB;

    strC = strA; // char * type of strA will casting to const char *
    printf("assignment from strA, now strC[0] = %c, strC[0] at %p\n", strC[0], strC);
    /* try to change content will not allowed
    strC[0] = 'U';
    */

    // but can i change content from strA? let's try that
    strA[0] = 'U'; // no syntax error
    // then get message from strC
    printf("strC = %s\n", strC);

    strC = strB;
    printf("assignment from strA, now strC[0] = %c, strC[0] at %p\n", strC[0], strC);
    /* try to change content will not allowed too
    strC[0] = 'U';
    */
    

    return 0;
}
