/* IL2CPP: Rotatelab.Extensions$$SetVisibility
DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o* Rotatelab_Extensions__SetVisibility (UnityEngine_CanvasGroup_o* canvasGroup, bool enable, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetVisibility
   DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o* Rotatelab_Extensions__SetVisibility
   (UnityEngine_CanvasGroup_o* canvasGroup, bool enable, System_Action_o* callback, const
   MethodInfo* method); */

int Rotatelab_Extensions__SetVisibility_fc2a78(int param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar6 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = (int *)(iVar2 + 8);
  *piVar7 = param_1;
  thunk_FUN_00ec5080(piVar7,param_1);
  *(undefined4 *)(iVar2 + 0x10) = param_3;
  *(undefined1 *)(iVar2 + 0xc) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),param_3);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar7,0,0);
  }
  if (*piVar7 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar7,0,0);
    if (*piVar7 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar7,1,0);
      uVar4 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar4 = _UNK_00fd2c10;
      }
      iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar4,0x3e4ccccd,0);
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar4,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar5 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + 0x94);
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar3 + 0x4c) = uVar4;
        thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar4,uVar5);
      }
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

