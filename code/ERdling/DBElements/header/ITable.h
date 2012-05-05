/* 
 * File:   Table.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 21:55
 */

#ifndef ITABLE_H
#define	ITABLE_H

#include <list>
#include <iostream>

class IColumn;
class IPrimaryKey;
class IForeignKey;

class ITable {
public:
    ITable(std::string);
    virtual ~ITable();

    const std::string* getName();
    const std::list<IColumn*>* getColumns();
private:
    std::string Name_;
    std::list<IColumn*> Columns_;
    IPrimaryKey* Primarykey_;
    std::list<IForeignKey*> ForeignKeys_;
};

#endif	/* ITABLE_H */

