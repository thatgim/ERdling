/* 
 * File:   Column.cpp
 * Author: felix
 * 
 * Created on 28. April 2012, 20:57
 */

#include "../header/Column.h"

Column::Column(ColumnType*) {
}

Column::~Column() {
}

const ColumnType* Column::getColumnType()
{
    return Column::ColumnType_;
}

