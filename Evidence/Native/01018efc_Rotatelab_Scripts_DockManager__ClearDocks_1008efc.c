/* IL2CPP: Rotatelab.Scripts.DockManager$$ClearDocks
void Rotatelab_Scripts_DockManager__ClearDocks (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$ClearDocks
   void Rotatelab_Scripts_DockManager__ClearDocks (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__ClearDocks_1008efc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01019390 + 0x1018f14);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019394 + 0x1018f28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019398 + 0x1018f34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101939c + 0x1018f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193a0 + 0x1018f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193a4 + 0x1018f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193a8 + 0x1018f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193ac + 0x1018f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193b0 + 0x1018f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193b4 + 0x1018f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193b8 + 0x1018f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193bc + 0x1018fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010193c0 + 0x1018fac));
    *pcVar3 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x50),**(undefined4 **)(_UNK_010193c4 + 0x1018fec));
  uStack_38 = uStack_58;
  uStack_34 = puStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  uStack_58 = 0;
  puVar8 = *(undefined4 **)(_UNK_010193c8 + 0x1019014);
  puStack_54 = &uStack_38;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar8), iVar1 != 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__OnLevelBeingCleared_10093f0(iStack_2c);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_010193cc + 0x101904c));
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x54),**(undefined4 **)(_UNK_010193d4 + 0x1019074));
  uStack_48 = uStack_58;
  puStack_44 = puStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  uStack_58 = 0;
  puVar8 = *(undefined4 **)(_UNK_010193d8 + 0x101909c);
  puStack_54 = &uStack_48;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_48,*puVar8), iVar1 != 0) {
    if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__OnLevelBeingCleared_10093f0(iStack_3c);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_48,**(undefined4 **)(_UNK_010193dc + 0x10190d4));
  uVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  piVar9 = *(int **)(_UNK_010193e4 + 0x10190f8);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar7) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = *(int *)(iVar1 + 0x10 + uVar7 * 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__DestroyImmediate_36099bc(uVar2,0);
    uVar7 = uVar7 + 1;
  }
  uVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010193e8 + 0x1019174),0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x44),uVar2);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar1 = 0x10;
  *(undefined1 *)(param_1 + 0x65) = 0;
  iVar4 = 0;
  uVar7 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) <= (int)uVar7) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(_UNK_010193ec + 0x101920c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    PrimeTween_Tween__Stop_2ced694(iVar5 + iVar1,0);
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    iVar6 = *(int *)(param_1 + 0x5c);
    if (iVar6 == 0) break;
    if (*(uint *)(iVar6 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = iVar6 + iVar4;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localPosition_3613c6c
              (iVar5,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14),
               *(undefined4 *)(iVar6 + 0x18),0);
    iVar1 = iVar1 + 0x10;
    iVar4 = iVar4 + 0xc;
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

