#include"USM.h"

enum StorageStatus
{
    Connected,
    UnConnected,
    NoPermission,
    Expire

}

enum StorageType
{
    VNX,
    VNXe
}

class Storage
{
public:
    Storage(string url, string usr, string pwd)
        : _url(url), _username(usr), _password(pwd)
    {
    }

    bool Connect()
    {
        cout << "connect to " << _url << endl;
    }
    virtual bool GetPools() = 0;
    virtual StorageType GetType() = 0;    
private:
    string _url;
    string _username;
    string _password;

    int _id;
};
