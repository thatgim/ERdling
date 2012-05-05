/* 
 * File:   PrimaryKey.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 22:08
 */

#ifndef IPRIMARYKEY_H
#define	IPRIMARYKEY_H

#include <list>

class IColumn;

class IPrimaryKey {
public:
    IPrimaryKey(IColumn*);
    IPrimaryKey(std::list<IColumn*>);
    virtual ~IPrimaryKey();
    
    const std::list<IColumn*>* getColumns();
private:
    std::list<IColumn*> Columns_;
};

#endif	/* IPRIMARYKEY_H */

