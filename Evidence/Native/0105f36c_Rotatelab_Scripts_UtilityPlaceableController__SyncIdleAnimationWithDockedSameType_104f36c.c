/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$SyncIdleAnimationWithDockedSameType
void Rotatelab_Scripts_UtilityPlaceableController__SyncIdleAnimationWithDockedSameType (Rotatelab_Scripts_UtilityPlaceableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$SyncIdleAnimationWithDockedSameType
   void Rotatelab_Scripts_UtilityPlaceableController__SyncIdleAnimationWithDockedSameType
   (Rotatelab_Scripts_UtilityPlaceableController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_UtilityPlaceableController__SyncIdleAnimationWithDockedSameType_104f36c
               (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_0105f6b4 + 0x105f384);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6b8 + 0x105f398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6bc + 0x105f3a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6c0 + 0x105f3b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6c4 + 0x105f3bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6c8 + 0x105f3c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6cc + 0x105f3d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f6d0 + 0x105f3e0));
    *pcVar5 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_54 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  iStack_44 = iStack_54;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  iStack_2c = iStack_54;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105f6d4 + 0x105f404));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_90,*(int *)(iVar1 + 0x54),**(undefined4 **)(_UNK_0105f6d8 + 0x105f44c));
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  uStack_30 = uStack_88;
  iStack_2c = iStack_84;
  uStack_68 = 0;
  puVar6 = *(undefined4 **)(_UNK_0105f6dc + 0x105f474);
  puVar8 = *(undefined4 **)(_UNK_0105f6e0 + 0x105f47c);
  piVar7 = *(int **)(_UNK_0105f6e4 + 0x105f484);
  puStack_64 = &uStack_38;
  do {
    do {
      do {
        iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                          (&uStack_38,*puVar6);
        if (iVar1 == 0) goto LAB_0105f60c;
        if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (iStack_2c,*puVar8);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
      } while (iVar2 != 0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,param_1,0);
    } while (iVar2 != 0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Object__GetType_2bb9c9c(iVar1,0);
    uVar4 = System_Object__GetType_2bb9c9c(param_1,0);
    if (*(int *)(*(int *)(*(int *)(_UNK_0105f6e8 + 0x105f544) + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = System_Type__op_Inequality_2b8c0a8(uVar3,uVar4,0);
  } while (iVar2 != 0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__GetCurrentAnimatorStateInfo_3590de8(&uStack_90,*(int *)(iVar1 + 0x10),0,0);
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  uStack_58 = uStack_88;
  iStack_54 = iStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  iStack_44 = iStack_74;
  uStack_40 = uStack_70;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = UnityEngine_AnimatorStateInfo__get_fullPathHash_35902d4(&uStack_60,0);
  uVar4 = UnityEngine_AnimatorStateInfo__get_normalizedTime_35902dc(&uStack_60,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = fmodf(uVar4,0x3f800000);
  UnityEngine_Animator__Play_35915e4(iVar1,uVar3,0,uVar4,0);
LAB_0105f60c:
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_0105f6ec + 0x105f618));
  return;
}

