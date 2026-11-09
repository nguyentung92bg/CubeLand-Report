/* IL2CPP: Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>b__1
void Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__1 (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, NeftaCustomAdapter_InitConfiguration_o* readyConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>b__1
   void Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__1
   (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, NeftaCustomAdapter_InitConfiguration_o*
   readyConfig, const MethodInfo* method); */

void Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__1_10f68e8
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01106ab0 + 0x1106904);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106ab4 + 0x1106918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106ab8 + 0x1106924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106abc + 0x1106930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106ac0 + 0x110693c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106ac4 + 0x1106948));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01106ac8 + 0x110695c);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x78) != '\0') {
    uStack_1c = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    iVar1 = *(int *)(_UNK_01106acc + 0x110699c);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x3c),&uStack_1c);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_1d = *(undefined1 *)(param_2 + 0xc);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x14),&uStack_1d);
    uVar2 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_01106ad0 + 0x11069e4),uVar2,uVar3,
                       *(undefined4 *)(param_2 + 8),0);
    if (*(int *)(**(int **)(_UNK_01106ad4 + 0x11069fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(uVar2,0);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(param_2 + 8),0);
    if (iVar1 == 0) {
      uVar4 = System_String__op_Inequality_2a09760
                        (*(undefined4 *)(param_2 + 8),**(undefined4 **)(_UNK_01106adc + 0x1106a70),0
                        );
      uVar2 = 3;
      puVar5 = *(undefined4 **)(_UNK_01106ae0 + 0x1106a8c);
      if ((uVar4 & 1) != 0) {
        puVar5 = (undefined4 *)(param_1 + 0x10);
      }
      if (*(char *)(param_1 + 0xd) == '\0') {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
      if (*(char *)(param_1 + 0xd) == '\0') {
        uVar2 = 2;
      }
      puVar5 = *(undefined4 **)(_UNK_01106ad8 + 0x1106a60);
    }
    Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3_10f6ae8
              (param_1,uVar2,*puVar5,*(undefined1 *)(param_2 + 0xc));
  }
  return;
}

