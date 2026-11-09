/* IL2CPP: Rotatelab.Scripts.DockManager$$GetPlayOnBlasterCount
int32_t Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount (Rotatelab_Scripts_DockManager_o* __this, int32_t requestedCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$GetPlayOnBlasterCount
   int32_t Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount (Rotatelab_Scripts_DockManager_o*
   __this, int32_t requestedCount, const MethodInfo* method); */

int Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount_1007594(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pcVar6 = (char *)(_UNK_010176c8 + 0x10175ac);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010176cc + 0x10175c0));
    *pcVar6 = '\x01';
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_010176d0 + 0x10175d8),3);
  uVar2 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(*(undefined4 *)(param_1 + 0x44),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar3,0);
  uVar4 = *(uint *)(iVar1 + 0xc);
  if (1 < uVar4) {
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    if (uVar4 < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    iVar7 = *(int *)(iVar1 + 0x10);
    if (1 < (int)uVar4) {
      uVar8 = 0;
      do {
        uVar9 = uVar8 + 1;
        if (*(uint *)(iVar1 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar5 = *(int *)(iVar1 + 0x14 + uVar8 * 4);
        if ((iVar5 < iVar7) && (iVar7 = iVar5, *(uint *)(iVar1 + 0xc) <= uVar9)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar8 = uVar9;
      } while (uVar4 - 1 != uVar9);
    }
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

