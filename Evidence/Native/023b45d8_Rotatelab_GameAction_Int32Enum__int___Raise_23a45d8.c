/* IL2CPP: Rotatelab.GameAction<Int32Enum, int>$$Raise
void Rotatelab_GameAction_Int32Enum__int___Raise (Rotatelab_GameAction_T1__T2__o* __this, int32_t arg1, int32_t arg2, const MethodInfo_23A45D8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<Int32Enum, int>$$Raise
   void Rotatelab_GameAction_Int32Enum__int___Raise (Rotatelab_GameAction_T1__T2__o* __this, int32_t
   arg1, int32_t arg2, const MethodInfo_23A45D8* method); */

void Rotatelab_GameAction_Int32Enum__int___Raise_23a45d8
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b45f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

