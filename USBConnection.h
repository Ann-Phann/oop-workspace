#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <iostream>

class USBConnection
{
private:
    USBConnection(int newID) : id(newID)
    {
        available_ids.pop();
    }
    
    int id;
    static std::stack<int> available_ids;


public:
    ~USBConnection()
    {
        available_ids.push(id);
    }

    static USBConnection* CreateUsbConnection()
    {
        if (available_ids.empty())
        {
            return nullptr;
        }
        else
        {
            return new USBConnection(available_ids.top());
        }
    }
    
    int get_id()
    {
        return id;
    }

    USBConnection(const USBConnection&) = delete;
    USBConnection& operator=(const USBConnection&) = delete;
};

std::stack<int> USBConnection::available_ids({3, 2, 1});
#endif