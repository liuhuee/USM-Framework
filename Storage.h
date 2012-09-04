#include"USM.h"
#include"StorageServer.h"

enum StorageStatus
{
    Connected,
    UnConnected,
    NoPermission,
    Expire
};

enum StorageType
{
    VNX,
    VNXe
};

class Storage
{
public:
    Storage(string url, string usr, string pwd)
        : _url(url), _username(usr), _password(pwd)
    {
    }

    virtual bool Connect()
    {
        cout << "connect to storage " << _url << endl;
    }
    //virtual bool GetPools() = 0;
    //virtual StorageType GetType() = 0;    
protected:
    string _url;
    string _username;
    string _password;
    int _id;
    StorageServer* storageServer;
};
