/* IL2CPP: Rotatelab.GameAction$$Raise
void Rotatelab_GameAction__Raise (Rotatelab_GameAction_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction$$Raise
   void Rotatelab_GameAction__Raise (Rotatelab_GameAction_o* __this, const MethodInfo* method); */

void Rotatelab_GameAction__Raise_fc08b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

