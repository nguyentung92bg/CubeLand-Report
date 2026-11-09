/* IL2CPP: Rotatelab.GameAction<int, object>$$Raise
void Rotatelab_GameAction_int__object___Raise (Rotatelab_GameAction_T1__T2__o* __this, int32_t arg1, Il2CppObject* arg2, const MethodInfo_23A4108* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<int, object>$$Raise
   void Rotatelab_GameAction_int__object___Raise (Rotatelab_GameAction_T1__T2__o* __this, int32_t
   arg1, Il2CppObject* arg2, const MethodInfo_23A4108* method); */

void Rotatelab_GameAction_int__object___Raise_23a4108
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

