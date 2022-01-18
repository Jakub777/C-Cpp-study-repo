int main(int argc, char const *argv[])
{
    
    typedef int   myinteger;
    typedef char* mystring;
    typedef void (*myfunc)();

    //using them like

    myinteger i;   // is equivalent to    int i;
    mystring s;    // is the same as      char* s;
    myfunc f;      // compile equally as  void (*f)();

    return 0;
}
