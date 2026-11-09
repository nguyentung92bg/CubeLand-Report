/* IL2CPP: Rotatelab.GameAction<bool, Int32Enum>$$Raise
void Rotatelab_GameAction_bool__Int32Enum___Raise (Rotatelab_GameAction_T1__T2__o* __this, bool arg1, int32_t arg2, const MethodInfo_23A3C20* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<bool, Int32Enum>$$Raise
   void Rotatelab_GameAction_bool__Int32Enum___Raise (Rotatelab_GameAction_T1__T2__o* __this, bool
   arg1, int32_t arg2, const MethodInfo_23A3C20* method); */

void Rotatelab_GameAction_bool__Int32Enum___Raise_23a3c20
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b3c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

