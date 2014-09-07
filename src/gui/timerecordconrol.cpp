
#include "timerecordconrol.h"

#include "../store/Store.h"


TimeRecordConrol::TimeRecordConrol()
{    
    m_pStore = std::tr1::shared_ptr<Store> (new Store);
    m_pStore->InitConnection();
}


TimeRecordConrol::~TimeRecordConrol()
{
}


QTime TimeRecordConrol::GetTime()
{
    static int i = 0;
    QTime time(1, i++, 3);
    return time;
}


void TimeRecordConrol::CangeState(bool bStarted)
{
    int a = 56;
}

