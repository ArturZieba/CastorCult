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

### Strength
- Integer value indicating explosive strength of the character, mostly related to using bigger weapons and heavier armor.
  - (!!!PH!!!) Small bonus per point?

### Dexterity
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?

### Intelligence
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?

### Faith
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Small bonus per point?

### Endurance
- Integer value indicating !!!PH!!!
  - (!!!PH!!!) Maximum Life per point?

## Combat Stats
### Maximum Life
- !!!PH!!!
