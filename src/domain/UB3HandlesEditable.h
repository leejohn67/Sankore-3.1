#ifndef UB3HANDLESEDITABLE_H
#define UB3HANDLESEDITABLE_H

#include "UBEditable.h"

class UB3HandlesEditable : public UBEditable
{
public:
    UB3HandlesEditable();

    UBAbstractHandle *horizontalHandle() const
    {
        return mHandles.at(0);
    }

    UBAbstractHandle *verticalHandle() const
    {
        return mHandles.at(1);
    }

    UBAbstractHandle *diagonalHandle() const
    {
        return mHandles.at(2);
    }
};

#endif // UB3HANDLESEDITABLE_H
