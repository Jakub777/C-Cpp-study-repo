#include<stdio.h>
int main()
{
    int a[2] = {1, 2};
    void *ptr = &a;
    // mimo że ptr jest void* to GNU GCC zaklada sizeof(*void_ptr) = 1
    // i pozwala na arytmetykę wskazników void - LOL!
    printf("%p\n", ptr);
    printf("%p\n", ptr+2);
    // przykład jak zrobić dereferencję, ze wskaźnika void
    ptr += sizeof(int);
    printf("%d\n", *(int *)ptr);
    return 0;
}
#include<stdio.h>
int main()
{
    int a[2] = {1, 2};
    void *ptr = &a;
    ptr = ptr + sizeof(int);
    printf("%d", *(int *)ptr);
    return 0;
}