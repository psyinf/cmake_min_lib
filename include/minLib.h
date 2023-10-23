#pragma once

namespace minLib{
 
class ClassWithWarnings
{
public:
    ClassWithWarnings() = default;  
    ~ClassWithWarnings() = default;
    void doSomething();
};

inline float doSomethingElse(double x) {
    return 1e23 + 0.00000000000001;
}
 
} //namespace myLib