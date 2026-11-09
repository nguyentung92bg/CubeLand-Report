/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$Awake
void Rotatelab_CloudRush_CloudRushCloudController__Awake (Rotatelab_CloudRush_CloudRushCloudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$Awake
   void Rotatelab_CloudRush_CloudRushCloudController__Awake
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushCloudController__Awake_10db148(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_010eb39c + 0x10eb160);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb3a0 + 0x10eb174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb3a4 + 0x10eb180));
    *pcVar3 = '\x01';
  }
  piVar1 = (int *)UnityEngine_Component__get_transform_35fe190(param_1,0);
  piVar5 = *(int **)(_UNK_010eb3a8 + 0x10eb1a8);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = *piVar5;
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
    *(int **)(param_1 + 0x1c) = piVar1;
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
  }
  piVar4 = (int *)(param_1 + 0x1c);
  thunk_FUN_00ec5080(piVar4,piVar1);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)UnityEngine_Transform__get_parent_36148d8(*piVar4,0);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = *piVar5;
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
    *(int **)(param_1 + 0x20) = piVar1;
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
  }
  thunk_FUN_00ec5080(param_1 + 0x20,piVar1);
  iVar2 = UnityEngine_Component__GetComponentInParent_object__143f94c
                    (param_1,**(undefined4 **)(_UNK_010eb3ac + 0x10eb2b4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Canvas__get_rootCanvas_39a8748(iVar2,0);
  if (iVar2 != 0) {
    piVar1 = (int *)UnityEngine_Component__get_transform_35fe190(iVar2,0);
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      piVar1 = (int *)0x0;
    }
    else {
      iVar2 = *piVar5;
      if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar1);
      }
      *(int **)(param_1 + 0x24) = piVar1;
      if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar1);
      }
    }
    thunk_FUN_00ec5080(param_1 + 0x24,piVar1);
    if (*piVar4 != 0) {
      UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_28,*piVar4,0);
      *(undefined4 *)(param_1 + 0x28) = uStack_24;
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

