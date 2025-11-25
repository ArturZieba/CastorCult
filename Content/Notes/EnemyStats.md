# Enemy Stats
## Related files
### !!!PH!!!
- !!!PH!!!

## Combat Stats
### Maximum Life
- Integer value indicating the Maximum Life points. 

### Current Life
- Integer value indicating the Current Life points. Reaching 0 or less causes the enemy to die.
- (!!!PH!!!) Enemies give Experience and Loot on death.
- (!!!PH!!!) Allow to go below 0 once to see how much the enemy was overkilled. 

### Armour
- Integer value indicating Armour amount. Each point of armour reduces physcial damage by that amount, but to no less than 1.
  - For example: 1 Armour will reduce 10 physical damage hit to 9 (10 - 1 = 9), 11 Armour will reduce 10 physical damage hit to 1 (10 - 11 = -1, however physical damage cannot be reduced to less than 1 by Armour).

### Block Chance
- Float value indicating armor's base Block Chance. Blocking a hit causes it to deal no damage. Lower value means lower chance, higher value means higher chance, however exceeding value 0.9 does nothing.
  - For example: 0 = 0% Block Chance (no chance to Block incoming hits), 0.1 = 10% Block Chance (on average 1 in 10 received hits are Blocked), 1 = 100% Block Chance (on average 9 in 10 received hits are Blocked, as Block Chance cannot exceed value over 0.9).
  - (!!!PH!!!) Random geneneration to be determined but expected to have no entropy/safeguards etc., so on 10% Block Chance it would be possible to go more than 10 received hits with no Block or have more than 1 Block over 10 received hits.

## Rewards
### Experience
- (!!!PH!!!)
