/* 
 * File:   ColumnType.h
 * Author: felix
 *
 * Created on 28. April 2012, 21:03
 */

#ifndef COLUMNTYPE_H
#define	COLUMNTYPE_H

class ColumnType {
public:
    ColumnType() {};
    virtual ~ColumnType();
    
    virtual std::string getSQLSpare() = 0;
private:
};

#endif	/* COLUMNTYPE_H */
