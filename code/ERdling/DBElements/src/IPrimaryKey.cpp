/* 
 * File:   PrimaryKey.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 22:08
 */

#include "../header/IPrimaryKey.h"

IPrimaryKey::IPrimaryKey(IColumn* column) 
{
    this->Columns_ = std::list<IColumn*>();
    Columns_.push_back(column);
}

IPrimaryKey::IPrimaryKey(std::list<IColumn*> columns)
{
    this->Columns_ = columns;
}

IPrimaryKey::~IPrimaryKey() 
{
}

const std::list<IColumn*>* IPrimaryKey::getColumns()
{
    return &this->Columns_;
}