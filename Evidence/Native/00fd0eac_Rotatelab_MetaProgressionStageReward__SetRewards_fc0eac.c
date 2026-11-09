/* IL2CPP: Rotatelab.MetaProgressionStageReward$$SetRewards
void Rotatelab_MetaProgressionStageReward__SetRewards (Rotatelab_MetaProgressionStageReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward$$SetRewards
   void Rotatelab_MetaProgressionStageReward__SetRewards (Rotatelab_MetaProgressionStageReward_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward__SetRewards_fc0eac(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_00fd10f0 + 0xfd0ec4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd10f4 + 0xfd0ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd10f8 + 0xfd0ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd10fc + 0xfd0ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1100 + 0xfd0efc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1104 + 0xfd0f08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1108 + 0xfd0f14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd110c + 0xfd0f20));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x44) + 0x14);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar15 = &uStack_38;
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (puVar15,iVar6,**(undefined4 **)(_UNK_00fd1110 + 0xfd0f68));
  uVar14 = 0;
  puVar5 = *(undefined4 **)(_UNK_00fd1114 + 0xfd0f88);
  piVar13 = *(int **)(_UNK_00fd1118 + 0xfd0f90);
  while( true ) {
    iVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar5)
    ;
    uVar1 = uStack_2c;
    if (iVar6 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_00fd1124 + 0xfd1080));
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = extraout_r3;
    if (*(int *)(**(int **)(_UNK_00fd111c + 0xfd0fac) + 0x74) == 0) {
      FUN_00ec3934();
      uVar3 = extraout_r3_00;
    }
    iVar6 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar10,uVar7,**(undefined4 **)(_UNK_00fd1120 + 0xfd0fd4),uVar3,uVar14,puVar15
                      );
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_MetaProgressionSingleReward__Init_fbf9b0(iVar6,uVar1);
    iVar8 = *(int *)(param_1 + 0x40);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar8 + 8);
    uVar11 = *(uint *)(iVar8 + 0xc);
    iVar12 = *piVar13;
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar9 == 0) break;
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar11 + 1;
      piVar2 = (int *)(iVar9 + uVar11 * 4 + 0x10);
      *piVar2 = iVar6;
      thunk_FUN_00ec5080(piVar2,iVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

