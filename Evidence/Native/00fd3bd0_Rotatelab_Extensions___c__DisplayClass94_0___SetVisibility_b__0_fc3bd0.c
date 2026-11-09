/* IL2CPP: Rotatelab.Extensions.<>c__DisplayClass94_0$$<SetVisibility>b__0
void Rotatelab_Extensions___c__DisplayClass94_0___SetVisibility_b__0 (Rotatelab_Extensions___c__DisplayClass94_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions.<>c__DisplayClass94_0$$<SetVisibility>b__0
   void Rotatelab_Extensions___c__DisplayClass94_0___SetVisibility_b__0
   (Rotatelab_Extensions___c__DisplayClass94_0_o* __this, const MethodInfo* method); */

void Rotatelab_Extensions___c__DisplayClass94_0___SetVisibility_b__0_fc3bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_interactable_39a3940
            (*(int *)(param_1 + 8),*(char *)(param_1 + 0xc) != '\0',0);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28
            (*(int *)(param_1 + 8),*(char *)(param_1 + 0xc) != '\0',0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fd3c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

