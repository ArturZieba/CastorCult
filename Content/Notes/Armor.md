# Armor
## Related files
### ArmorDataTable.cpp/ArmorDataTable.h
- Contains struct for the DT_Armor.uasset.
### ArmorVariablesBank.cpp/ArmorVariablesBank.h
- Contains struct for the DT_ArmorVariablesBank.uasset.
### DT_Armor.json/DT_Armor.uasset
- Contains a list of all armor pieces with all of their asociated variables.
### DT_ArmorVariablesBank.json/DT_ArmorVariablesBank.uasset
- Contains a list of all variables that can be used in armor pieces.

## Armor types
### Helmet (High Strength/High Endurance)
- Head slot, low armor, low block chance.

### Mask (Medium Endurance)
- Head slot, low armor.

### Veil (High Faith/Low Endurance)
- Head slot, !!!PH!!!

### Circlet (High Intelligence/Low Endurance)
- Head slot, !!!PH!!!

### Breastplate (High Strength/High Endurance)
- Chest slot, high armor, medium block chance.

### Jacket (Medium Endurance)
- Chest slot, medium armor.

### Robe (High Faith/Low Endurance)
- Chest slot, !!!PH!!!

### Tunic (High Intelligence/Low Endurance)
- Chest slot, !!!PH!!!

### Gauntlets (High Strength/High Endurance)
- Hands slot, low armor, low block chance.

### Mitts (Medium Endurance)
- Hands slot, low armor.

### Manchettes (High Faith/Low Endurance)
- Hands slot, !!!PH!!!

### Bracelets (High Intelligence/Low Endurance)
- Hands slot, !!!PH!!!

### Sabatons (High Strength/High Endurance)
- Boots slot, low armor, low block chance.

### Boots (Medium Endurance)
- Boots slot, low armor.

### Sandals (High Faith/Low Endurance)
- Boots slot, !!!PH!!!

### Slippers (High Intelligence/Low Endurance)
- Boots slot, !!!PH!!!

### Relic (Variable Attributes)
- Relic slot, !!!PH!!!

## (!!!PH!!!)Item tiers
(!!!PH!!!)Tiers explain how good items in each category are in comparison to each other where Tier 1 is the best. So for example if there are 5 base Two Handed Axes, Tier 5 one will be the weakest/available the earliest and Tier 1 would be the best but the hardest to access/use.

## Armor list
### Helmet (High Strength/High Endurance)
- Rusted Casque (Tier 1)
  - An old metal helmet, getting a bit rusty.

### Mask (Medium Endurance)
- Bandana (Tier 1)
  - A simple folded piece of cloth.

### Veil (High Faith/Low Endurance)
- Torn Veil (Tier 1)
  - Veil covering the face, but a little worse for wear.

### Circlet (High Intelligence/Low Endurance)
- Old Circlet (Tier 1)
  - Copper circlet covered with patina.

### Breastplate (High Strength/High Endurance)
- Rusted Cuirass (Tier 1)
  - A piece of rusted bent plate covering the chest. Better than nothing.

### Jacket (Medium Endurance)
- Leather Jacket (Tier 1)
  - Old worn jacket made from animal leather.

### Robe (High Faith/Low Endurance)
- Tattered Robe (Tier 1)
  - Warm robe, tattered over time.

### Tunic (High Intelligence/Low Endurance)
- Damp Tunic (Tier 1)
  - Tunic which seemingly was stored in a humid place.

### Gauntlets (High Strength/High Endurance)
- Iron Gloves (Tier 1)
  - A pair of raw iron gloves.

### Mitts (Medium Endurance)
- Leather Gloves (Tier 1)
  - A pair of rough leather gloves.

### Manchettes (High Faith/Low Endurance)
- Torn Manchettes (Tier 1)
  - Old pair of torn manchettes.

### Bracelets (High Intelligence/Low Endurance)
- Old Bracelets (Tier 1)
  - Copper Bracelets almost completely covered in patina.

### Sabatons (High Strength/High Endurance)
- Iron Shinplates (Tier 1)
  - A pair of small iron plates bound around the shins for protection.

### Boots (Medium Endurance)
- Leather Boots (Tier 1)
  - Worn boots made from animal leather.

### Sandals (High Faith/Low Endurance)
- Worn Sandals (Tier 1)
  - Better than walking barefoot.

### Slippers (High Intelligence/Low Endurance)
- Torn Slippers (Tier 1)
  - They used to be comfortable once.

### Relic (Variable Attributes)
- !!!PH!!!

## Armor base stats
### Armour
- Integer value indicating Armour amount. Each point of armour reduces physcial damage by that amount, but to no less than 1.
  - For example: 1 Armour will reduce 10 physical damage hit to 9 (10 - 1 = 9), 11 Armour will reduce 10 physical damage hit to 1 (10 - 11 = -1, however physical damage cannot be reduced to less than 1 by Armour).

### Block Chance
- Float value indicating armor's base Block Chance. Blocking a hit causes it to deal no damage. Lower value means lower chance, higher value means higher chance, however exceeding value 0.9 does nothing.
  - For example: 0 = 0% Block Chance (no chance to Block incoming hits), 0.1 = 10% Block Chance (on average 1 in 10 received hits are Blocked), 1 = 100% Block Chance (on average 9 in 10 received hits are Blocked, as Block Chance cannot exceed value over 0.9).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% Block Chance it would be possible to go more than 10 received hits with no Block or have more than 1 Block over 10 received hits.

## Armor requirements
### Level
- (!!!PH!!!)An experience level cap to prevent low level classes from using high stat items (!!!PH!!!Maybe not needed with Attribute distribution?)

### Strength
- (!!!PH!!!)Integer value indicating Strength Attribute required for picking up and using bigger weapons, mostly focused on melee.

### Dexterity
- (!!!PH!!!)Integer value indicating Dexterity Attribute required for more swift weapons that would require precision to use.

### Intelligence
- (!!!PH!!!)Integer value indicating Intelligence Attribute required mostly for weapons related to magic use.

### Faith
- (!!!PH!!!)Integer value indicating Faith Attribute required mostly for weapons related to healing/buffing.

### Endurance
- (!!!PH!!!)Integer value indicating Endurance Attribute required for heavy weapons and armour that would have to be held for extended period of time, such as arbalests or shields.

## Armor enchantments
### !!!PH!!!
- !!!PH!!!
