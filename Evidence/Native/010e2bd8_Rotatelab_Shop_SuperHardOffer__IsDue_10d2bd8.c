/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$IsDue
bool Rotatelab_Shop_SuperHardOffer__IsDue (Rotatelab_Shop_SuperHardOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$IsDue
   bool Rotatelab_Shop_SuperHardOffer__IsDue (Rotatelab_Shop_SuperHardOffer_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Shop_SuperHardOffer__IsDue_10d2bd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  bool bVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_010e2dd4 + 0x10e2bec);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2dd8 + 0x10e2c00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2ddc + 0x10e2c0c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e2de0 + 0x10e2c20));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar5 = false;
  if (*(int *)(*(int *)(iVar1 + 0x18) + 0x50) == 2) {
    piVar7 = *(int **)(_UNK_010e2de4 + 0x10e2c60);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    bVar5 = false;
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    iVar3 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x24);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
      if (iVar1 == iVar3) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          return false;
        }
      }
      else {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
        uVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
        *(undefined1 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      iVar1 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (-1 < *(int *)(iVar1 + 0x14)) {
        iVar3 = *(int *)(param_1 + 0x2c);
        iVar1 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar1 + 0x14) <= iVar3) {
          return false;
        }
      }
      iVar1 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x10) < 1) {
        bVar5 = false;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        iVar1 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x10);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        FUN_00f88884(uVar2,uVar4);
        bVar5 = extraout_r1 == 0;
      }
    }
  }
  return bVar5;
}

