#ifndef HUMANPRIEST_H
#define HUMANPRIEST_H

#include "minion.h"
#include "battle.h"

class HumanPriest : public Minion
{
public:
    HumanPriest(int group, Battle *battle, QObject *parent);

    virtual void active();
};

#endif // HUMANPRIEST_H
