/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_CurrentLevelLabel
System_String_o* Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_CurrentLevelLabel
   System_String_o* Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel
   (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel_1067e90(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_01077f80 + 0x1077ea0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077f84 + 0x1077eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077f88 + 0x1077ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077f8c + 0x1077ecc));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01077f90 + 0x1077ee0);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
  iVar5 = *(int *)(*piVar7 + 0x74);
  if (iVar1 == 0) {
    if (iVar5 == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(iVar1 + 0x18);
    puVar2 = *(undefined4 **)(_UNK_01077f94 + 0x1077f70);
  }
  else {
    if (iVar5 == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(iVar1 + 0x1c);
    puVar2 = *(undefined4 **)(_UNK_01077f98 + 0x1077f3c);
  }
  uVar3 = *puVar2;
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  System_ParamsArray___ctor_2b80e2c(&uStack_20,*puVar4,0);
  System_String__FormatHelper_2a0c120(0,uVar3,uStack_20,uStack_1c,uStack_18,uStack_14);
  return;
}

