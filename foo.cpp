#include"VNXeStorage.h"

int main()
{
    Storage* storage = new VNXeStorage("http", "user", "pwd");
    storage->Connect();

    return 0;
}
