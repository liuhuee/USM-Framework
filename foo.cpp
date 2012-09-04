#include"Storage.h"

int main()
{
    Storage* storage = new Storage("http", "user", "pwd");
    storage->Connect();

    return 0;
}
