/* 
 * File:   ForeignKey.h
 * Author: felix
 *
 * Created on 4. Mai 2012, 23:19
 */

#ifndef FOREIGNKEY_H
#define	FOREIGNKEY_H

class Column;
class Table;

class ForeignKey {
public:
    ForeignKey(Column*, Table*, Column*);
    virtual ~ForeignKey();
private:
    Column* BaseColumn_;
    Table* ForeignTable_;
    Column* ForeignColumn_;
};

#endif	/* FOREIGNKEY_H */

