/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$Awake
void Rotatelab_Debugging_PerformanceHudController__Awake (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$Awake
   void Rotatelab_Debugging_PerformanceHudController__Awake
   (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__Awake_110a36c(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r6;
  int *piVar5;
  int *piVar6;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0111a59c + 0x111a380);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a5a0 + 0x111a394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a5a4 + 0x111a3a0));
    *pcVar2 = '\x01';
  }
  pcVar2 = (char *)(_UNK_0111a5a8 + 0x111a3b4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a5ac + 0x111a3c8));
    *pcVar2 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0111a5b0 + 0x111a3dc);
  piVar6 = *(int **)(_UNK_0111a5b4 + 0x111a3e8);
  uVar3 = **(undefined4 **)(*piVar5 + 0x5c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar1 != 0) {
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111a5b8 + 0x111a430));
      *pcVar2 = '\x01';
    }
    uVar3 = **(undefined4 **)(*piVar5 + 0x5c);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,param_1,0);
    if (iVar1 != 0) {
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar2 = (char *)(_UNK_0361987c + 0x3619834);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619880 + 0x3619848),0);
        *pcVar2 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03619884 + 0x361985c) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar2 = (char *)(_UNK_036197ac + 0x3619704);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b0 + 0x3619718));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b4 + 0x3619724));
        *pcVar2 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_036197b8 + 0x3619738) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(**(int **)(_UNK_036197bc + 0x3619760) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(_UNK_036197c0 + 0x361977c);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(_UNK_036197c4 + 0x361978c);
        *(code **)(_UNK_036197c8 + 0x361979c) = UNRECOVERED_JUMPTABLE_00;
      }
                    /* WARNING: Could not recover jumptable at 0x036197a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(uVar3,0);
      return;
    }
  }
  pcVar2 = (char *)(_UNK_0111a5bc + 0x111a4b0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a5c0 + 0x111a4c4));
    *pcVar2 = '\x01';
  }
  **(int **)(*piVar5 + 0x5c) = param_1;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c),param_1);
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__DontDestroyOnLoad_3609c1c(uVar3,0);
  puVar4 = *(undefined4 **)(_UNK_0111a5c4 + 0x111a524);
  uVar3 = FUN_00ec388c(*puVar4,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = FUN_00ec388c(*puVar4,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar3);
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(*(undefined4 *)(param_1 + 0x10),0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam0360d868 + 0x360d7f4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),0,0,extraout_r3,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(iRam0360d870 + 0x360d834);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
      *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE_00;
    }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

