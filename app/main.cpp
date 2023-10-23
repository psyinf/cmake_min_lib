#include <minLib.h>



int main([[maybe_unused]]int argc,[[maybe_unused]] char** argv)
{
    minLib::ClassWithWarnings cww;
    cww.doSomething();
    minLib::doSomethingElse(10);
    return 0;
}   