/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$Awake
void Rotatelab_Networking_CloudSaveManager__Awake (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$Awake
   void Rotatelab_Networking_CloudSaveManager__Awake (Rotatelab_Networking_CloudSaveManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__Awake_1141a2c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar8 = (char *)(_UNK_01151be0 + 0x1151a44);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151be4 + 0x1151a58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151be8 + 0x1151a64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151bec + 0x1151a70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151bf0 + 0x1151a7c));
    *pcVar8 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01151bf4 + 0x1151a90));
  iVar5 = Rotatelab_Networking_CloudSaveManager__LoadFromLocal_1141c04(param_1);
  piVar9 = (int *)(param_1 + 0x14);
  *piVar9 = iVar5;
  thunk_FUN_00ec5080(piVar9,iVar5);
  iVar5 = *piVar9;
  if (iVar5 == 0) {
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01151bf8 + 0x1151acc));
    Rotatelab_Networking_CloudSaveData___ctor_1141350();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    uVar6 = thunk_FUN_00ec5080(piVar9,uVar6);
    Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromLegacyPlayerPrefs_1141d54
              (uVar6,*(undefined4 *)(param_1 + 0x14));
    Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromHiroCache_1142798
              (param_1,*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion_1140d0c(*(int *)(param_1 + 0x14));
    Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(param_1);
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  piVar10 = *(int **)(iVar5 + 0x58);
  iVar5 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar5 + 0x30),0);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 5;
  if (iVar5 != 0) {
    uVar6 = 10;
  }
  pcVar7 = *(code **)(*piVar10 + 0x118);
  (*pcVar7)(piVar10,pcVar7,uVar6,0,*(undefined4 *)(*piVar10 + 0x11c));
  if (*piVar9 != 0) {
    iVar5 = *(int *)(*piVar9 + 0x30);
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01151bfc + 0x1151b8c));
    System_Action_bool____ctor_17aaff0(uVar6,param_1,**(undefined4 **)(_UNK_01151c00 + 0x1151bac),0)
    ;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar8 = (char *)(_UNK_00fbe214 + 0xfbe0e8);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe218 + 0xfbe0fc),uVar6,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe21c + 0xfbe108));
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe220 + 0xfbe114));
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe224 + 0xfbe120));
      *pcVar8 = '\x01';
    }
    piVar9 = (int *)(iVar5 + 0x28);
    iVar3 = *piVar9;
    if (iVar3 == 0) {
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fbe228 + 0xfbe144));
      System_Action_long____ctor_1f10724(uVar4,iVar5,**(undefined4 **)(_UNK_00fbe22c + 0xfbe160),0);
      Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4
                (iVar5,uVar4,**(undefined4 **)(_UNK_00fbe230 + 0xfbe178));
      iVar3 = *(int *)(iVar5 + 0x28);
    }
    iVar5 = System_Delegate__Combine_2bbca94(iVar3,uVar6,0);
    if (iVar5 == 0) {
      *piVar9 = 0;
    }
    else {
      puVar11 = *(undefined4 **)(_UNK_00fbe234 + 0xfbe1ac);
      uVar6 = *puVar11;
      iVar3 = thunk_FUN_00f00bc8(iVar5,uVar6);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar5,uVar6);
      }
      uVar6 = *puVar11;
      *piVar9 = iVar3;
      iVar3 = thunk_FUN_00f00bc8(iVar5,uVar6);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar5,uVar6);
      }
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

