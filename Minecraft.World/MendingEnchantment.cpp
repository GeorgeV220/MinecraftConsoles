#include "stdafx.h"
#include "MendingEnchantment.h"


MendingEnchantment::MendingEnchantment(int id, int frequency) : Enchantment(id, frequency, EnchantmentCategory::all)
{
    setDescriptionId(IDS_ENCHANTMENT_MENDING);
}

int MendingEnchantment::getMinCost(int level)
{
    return 20;
}

int MendingEnchantment::getMaxCost(int level)
{
    return 50;
}

int MendingEnchantment::getMaxLevel()
{
    return 1;
}