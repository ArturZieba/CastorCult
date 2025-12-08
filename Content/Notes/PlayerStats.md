# Player Stats
## Related files
### BP_Player.uasset
- Contains all of the variables related to the player (Level, Experience, Attributes, etc.).

## Levelling
### Level
- Integer value indicating player's Level. Can be increased by reaching Required Experience for a given level. Levelling up grants 3 Attribute Points to be distributed to any chosen Attribute.
- (!!!PH!!!) Attribute Point amount, potential passives, etc. to be determined.
- (!!!PH!!!) Level cap? If so how high, if not how to handle values extending variable limits?

### Experience
- Integer value indicating player's Experience. (!!!PH!!!) Currently gained via clicking, but in the end should be gained from defeating enemies.

### Required Experience
- Integer value indicating how much Experience is required to level up. Required Experience at level 0 is 4, and at further levels is adjusted using this formula: (((5 * Level) + Level) + (Level * 2)).
  - For example: Levelling from level 1 to 2 would require (((5 * 1) + 1) + (1 * 2)) = ((5 + 1) + 2) = (6 + 2) = 8 Experience, Levelling from level 10 to 11 would require (((5 * 11) + 11) + (11 * 2)) = ((55 + 11) + 22) = (66 + 22) = 88 Experience.
  - (!!!PH!!!) Starting Required Experience and formula potentially to be adjusted.

## Attributes
### Attribute Points
- Integer value indicating how many points can be freely assigned to any of the attributes such as Strength, Dexterity, Intelligence, Faith or Endurance. Gained when levelled up.
  - (!!!PH!!!) Would there be different sources of Attribute Points?
- Base value: 0

### Strength
- Integer value indicating explosive strength of the character, mostly related to using bigger weapons and heavier armor.
  - (!!!PH!!!) Small bonus per point?
- Base value: (!!!PH!!!)

### Dexterity
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?
- Base value: (!!!PH!!!)

### Intelligence
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?
- Base value: (!!!PH!!!)

### Faith
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?
- Base value: (!!!PH!!!)

### Endurance
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Maximum Life per point?
- Base value: (!!!PH!!!)

## Combat Stats
### Maximum Life
- Integer value indicating the Maximum Life points. 
- Base value: 10

### Current Life
- Integer value indicating the Current Life points. Reaching 0 or less causes the player to die.
- (!!!PH!!!) What happens on death? Experience loss or something more?
- (!!!PH!!!) Allow to go below 0 once to see how much the player was overkilled.
- Base value: 10

### Armour
- Integer value indicating Armour amount. Each point of armour reduces physcial damage by that amount, but to no less than 1.
  - For example: 1 Armour will reduce 10 physical damage hit to 9 (10 - 1 = 9), 11 Armour will reduce 10 physical damage hit to 1 (10 - 11 = -1, however physical damage cannot be reduced to less than 1 by Armour).
- Base value: 0

### Block Chance
- Float value indicating armor's base Block Chance. Blocking a hit causes it to deal no damage. Lower value means lower chance, higher value means higher chance, however exceeding value 0.9 does nothing.
  - For example: 0 = 0% Block Chance (no chance to Block incoming hits), 0.1 = 10% Block Chance (on average 1 in 10 received hits are Blocked), 1 = 100% Block Chance (on average 9 in 10 received hits are Blocked, as Block Chance cannot exceed value over 0.9).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% Block Chance it would be possible to go more than 10 received hits with no Block or have more than 1 Block over 10 received hits.
- Base value: 0.0

### Life Regeneration
- Integer value indicating (!!!PH!!!)

### Physical Damage Minimum/Maximum
- Integer value indicating Minimum and Maximum damage roll range of base Physical Damage. Armour mitigates a portion of Physical Damage.
- Base value (Minimum/Maximum): 1/2
- Base value will be overwritten by a weapon.

### Holy Damage Minimum/Maximum
- Integer value indicating Minimum and Maximum Damage roll range of base Holy Damage.
- Base value (Minimum/Maximum): 0/0

### Attacks Per Second
- Float value indicating base Attacks Per Second, lower value means slower, higher value means faster.
  - For example: 1.0 = 1 attack each second, 0.5 = half of an attack each second (1 attack each 2 seconds), 2.0 = 2 attacks each second (1 attack each 0.5 second).
- Base value: 2
- Base value will be overwritten by a weapon.

### Critical Strike Chance
- Float value indicating a chance to deal a Critical Strike which deals damage multiplied by total Critical Strike Multiplier. Lower value means lower chance, higher value means higher chance, but no more than 1.
  - For example: 0 = 0% chance for Critical Strike (no chance for Critical Strike), 0.1 = 10% chance for Critical Strike (on average 1 in 10 hits are Critical Strikes), 1 = 100% chance for Critical Strike (every hit is a Critical Strike).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% chance it would be possible to go more than 10 hits with no Critical Strike or have more than 1 Critical Srike over 10 hits.
- Base value: 1.0
- Base value will be overwritten by a weapon.

### Critical Strike Multiplier
- Float value indicating Critical Strike Multiplier, a value by which the damage is multiplied when dealing a Critical Strike. Lower value means lower multiplier, higher value means higher multiplier. Damage is rounded down in case the resulting value is a fraction.
  - For example: For hit dealing 15 damage - 1.5 = 150% Critical Strike Multiplier (15 * 1.5 = 22.5 rounded down = 22), 2 = 200% Critical Strike Multiplier (15 * 2 = 30), 0.5 = 50% Critical Strike Multiplier (15 * 0.5 = 7.5 rounded down = 7), 1 = 100% Critical Strike Multiplier (15 * 1 = 15, no change). 
- Base value: 2.0
- Base value will be overwritten by a weapon.

### Armour Penetration
- Integer value indicating how much Armour of the entity receiving hit is ignored when calculating damage. This cannot reduce the Armour below 0, it only ignores existing Armour.
  - For example - Entity has 5 Armour and gets hit with 10 Physical Damage - 10 (Physical Damage) - 5 (Armour) = 5 Physical Damage Received, same hit for 10 Physical Damage but with 2 Armour Penetration - 10 (Physical Damage) - (5 - 2) (Armour - Armour Penetration) = 7 Physical Damage Received, same hit for 10 Physical Damage but with 99 Armour Penetration - 10 (Physical Damage) - (5 - 99 >= 0) = 10 Physical Damage Received as existing Armour is ignored, so only 5 Armour Penetration is needed to fully ignore entity's Armour.
- Base value: 0

### Skill Cooldown
- !!!PH!!!
- Base value: (!!!PH!!!)

### PH Sources of stats - Attributes from levelling, gear, anything else?
