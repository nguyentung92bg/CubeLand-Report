/* IL2CPP: Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>g__StartFullscreenLoading|3
void Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3 (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, int32_t mode, System_String_o* reason, int32_t sessionOptimized, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>g__StartFullscreenLoading|3
   void 
   Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3
   (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, int32_t mode, System_String_o* reason,
   int32_t sessionOptimized, const MethodInfo* method); */

void Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3_10f6ae8
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar6 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0xc) = 1;
  fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  fVar10 = _UNK_01106d70;
  fVar8 = *(float *)(param_1 + 0x20);
  pcVar7 = (char *)(_UNK_01106d74 + 0x1106b44);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106d78 + 0x1106b58));
    *pcVar7 = '\x01';
  }
  fVar10 = (fVar2 - fVar8) * fVar10;
  if (*(int *)(**(int **)(_UNK_01106d7c + 0x1106b6c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar9 = (double)fVar10;
  dVar11 = (double)modf(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),&uStack_50);
  if (0.0 <= fVar10) {
    if (dVar11 != 0.5) {
      dVar9 = (double)floor(SUB84(dVar9 + 0.5,0),(int)((ulonglong)(dVar9 + 0.5) >> 0x20));
      goto LAB_01106c0c;
    }
    dVar9 = 1.0;
  }
  else {
    if (dVar11 != -0.5) {
      dVar9 = (double)ceil(SUB84(dVar9 + -0.5,0),(int)((ulonglong)(dVar9 + -0.5) >> 0x20));
      goto LAB_01106c0c;
    }
    dVar9 = -1.0;
  }
  uVar3 = FUN_00f88224(uStack_50,uStack_4c);
  dVar9 = (double)CONCAT44(uStack_4c,uStack_50) + dVar9;
  if ((uVar3 & 1) == 0) {
    dVar9 = (double)CONCAT44(uStack_4c,uStack_50);
  }
LAB_01106c0c:
  iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_50 = uVar1;
  uStack_4c = uVar5;
  thunk_FUN_00ec5080((uint)&uStack_50 | 4,uVar5);
  iStack_48 = param_2;
  uStack_44 = param_3;
  thunk_FUN_00ec5080(&uStack_44,param_3);
  uStack_3c = (undefined4)(longlong)dVar9;
  if (dVar9 == _UNK_01106d68) {
    uStack_3c = 0x80000000;
  }
  uStack_40 = param_4;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_AdManager__ResolveNeftaSession_10f5e54
            (iVar6,uStack_50,uStack_4c,iStack_48,uStack_44,param_4,uStack_3c);
  iVar6 = *(int *)(param_1 + 0x14);
  if (param_2 == 3) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x48) != 0) {
      Rotatelab_Ads_InterstitialAdFormat__EnableNeftaOptimization_10f07c4
                (*(int *)(iVar6 + 0x48),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x4c);
    if (iVar6 != 0) {
      Rotatelab_Ads_RewardedAdFormat__EnableNeftaOptimization_10f44c4
                (iVar6,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = *(int **)(iVar6 + 0x48);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = *(int **)(*(int *)(param_1 + 0x14) + 0x4c);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
    }
  }
  return;
}

