/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$Start
void Rotatelab_WinStreak_WinStreakManager__Start (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$Start
   void Rotatelab_WinStreak_WinStreakManager__Start (Rotatelab_WinStreak_WinStreakManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__Start_1091cd0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  pcVar6 = (char *)(_UNK_010a216c + 0x10a1ce8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2170 + 0x10a1cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2174 + 0x10a1d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2178 + 0x10a1d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a217c + 0x10a1d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2180 + 0x10a1d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2184 + 0x10a1d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2188 + 0x10a1d44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a218c + 0x10a1d50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2190 + 0x10a1d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2194 + 0x10a1d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2198 + 0x10a1d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a219c + 0x10a1d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a21a0 + 0x10a1d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a21a4 + 0x10a1d98));
    *pcVar6 = '\x01';
  }
  Rotatelab_WinStreak_WinStreakManager__Refresh_10921e0(param_1);
  piVar10 = *(int **)(_UNK_010a21a8 + 0x10a1db4);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xd8);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x2c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar3,uVar4,0,2,**(undefined4 **)(_UNK_010a21ac + 0x10a1e14));
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_010a21b0 + 0x10a1e3c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0xb4);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,param_1,**(undefined4 **)(_UNK_010a21b4 + 0x10a1e5c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar4,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0xb4);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,param_1,**(undefined4 **)(_UNK_010a21b8 + 0x10a1eb4),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar4,0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x3c) + 0xb4);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,param_1,**(undefined4 **)(_UNK_010a21bc + 0x10a1f0c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar4,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a21c0 + 0x10a1f3c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(_UNK_010a21c4 + 0x10a1f5c);
  piVar9 = (int *)(iVar3 + 0x20);
  iVar3 = *piVar9;
  uVar4 = thunk_FUN_00f00cdc(*piVar11);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010a21c8 + 0x10a1f80),0);
  piVar5 = (int *)System_Delegate__Combine_2bbca94(iVar3,uVar4,0);
  if (piVar5 == (int *)0x0) {
    *piVar9 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar3 = *piVar11;
    if (*piVar5 != iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar5);
    }
    *piVar9 = (int)piVar5;
    if (*piVar5 != iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar5);
    }
  }
  thunk_FUN_00ec5080(piVar9,piVar5);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(*piVar11);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010a21cc + 0x10a2030),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x74) = uVar4;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x88);
  uVar4 = thunk_FUN_00f00cdc(*piVar11);
  puVar7 = *(undefined4 **)(_UNK_010a21d0 + 0x10a2088);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar7,0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x88) = uVar4;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x94);
  uVar4 = thunk_FUN_00f00cdc(*piVar11);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar7,0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x94) = uVar4;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a21d4 + 0x10a2110));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010a21d8 + 0x10a2130),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar8,uVar4,**(undefined4 **)(_UNK_010a21dc + 0x10a2148));
  puVar7 = (undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x120);
  *puVar7 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar7 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)puVar7 & 0x1ffff) >> 0xc);
  return;
}

