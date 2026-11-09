/* IL2CPP: Rotatelab.GameAction<bool, bool>$$Raise
void Rotatelab_GameAction_bool__bool___Raise (Rotatelab_GameAction_bool__bool__o* __this, bool arg1, bool arg2, const MethodInfo_23A39B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<bool, bool>$$Raise
   void Rotatelab_GameAction_bool__bool___Raise (Rotatelab_GameAction_bool__bool__o* __this, bool
   arg1, bool arg2, const MethodInfo_23A39B8* method); */

void Rotatelab_GameAction_bool__bool___Raise_23a39b8
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

