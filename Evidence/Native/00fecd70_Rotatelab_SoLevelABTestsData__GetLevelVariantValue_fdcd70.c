/* IL2CPP: Rotatelab.SoLevelABTestsData$$GetLevelVariantValue
System_String_o* Rotatelab_SoLevelABTestsData__GetLevelVariantValue (Rotatelab_SoLevelABTestsData_o* __this, int32_t levelNumber, Rotatelab_SoLevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelABTestsData$$GetLevelVariantValue
   System_String_o* Rotatelab_SoLevelABTestsData__GetLevelVariantValue
   (Rotatelab_SoLevelABTestsData_o* __this, int32_t levelNumber, Rotatelab_SoLevelData_o* level,
   const MethodInfo* method); */

undefined4
Rotatelab_SoLevelABTestsData__GetLevelVariantValue_fdcd70
          (int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  short sStack_26;
  
  pcVar3 = (char *)(_UNK_00fecff4 + 0xfecd90);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecff8 + 0xfecda4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecffc + 0xfecdb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed000 + 0xfecdbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed004 + 0xfecdc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed008 + 0xfecdd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed00c + 0xfecde0));
    *pcVar3 = '\x01';
  }
  uVar9 = 0;
  sStack_26 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0xc) <= (int)uVar9) goto LAB_00fecfcc;
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x10);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 8) == param_2) break;
    uVar9 = uVar9 + 1;
  }
  if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_00fed010 + 0xfece78);
  piVar8 = *(int **)(_UNK_00fed014 + 0xfece80);
  iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 0xc) + 3;
  while (iVar6 = iVar5, -1 < (int)(iVar6 - 4U)) {
    iVar5 = *(int *)(iVar4 + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= iVar6 - 4U) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar5 + iVar6 * 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c(iVar5,*puVar7);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,param_3,0);
    iVar5 = iVar6 + -1;
    if (iVar2 != 0) {
      sStack_26 = (short)iVar6 + 0x3e;
      if (*(int *)(*(int *)(*(int *)(_UNK_00fed018 + 0xfecf08) + 0x44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar1 = System_Char__ToString_2b04210(&sStack_26,0);
      return uVar1;
    }
  }
  piVar8 = *(int **)(_UNK_00fed01c + 0xfecf38);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  if (**(int **)(iVar4 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Save_SavedList_int___get_Count_1a89e04
                    (**(int **)(iVar4 + 0x5c),**(undefined4 **)(_UNK_00fed020 + 0xfecf6c));
  if ((int)uVar9 < iVar4 + -1) {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar8;
    }
    if (**(int **)(iVar4 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Save_SavedList_int___get_Item_1a89e38
                      (**(int **)(iVar4 + 0x5c),uVar9,**(undefined4 **)(_UNK_00fed024 + 0xfecfbc));
    if (iVar4 == 0) {
      puVar7 = *(undefined4 **)(&UNK_00fecff4 + _UNK_00fed028);
      goto LAB_00fecfdc;
    }
  }
LAB_00fecfcc:
  puVar7 = *(undefined4 **)(*(int *)(*(int *)(_UNK_00fed02c + 0xfecfd8) + 0x48) + 0x5c);
LAB_00fecfdc:
  return *puVar7;
}

