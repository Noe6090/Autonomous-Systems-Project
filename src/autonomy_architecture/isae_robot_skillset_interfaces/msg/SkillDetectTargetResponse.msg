uint8 SUCCESS = 0
uint8 ALREADY_RUNNING = 1
uint8 PRECONDITION_FAILURE = 2
uint8 VALIDATE_FAILURE = 3
uint8 START_FAILURE = 4
uint8 INVARIANT_FAILURE = 5
uint8 INTERRUPT = 6
uint8 FAILURE = 7
#
string id
uint8  result        # cf. constant
# Preconditions
# Terminate
string name          # terminate mode or precondition/invariant failure
bool   effect        # if effect succeed or true if none
bool   postcondition # if the postcondition is true (or no postcondition)
# Output
SkillDetectTargetOutput output
