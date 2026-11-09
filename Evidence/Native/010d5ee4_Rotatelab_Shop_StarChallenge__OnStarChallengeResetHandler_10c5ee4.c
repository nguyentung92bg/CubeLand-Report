/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnStarChallengeResetHandler
void Rotatelab_Shop_StarChallenge__OnStarChallengeResetHandler (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnStarChallengeResetHandler
   void Rotatelab_Shop_StarChallenge__OnStarChallengeResetHandler (Rotatelab_Shop_StarChallenge_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__OnStarChallengeResetHandler_10c5ee4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  
  DG_Tweening_TweenExtensions__Kill_1168b64(*(undefined4 *)(param_1 + 0x3c),0,0);
  iVar5 = *(int *)(param_1 + 0x24);
  pcVar7 = (char *)(_UNK_010d5f90 + 0x10d5f10);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5f94 + 0x10d5f24));
    *pcVar7 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_010d5f98 + 0x10d5f3c) + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar5,*puVar1,puVar1[1],puVar1[2],0);
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_039d0250 + 0x39d00d8);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
    *pcVar7 = '\x01';
  }
  iVar5 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                    (piVar4 + 0x27,1,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
  if (iVar5 != 0) {
    if ((char)piVar4[0x27] == '\0') {
      piVar9 = *(int **)(_UNK_039d0264 + 0x39d0148);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      uVar2 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      piVar8 = *(int **)(_UNK_039d0268 + 0x39d0170);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
      if (iVar5 != 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar5 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = *(undefined4 *)(iVar5 + 0x24);
        uVar2 = UnityEngine_Component__get_gameObject_35fe360(piVar4,0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar2,0);
        if (iVar5 != 0) {
          if (*(int *)(*piVar9 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar5 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar5,0,0);
        }
      }
    }
    iVar5 = (**(code **)(*piVar4 + 0x180))(piVar4,*(undefined4 *)(*piVar4 + 0x184));
    uVar3 = 4;
    if (((iVar5 != 0) && (uVar3 = 2, *(char *)((int)piVar4 + 0xad) == '\0')) &&
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

