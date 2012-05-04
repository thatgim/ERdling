/* 
 * File:   PrimaryKey.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 22:08
 */

#ifndef PRIMARYKEY_H
#define	PRIMARYKEY_H

#include <list>

class Column;

class PrimaryKey {
public:
    PrimaryKey(Column*);
    PrimaryKey(std::list<Column*>);
    virtual ~PrimaryKey();
    
    const std::list<Column*>* getColumns();
private:
    std::list<Column*> Columns_;
};

#endif	/* PRIMARYKEY_H */

