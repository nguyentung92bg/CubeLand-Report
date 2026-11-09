/* IL2CPP: Rotatelab.GameAction<object>$$Raise
void Rotatelab_GameAction_object___Raise (Rotatelab_GameAction_T1__o* __this, Il2CppObject* arg1, const MethodInfo_23A2F44* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<object>$$Raise
   void Rotatelab_GameAction_object___Raise (Rotatelab_GameAction_T1__o* __this, Il2CppObject* arg1,
   const MethodInfo_23A2F44* method); */

void Rotatelab_GameAction_object___Raise_23a2f44(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

