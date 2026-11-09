/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$set_Value
void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___set_Value (Rotatelab_Save_SavedValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1A8C574* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$set_Value
   void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___set_Value
   (Rotatelab_Save_SavedValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   value, const MethodInfo_1A8C574* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___set_Value_1a8c574
               (int *param_1,undefined4 *****param_2,int param_3)

{
  undefined4 ****ppppuVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *****pppppuVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  int aiStack_60 [3];
  undefined4 ****ppppuStack_54;
  undefined4 *puStack_50;
  int *piStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  undefined4 ****ppppuStack_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9c958 + 0x1a9c598);
  piVar2 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar14 = *(int *)(piVar2[2] + 0x84);
  uVar6 = iVar14 + 7U & 0xfffffff8;
  puVar10 = (undefined4 *)((int)aiStack_60 + (8 - uVar6));
  piVar7 = (int *)((int)puVar10 - uVar6);
  piStack_44 = piVar7;
  ppppuStack_3c = param_2;
  piVar3 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*piVar2 + 0x40) + 0x3c);
  piVar2 = piStack_44;
  ppppuStack_54 = param_2;
  puStack_50 = puVar10;
  piStack_4c = param_1;
  iStack_40 = iVar14;
  if (*piVar3 != 0) {
    piVar2 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60)
                                                       + 0x40) + 0x3c);
    iVar11 = *(int *)(param_3 + 0x10);
    iVar13 = *piVar2;
    pppppuVar9 = &ppppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(iVar11 + 0x60) + 8) + 0x14) < 0) {
      pppppuVar9 = param_2;
    }
    thunk_FUN_00f95db8(puVar10,pppppuVar9,iVar14);
    piVar2 = piStack_44;
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar14 = *(int *)(iVar11 + 0x60);
    puVar8 = *(undefined4 **)(iVar14 + 0x20);
    pcVar12 = (code *)puVar8[2];
    if (-1 < *(int *)(*(int *)(iVar14 + 8) + 0x14)) {
      puVar10 = (undefined4 *)*puVar10;
    }
    uVar4 = *puVar8;
    piStack_34 = piStack_44;
    puStack_38 = puVar10;
    piVar7[-2] = (int)piStack_44;
    (*pcVar12)(uVar4,puVar8,iVar13,&puStack_38);
    pppppuVar9 = &ppppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 8) + 0x14) < 0) {
      pppppuVar9 = param_2;
    }
    thunk_FUN_00f95db8(pppppuVar9,piVar2,iStack_40);
    ppppuStack_54 = ppppuStack_3c;
  }
  piVar3 = piStack_4c;
  piVar5 = (int *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x24))();
  puVar10 = puStack_50;
  puVar8 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x30);
  uVar4 = *puVar8;
  pcVar12 = (code *)puVar8[2];
  puStack_38 = puStack_50;
  piVar7[-2] = (int)puStack_50;
  (*pcVar12)(uVar4,puVar8,piVar3,&puStack_38);
  iVar14 = *(int *)(param_3 + 0x10);
  pppppuVar9 = &ppppuStack_3c;
  if (*(int *)(*(int *)(*(int *)(iVar14 + 0x60) + 8) + 0x14) < 0) {
    pppppuVar9 = (undefined4 *****)ppppuStack_54;
  }
  iStack_48 = param_3;
  thunk_FUN_00f95db8(piVar2,pppppuVar9,iStack_40);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puStack_38 = puVar10;
  if (-1 < *(int *)(*(int *)(*(int *)(iVar14 + 0x60) + 8) + 0x14)) {
    piVar2 = (int *)*piVar2;
    puStack_38 = (undefined4 *)*puVar10;
  }
  iVar14 = *(int *)(*piVar5 + 0x104);
  uVar4 = *(undefined4 *)(iVar14 + 4);
  pcVar12 = *(code **)(iVar14 + 8);
  piStack_34 = piVar2;
  piVar7[-2] = (int)&cStack_2d;
  (*pcVar12)(uVar4,iVar14,piVar5,&puStack_38);
  iVar11 = iStack_40;
  iVar14 = iStack_48;
  ppppuVar1 = ppppuStack_54;
  if (cStack_2d == '\0') {
    iVar13 = *(int *)(iStack_48 + 0x10);
    pppppuVar9 = &ppppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(iVar13 + 0x60) + 8) + 0x14) < 0) {
      pppppuVar9 = (undefined4 *****)ppppuStack_54;
    }
    thunk_FUN_00f95db8(puVar10,pppppuVar9,iStack_40);
    piVar2 = piStack_4c;
    puStack_38 = puVar10;
    if (-1 < *(int *)(*(int *)(*(int *)(iVar13 + 0x60) + 8) + 0x14)) {
      puStack_38 = (undefined4 *)*puVar10;
    }
    iVar13 = *(int *)(*piStack_4c + 0xec);
    pcVar12 = *(code **)(iVar13 + 8);
    uVar4 = *(undefined4 *)(iVar13 + 4);
    piVar7[-2] = (int)puStack_38;
    (*pcVar12)(uVar4,iVar13,piVar2,&puStack_38);
    piVar3 = piStack_44;
    iVar13 = *(int *)(iVar14 + 0x10);
    pppppuVar9 = &ppppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(iVar13 + 0x60) + 8) + 0x14) < 0) {
      pppppuVar9 = (undefined4 *****)ppppuVar1;
    }
    thunk_FUN_00f95db8(piStack_44,pppppuVar9,iVar11);
    func_0x00ec37e8(piVar2,*(int *)(**(int **)(iVar13 + 0x60) + 0x40) + 0x78,piVar3,iVar11);
    piVar2 = (int *)thunk_FUN_00f1b490(piVar2,*(int *)(**(int **)(*(int *)(iVar14 + 0x10) + 0x60) +
                                                      0x40) + 0x50);
    iVar11 = *piVar2;
    if (iVar11 != 0) {
      iVar14 = *(int *)(iVar14 + 0x10);
      pppppuVar9 = &ppppuStack_3c;
      if (*(int *)(*(int *)(*(int *)(iVar14 + 0x60) + 8) + 0x14) < 0) {
        pppppuVar9 = (undefined4 *****)ppppuVar1;
      }
      thunk_FUN_00f95db8(puVar10,pppppuVar9,iStack_40);
      iVar14 = *(int *)(iVar14 + 0x60);
      puVar8 = *(undefined4 **)(iVar14 + 0x3c);
      uVar4 = *puVar8;
      pcVar12 = (code *)puVar8[2];
      if (-1 < *(int *)(*(int *)(iVar14 + 8) + 0x14)) {
        puVar10 = (undefined4 *)*puVar10;
      }
      puStack_38 = puVar10;
      piVar7[-2] = (int)puVar10;
      (*pcVar12)(uVar4,puVar8,iVar11,&puStack_38);
    }
  }
  if (**(int **)(_UNK_01a9c95c + 0x1a9c944) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

