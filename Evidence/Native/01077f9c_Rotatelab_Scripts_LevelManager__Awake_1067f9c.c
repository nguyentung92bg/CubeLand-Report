/* IL2CPP: Rotatelab.Scripts.LevelManager$$Awake
void Rotatelab_Scripts_LevelManager__Awake (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$Awake
   void Rotatelab_Scripts_LevelManager__Awake (Rotatelab_Scripts_LevelManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__Awake_1067f9c(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar3 = (char *)(_UNK_01077fec + 0x1077fb0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077ff0 + 0x1077fc4));
    *pcVar3 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01077ff4 + 0x1077fd8));
  pcVar3 = (char *)(_UNK_010781f8 + 0x1078010);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010781fc + 0x1078024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078200 + 0x1078030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078204 + 0x107803c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078208 + 0x1078048));
    *pcVar3 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0107820c + 0x1078060);
  piVar10 = (int *)(param_1 + 0x14);
  iVar4 = *piVar10;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01078210 + 0x1078084) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(iVar4,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x10);
    thunk_FUN_00ec5080(piVar10);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    piVar9 = *(int **)(_UNK_01078214 + 0x107810c);
    while( true ) {
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*piVar10 + 0xc);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar8) break;
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*piVar10 + 0xc);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + uVar8 * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x20) != '\0') {
        iVar1 = *(int *)(param_1 + 0x1c);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 8);
        uVar2 = *(uint *)(iVar1 + 0xc);
        iVar4 = *piVar9;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar2 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar2 + 1;
          *(uint *)(iVar6 + uVar2 * 4 + 0x10) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (iVar1,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
      }
      uVar8 = uVar8 + 1;
    }
  }
  return;
}

