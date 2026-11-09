/* IL2CPP: BoosterPreventController$$OnBounceAnimationStarted
void BoosterPreventController__OnBounceAnimationStarted (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$OnBounceAnimationStarted
   void BoosterPreventController__OnBounceAnimationStarted (BoosterPreventController_o* __this,
   const MethodInfo* method); */

void BoosterPreventController__OnBounceAnimationStarted_fa39c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_039d0250 + 0x39d00d8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),0,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
    *pcVar6 = '\x01';
  }
  iVar1 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                    (piVar4 + 0x27,0,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
  if (iVar1 != 0) {
    if ((char)piVar4[0x27] == '\0') {
      piVar8 = *(int **)(_UNK_039d0264 + 0x39d0148);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      uVar2 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      piVar7 = *(int **)(_UNK_039d0268 + 0x39d0170);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
      if (iVar1 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x24);
        uVar2 = UnityEngine_Component__get_gameObject_35fe360(piVar4,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar5,uVar2,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar1,0,0);
        }
      }
    }
    iVar1 = (**(code **)(*piVar4 + 0x180))(piVar4,*(undefined4 *)(*piVar4 + 0x184));
    uVar3 = 4;
    if (((iVar1 != 0) && (uVar3 = 2, *(char *)((int)piVar4 + 0xad) == '\0')) &&
       (uVar3 = 3, *(char *)((int)piVar4 + 0xae) == '\0')) {
      uVar3 = (undefined1)piVar4[0x2b];
    }
                    /* WARNING: Could not recover jumptable at 0x039cfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 400))(piVar4,uVar3,0,*(undefined4 *)(*piVar4 + 0x194));
    return;
  }
  return;
}

