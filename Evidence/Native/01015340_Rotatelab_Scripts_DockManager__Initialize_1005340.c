/* IL2CPP: Rotatelab.Scripts.DockManager$$Initialize
void Rotatelab_Scripts_DockManager__Initialize (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$Initialize
   void Rotatelab_Scripts_DockManager__Initialize (Rotatelab_Scripts_DockManager_o* __this,
   Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__Initialize_1005340(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r1;
  bool bVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar9 = (char *)(_UNK_01015764 + 0x1015364);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015768 + 0x1015378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101576c + 0x1015384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015770 + 0x1015390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015774 + 0x101539c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015778 + 0x10153a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101577c + 0x10153b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015780 + 0x10153c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015784 + 0x10153cc));
    *pcVar9 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01015788 + 0x10153e0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar2 + 0x4c),**(undefined4 **)(_UNK_0101578c + 0x1015400));
  uVar10 = *(undefined4 *)(param_1 + 0x34);
  *(char *)(param_1 + 100) = (char)iVar2;
  if (iVar2 == 0) {
    uVar3 = System_Index__op_Implicit_2b692c0(6,0);
    System_Range__EndAt_2b83814(&uStack_44,uVar3,0);
    uVar10 = System_Runtime_CompilerServices_RuntimeHelpers__GetSubArray_object__159cbe0
                       (uVar10,uStack_44,uStack_40,**(undefined4 **)(_UNK_01015790 + 0x1015448));
  }
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x48),uVar10);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_SoLevelData__HasIvyLock_fe401c(param_2,0);
  iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_01015794 + 0x10154a4),*(undefined4 *)(param_2 + 0x18))
  ;
  piVar5 = (int *)(param_1 + 0x44);
  *piVar5 = iVar4;
  thunk_FUN_00ec5080();
  iVar4 = 0x10;
  uVar14 = 0;
  while( true ) {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar5 + 0xc) <= (int)uVar14) {
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar12 = *(undefined4 **)(_UNK_010157a4 + 0x101570c);
      System_Collections_Generic_List_object___AddRange_267dcf0
                (*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x44),*puVar12);
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___AddRange_267dcf0
                (*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),*puVar12);
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___AddRange_267dcf0
                (*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x4c),*puVar12);
      return;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_01015798 + 0x1015500) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar3,uVar10,0,**(undefined4 **)(_UNK_0101579c + 0x1015528));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localPosition_3613b6c(&uStack_44,*(int *)(param_1 + 0x18),0);
    uVar1 = uStack_3c;
    uVar3 = uStack_40;
    uVar10 = uStack_44;
    iVar11 = *piVar5;
    if (iVar11 == 0) break;
    fVar17 = *(float *)(param_1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010157a0 + 0x1015594) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar16 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(*(int *)(iVar11 + 0xc) + -1,(byte)(in_fpscr >> 0x16) & 3);
    Rotatelab_Extensions__WithX_fc17b4
              (&uStack_44,uVar10,uVar3,uVar1,fVar17 * fVar15 * -0.5 + fVar17 * fVar16,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar8 = false;
    UnityEngine_Transform__set_localPosition_3613c6c(iVar7,uStack_44,uStack_40,uStack_3c,0);
    if (iVar2 != 0) {
      if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar8 = uVar14 - *(int *)(*piVar5 + 0xc) == -1;
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BlasterDockController__Init_10057a8(iVar6,extraout_r1,0,bVar8);
    piVar13 = (int *)*piVar5;
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar6 != 0) &&
       (iVar7 = thunk_FUN_00f00bc8(iVar6,*(undefined4 *)(*piVar13 + 0x20)), iVar7 == 0)) {
      uVar10 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar10,0);
    }
    if ((uint)piVar13[3] <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)((int)piVar13 + iVar4) = iVar6;
    thunk_FUN_00ec5080((int *)((int)piVar13 + iVar4),iVar6);
    iVar4 = iVar4 + 4;
    uVar14 = uVar14 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

