/* 
 * File:   Table.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 21:55
 */

#ifndef TABLE_H
#define	TABLE_H

#include "Column.h"
#include <list>

class Table {
public:
    Table(std::string);
    virtual ~Table();

    const std::string* getName();
    const std::list<Column> getColumns();
private:
    std::list<Column> Columns;
    std::string Name;
};

#endif	/* TABLE_H */

