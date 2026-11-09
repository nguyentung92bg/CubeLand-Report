/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$BuildColorMap
System_Int32_array* Rotatelab_Scripts_LiveSnapshotBuilder__BuildColorMap (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$BuildColorMap
   System_Int32_array* Rotatelab_Scripts_LiveSnapshotBuilder__BuildColorMap (const MethodInfo*
   method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__BuildColorMap_105361c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0106384c + 0x1063630);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063850 + 0x1063644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063854 + 0x1063650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063858 + 0x106365c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106385c + 0x1063668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063860 + 0x1063674));
    *pcVar2 = '\x01';
  }
  iVar5 = *(int *)(_UNK_01063864 + 0x106368c);
  uStack_28 = 0;
  uVar4 = **(undefined4 **)(_UNK_01063868 + 0x1063698);
  if (*(int *)(*(int *)(iVar5 + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = 0;
  uVar4 = System_Type__GetTypeFromHandle_2b80928(uVar4,0);
  if (*(int *)(*(int *)(iVar5 + 0x4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = System_Enum__GetValues_2ba9dc8(uVar4,0);
  if (iVar5 != 0) {
    uVar4 = **(undefined4 **)(_UNK_0106386c + 0x10636f8);
    iVar3 = thunk_FUN_00f00bc8(iVar5,uVar4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar5,uVar4);
    }
  }
  uVar6 = 0;
  iVar5 = 0;
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar6) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *(int *)(iVar3 + 0x10 + uVar6 * 4);
    uVar6 = uVar6 + 1;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
  }
  iVar5 = FUN_00ec388c(**(undefined4 **)(_UNK_01063870 + 0x1063774),iVar5 + 1);
  uVar6 = *(uint *)(iVar3 + 0xc);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar6 = *(uint *)(iVar3 + 0x10 + uVar7 * 4);
      uStack_34 = **(undefined4 **)(_UNK_01063874 + 0x10637b4);
      uStack_30 = 0xffffffff;
      uStack_2c = uVar6;
      uVar4 = System_Enum__ToString_2bab8c0(&uStack_34,0);
      if (*(int *)(*(int *)(*(int *)(_UNK_01063878 + 0x10637d8) + 0x4c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = System_Enum__TryParse_Int32Enum__1460e68
                        (uVar4,&uStack_28,**(undefined4 **)(_UNK_0106387c + 0x10637f8));
      uVar4 = uStack_28;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar4;
      uVar6 = *(uint *)(iVar3 + 0xc);
    } while ((int)uVar7 < (int)uVar6);
  }
  return iVar5;
}

