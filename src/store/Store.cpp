
#include <QSqlDatabase>
#include <QStringList>
#include <QTextStream>
#include <QSqlQuery>

#include "Store.h"


#define SQLITE_DB_NAME          "sqlite"
#define TABLE_TIME_RECORDS      "time_records"
#define TABLE_USERS             "users"


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
        CreateTables(db);

    return bSuccess;
}


bool Store::CreateTables(QSqlDatabase &db)
{
    bool bRet = true;
    QStringList tablesList = db.tables();

    if (!tablesList.contains(TABLE_USERS))
    {
        QString queryText;
        QTextStream(&queryText)
                << "create table " << TABLE_USERS
                << " (userid integer NOT NULL PRIMARY KEY, "
                << " name text ), ";

        QSqlQuery query(queryText, db);
        bRet = bRet && query.exec();
    }

    if (!tablesList.contains(TABLE_TIME_RECORDS))
    {
        QString queryText;
        QTextStream(&queryText)
                << "create table " << TABLE_TIME_RECORDS
                << " (userid integer FOREIGN KEY REFERENCES " << TABLE_USERS << "(userid), "
                << " type integer, "
                << " time integer );";

        QSqlQuery query(queryText, db);
        bRet = bRet && query.exec();
    }

    return bRet;
}


bool Store::SetReportTime(ReportType type, t_time iValue)
{
    return false;
}


Store::t_time Store::GetReportedForPeriod(t_time iStartBound, t_time iEndBound, ReportType *pLastReprted /*= NULL*/)
{
    return -1;
}

