/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$UpdateValidTargetState
void Rotatelab_Boosters_CannonBoosterController__UpdateValidTargetState (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$UpdateValidTargetState
   void Rotatelab_Boosters_CannonBoosterController__UpdateValidTargetState
   (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController__UpdateValidTargetState_11364ec(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01146728 + 0x1146504);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114672c + 0x1146518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146730 + 0x1146524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146734 + 0x1146530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146738 + 0x114653c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114673c + 0x1146548));
    *pcVar8 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01146740 + 0x114655c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(iVar1 + 0xc);
  if (iVar13 < 1) {
    bVar7 = false;
  }
  else {
    iVar9 = 0;
    bVar7 = true;
    puVar15 = *(undefined4 **)(_UNK_01146744 + 0x11465a0);
    piVar11 = *(int **)(_UNK_01146748 + 0x11465a8);
    do {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar2 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (iVar1,iVar9,*puVar15);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Equality_36033f4(piVar2,0,0);
      if (iVar3 == 0) {
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (((char)piVar2[6] == '\0') &&
           (piVar4 = (int *)thunk_FUN_00f00bc8(piVar2,**(undefined4 **)(_UNK_0114674c + 0x114662c)),
           piVar4 != (int *)0x0)) {
          iVar3 = *piVar4;
          uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar14 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(_UNK_01146750 + 0x1146650)) {
                puVar5 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                goto LAB_01146698;
              }
              uVar14 = uVar14 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar14 != 0);
          }
          puVar5 = (undefined4 *)FUN_00efdb38(piVar4,**(int **)(_UNK_01146750 + 0x1146650),0);
LAB_01146698:
          iVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
          if (iVar3 != 0) {
            if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar3 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
            if (iVar3 != 0) break;
          }
        }
      }
      iVar9 = iVar9 + 1;
      bVar7 = iVar9 < iVar13;
    } while (iVar9 != iVar13);
  }
  if ((bool)*(char *)(param_1 + 0x3d) == bVar7) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x3d) = bVar7;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01144d60 + 0x1144ba8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144d64 + 0x1144bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144d68 + 0x1144bc8));
    *pcVar8 = '\x01';
  }
  piVar11 = (int *)(iVar1 + 0xa4);
  if (*piVar11 == 0) {
    iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01144d6c + 0x1144bec));
    UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar13,0);
    *piVar11 = iVar13;
    thunk_FUN_00ec5080(piVar11,iVar13);
  }
  uVar10 = 0x3f800000;
  uVar12 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_2c = 0x3f800000;
  if ((~bVar7 & 1U) != 0) {
    piVar2 = *(int **)(_UNK_01144d70 + 0x1144c34);
    iVar13 = *piVar2;
    if (*(int *)(iVar13 + 0x74) == 0) {
      FUN_00ec3934();
      iVar13 = *piVar2;
    }
    iVar13 = *(int *)(iVar13 + 0x5c);
    uVar12 = *(undefined4 *)(iVar13 + 4);
    uVar10 = *(undefined4 *)(iVar13 + 8);
    uStack_2c = *(undefined4 *)(iVar13 + 0xc);
    uStack_28 = *(undefined4 *)(iVar13 + 0x10);
  }
  uVar14 = 0;
  while( true ) {
    if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x24) + 0xc) <= (int)uVar14) {
      return;
    }
    iVar13 = *(int *)(iVar1 + 0x24);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) <= uVar14) break;
    iVar13 = *(int *)(iVar13 + uVar14 * 4 + 0x10);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__GetPropertyBlock_35c5108(iVar13,*piVar11,0);
    piVar2 = *(int **)(_UNK_01144d74 + 0x1144cd8);
    iVar3 = *piVar11;
    iVar9 = *piVar2;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar2;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
              (iVar3,**(undefined4 **)(iVar9 + 0x5c),uVar12,uVar10,uStack_2c,uStack_28,0);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__SetPropertyBlock_35c5100(iVar13,*piVar11,0);
    uVar14 = uVar14 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

