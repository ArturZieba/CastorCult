# Weapons
## Related files
### WeaponsDataTable.cpp/WeaponsDataTable.h
- Contains struct for the DT_Weapons.uasset.
### WeaponsVariablesBank.cpp/WeaponsVariablesBank.h
- Contains struct for the DT_WeaponsVariablesBank.uasset.
### DT_Weapons.json/DT_Weapons.uasset
- Contains a list of weapons with all of their asociated variables.
### DT_WeaponsVariablesBank.json/DT_WeaponsVariablesBank.uasset
- Contains a list of variables that can be used in weapons.

## Weapon types
### Two Handed Axe (Medium Strength/Low Dexterity/Medium Endurance):
- Medium speed, variable high damage, physical damage type by default, medium criticals.

### Two Handed Hammer (High Strength/High Endurance):
- Very slow, consistent very high damage, physical damage type by default, medium criticals.

### Two Handed Sword (Low Strength/Medium Dexterity/Low Endurance):
- Fast, consistent medium damage, physical damage type by default, high criticals.
 
### Arbalest (High Strength/Low Dexterity/High Endurance):
- Very slow, consistent very high damage, physical damage type by default, high criticals.
 
### Bow (Low Strength/High Dexterity):
- Fast, variable low damage, physical damage type by default, high criticals.

### Greatshield (High Strength/High Endurance):
- Very slow, consistent medium damage, physical damage type by default, low criticals, implicit defensive stats (block chance, armour).
 
### Icon (High Faith/Low Endurance):
- Slow, consistent medium damage, holy damage type by default, medium criticals.
- Add some built in scaling for buff/healing?

### Staff (High Intelligence/Low Endurance):
- Slow, variable medium damage, physical damage type by default, medium criticals.
- Add some built in scaling for spells?

### One Handed Axe (Medium Strength/Low Dexterity):
- Fast, variable medium damage, physical damage type by default, medium criticals.

### One Handed Hammer (Medium Strength/Medium Endurance):
- Slow, consistent high damage, physical damage type by default, medium criticals.

### One Handed Sword (Low Strength/Medium Dexterity):
- Very fast, consistent low damage, physical damage type by default, high criticals.
 
### Chime (High Faith):
- Medium speed, consistent low damage, holy damage type by default, medium criticals.
- Add some built in scaling for buff/healing?
 
### Crossbow (Low Strength/Low Dexterity/Low Endurance):
- Slow, consistent high damage, physical damage type by default, high criticals.
 
### Shield (Low Strength/High Endurance):
- Very slow, consistent low damage, low criticals, implicit defensive stats (block chance, armour).

### Wand (High Intelligence):
- Medium speed, variable low damage, physical damage type by default, medium criticals.
- Add some built in scaling for spells?

## Weapon list
### Two Handed Axes (Medium Strength/Low Dexterity/Medium Endurance):
- Lumber Axe (T1)
  - Basic axe used for chopping wood.

### Two Handed Hammers (High Strength/High Endurance):
- Sledgehammer (T1)
  - Hammer used to demolish walls and such.

### Two Handed Swords (Low Strength/Medium Dexterity/Low Endurance):
- Blunt Claymore (T1)
  - Claymore with blunted blade used for training.
 
### Arbalests (High Strength/Low Dexterity/High Endurance):
- Rotten Arbalest (T1)
  - An old arbalest, seemingly exposed to the elements for a long time.
 
### Bows (Low Strength/High Dexterity):
- Shortbow (T1)
  - Simple bow used for training.

### Greatshields (High Strength/High Endurance):
- Barn Door (T1)
  - Door removed from hinges, used as a makeshift cover.
 
### Icons (High Faith/Low Endurance):
- Tattered Banner (T1)
  - An old banner, icon on the fabric seemingly lost to time.

### Staves (High Intelligence/Low Endurance):
- Branch Staff (T1)
  - A simple tree branch that can be used as a magic catalyst.

### One Handed Axes (Medium Strength/Low Dexterity):
- Lumber Hatchet (T1)
  - Small hatchet used for cutting wood.

### One Handed Hammers (Medium Strength/Medium Endurance):
- Blacksmith Hammer (T1)
  - A hammer used by blacksmiths to shape metal in forges.

### One Handed Swords (Low Strength/Medium Dexterity):
- Blunt Longsword (T1)
  - Longsword with blunted blade used for training.
 
### Chimes (High Faith):
- Musty Bell (T1)
  - Small old bell.
 
### Crossbows (Low Strength/Low Dexterity/Low Endurance):
- Old Crossbow (T1)
  - An old crossbow with a worn string.
 
### Shields (Low Strength/High Endurance):
- Wooden Targe (T1)
  - Few planks reinforced with nails and a handle, cut to a round shape.

### Wands (High Intelligence):
- Twig Wand (T1)
  - A small twig used as a magic catalyst.

## Weapon base stats
### Physical Damage Minimum/Maximum
- Integer value indicating Minimum and Maximum damage roll range of base Physical Damage on the weapon. Armour mitigates a portion of Physical Damage.

### Holy Damage Minimum/Maximum
- Integer value indicating Minimum and Maximum Damage roll range of base Holy Damage on the weapon.

### Attacks Per Second
- Float value indicating base Attacks Per Second of the weapon, lower value means slower, higher value means faster.
  - For example: 1.0 = 1 attack each second, 0.5 = half of an attack each second (1 attack each 2 seconds), 2.0 = 2 attacks each second (1 attack each 0.5 second).

### Critical Strike Chance
- Float value indicating weapon's base chance to deal a Critical Strike which deals damage multiplied by total Critical Strike Multiplier. Lower value means lower chance, higher value means higher chance, but no more than 1.
  - For example: 0 = 0% chance for Critical Strike (no chance for Critical Strike), 0.1 = 10% chance for Critical Strike (on average 1 in 10 hits are Critical Strikes), 1 = 100% chance for Critical Strike (every hit is a Critical Strike).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% chance it would be possible to go more than 10 hits with no Critical Strike or have more than 1 Critical Srike over 10 hits.

### Critical Strike Multiplier
- Float value indicating weapon's base Critical Strike Multiplier, a value by which the damage is multiplied when dealing a Critical Strike. Lower value means lower multiplier, higher value means higher multiplier. Damage is rounded down in case the resulting value is a fraction.
  - For example: For hit dealing 15 damage - 1.5 = 150% Critical Strike Multiplier (15 * 1.5 = 22.5 rounded down = 22), 2 = 200% Critical Strike Multiplier (15 * 2 = 30), 0.5 = 50% Critical Strike Multiplier (15 * 0.5 = 7.5 rounded down = 7), 1 = 100% Critical Strike Multiplier (15 * 1 = 15, no change). 

### Armour
- Integer value indicating Armour amount. Each point of armour reduces physcial damage by that amount, but to no less than 1.
  - For example: 1 Armour will reduce 10 physical damage hit to 9 (10 - 1 = 9), 11 Armour will reduce 10 physical damage hit to 1 (10 - 11 = -1, however physical damage cannot be reduced to less than 1 by Armour).

### Block Chance
- Float value indicating weapon's base Block Chance. Blocking a hit causes it to deal no damage. Lower value means lower chance, higher value means higher chance, however exceeding value 0.9 does nothing.
  - For example: 0 = 0% Block Chance (no chance to Block incoming hits), 0.1 = 10% Block Chance (on average 1 in 10 received hits are Blocked), 1 = 100% Block Chance (on average 9 in 10 received hits are Blocked, as Block Chance cannot exceed value over 0.9).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% Block Chance it would be possible to go more than 10 received hits with no Block or have more than 1 Block over 10 received hits.

## Weapon requirements
### Level
- An experience level cap to prevent low level classes from using high stat items (Maybe not needed with Attribute distribution?)

### Strength
- Integer value indicating Strength Attribute required for picking up and using bigger weapons, mostly focused on melee.

### Dexterity
- Integer value indicating Dexterity Attribute required for more swift weapons that would require precision to use.

### Intelligence
- Integer value indicating Intelligence Attribute required mostly for weapons related to magic use.

### Faith
- Integer value indicating Faith Attribute required mostly for weapons related to healing/buffing.

### Endurance
- Integer value indicating Endurance Attribute required for heavy weapons and armour that would have to be held for extended period of time, such as arbalests or shields.

## Weapon enchantments
### Additional Physical Damage Minimum/Maximum
- Integer value indicating Minimum and Maximum damage roll range of Additional Physical Damage that is added on top of the base weapon's Physical Damage. If a weapon has no base Physical Damage the Additional Physical Damage is still added.
  - For example: A weapon has 5 Minimum Physical Damage and 10 Maximum Physical Damage - with Additional 2 Minimum Physical Damage and Additional 4 Maximum Physical Damage it will have 5 + 2 = 7 Minimum Physical Damage and 10 + 4 = 14 Maximum Physical Damage, A weapon has no Minimum or Maximum Physical Damage - with Additional 2 Minimum Physical Damage and Additional 4 Maximum Physical Damage it will have 0 + 2 = 2 Minimum Physical Damage and 0 + 4 = 4 Maximum Physical Damage.  
