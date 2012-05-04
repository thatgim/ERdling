/* 
 * File:   Table.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 21:55
 */

#ifndef TABLE_H
#define	TABLE_H

#include "Column.h"
#include "PrimaryKey.h"
#include <list>

class Table {
public:
    Table(std::string);
    virtual ~Table();

    const std::string* getName();
    const std::list<Column*>* getColumns();
private:
    std::string Name_;
    std::list<Column*> Columns_;
    PrimaryKey* Primarykey_;
};

#endif	/* TABLE_H */

