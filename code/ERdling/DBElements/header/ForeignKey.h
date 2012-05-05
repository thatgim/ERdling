/* 
 * File:   ForeignKey.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 23:19
 */

#ifndef IFOREIGNKEY_H
#define	IFOREIGNKEY_H

class IColumn;
class ITable;

class IForeignKey {
public:
    IForeignKey(IColumn*, ITable*, IColumn*);
    virtual ~IForeignKey();
private:
    IColumn* BaseColumn_;
    ITable* ForeignTable_;
    IColumn* ForeignColumn_;
};

#endif	/* IFOREIGNKEY_H */

