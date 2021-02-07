#include <cstdio>

class DummyClass
{
    int num = 0;

public:
    void setNum(int value)
    {
        num = value;
    }

    int getNum()
    {
        return num;
    }
};

int main()
{
    DummyClass dummy;
    dummy.setNum(47);

    printf("We set num to: %i\n", dummy.getNum());

    return 0;
}
