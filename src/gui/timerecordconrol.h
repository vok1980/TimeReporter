#ifndef TIMERECORDCONROL_H
#define TIMERECORDCONROL_H

#include <tr1/memory>

#include <QTime>

class Store;


class TimeRecordConrol
{
public:
    TimeRecordConrol();
    virtual ~TimeRecordConrol();

public:
    void CangeState(bool bStarted);
    QTime GetTime();

private:
    std::tr1::shared_ptr<Store> m_pStore;
};


#endif // TIMERECORDCONROL_H
