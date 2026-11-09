/* IL2CPP: Rotatelab.GameAction<bool>$$Raise
void Rotatelab_GameAction_bool___Raise (Rotatelab_GameAction_bool__o* __this, bool arg1, const MethodInfo_23A280C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<bool>$$Raise
   void Rotatelab_GameAction_bool___Raise (Rotatelab_GameAction_bool__o* __this, bool arg1, const
   MethodInfo_23A280C* method); */

void Rotatelab_GameAction_bool___Raise_23a280c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

