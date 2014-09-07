
#include <QSqlDatabase>
#include <QStringList>
#include <QTextStream>
#include <QSqlQuery>

#include "Store.h"


#define SQLITE_DB_NAME          "sqlite"
#define TABLE_TIME_RECORDS      "time_records"


Store::Store()
{}


Store::~Store()
{}


bool Store::InitConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", SQLITE_DB_NAME);
    db.setDatabaseName("timereport.db");
    db.open();
    bool bSuccess = db.isOpen();

    if (bSuccess)
        CreateTables(SQLITE_DB_NAME);

    return bSuccess;
}


bool Store::CreateTables(const QString &strDbName)
{
    bool bRet = false;
    QSqlDatabase db = QSqlDatabase::database(strDbName);
    QStringList tablesList = db.tables();

    if (!tablesList.contains(TABLE_TIME_RECORDS))
    {
        QString queryText;
        QTextStream(&queryText)
                << "create table " << TABLE_TIME_RECORDS
                << " (userid integer, "
                << " type integer, "
                << " time integer );";

        QSqlQuery query(queryText, db);
        bRet = query.exec();
    }
}


bool Store::SetReportTime(ReportType type, t_time iValue)
{
    return false;
}


Store::t_time Store::GetReportedForPeriod(t_time iStartBound, t_time iEndBound, ReportType *pLastReprted /*= NULL*/)
{
    return -1;
}

