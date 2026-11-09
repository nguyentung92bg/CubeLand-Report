/* IL2CPP: Rotatelab.Scripts.ObjectManager$$StartLevelStartSpin
void Rotatelab_Scripts_ObjectManager__StartLevelStartSpin (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0100bc4c) */
/* WARNING: Removing unreachable block (ram,0x0100bc54) */
/* WARNING: Removing unreachable block (ram,0x0100bc58) */
/* WARNING: Removing unreachable block (ram,0x014984c8) */
/* WARNING: Removing unreachable block (ram,0x014984e0) */
/* WARNING: Removing unreachable block (ram,0x014984e8) */
/* WARNING: Removing unreachable block (ram,0x014984f0) */
/* WARNING: Removing unreachable block (ram,0x014984f4) */
/* WARNING: Removing unreachable block (ram,0x01498514) */
/* WARNING: Removing unreachable block (ram,0x0149852c) */
/* WARNING: Removing unreachable block (ram,0x01498530) */
/* WARNING: Removing unreachable block (ram,0x01498544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$StartLevelStartSpin
   void Rotatelab_Scripts_ObjectManager__StartLevelStartSpin (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_ObjectManager__StartLevelStartSpin_102d734(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_0103d7d8 + 0x103d748);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d7dc + 0x103d75c));
    *pcVar4 = '\x01';
  }
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0103d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
      return iVar3;
    }
    return 0;
  }
  puVar2 = *(undefined4 **)(_UNK_0103d7e0 + 0x103d784);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0100bcc8 + 0x100bbf0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bccc + 0x100bc04),0,param_1,0,unaff_r4,unaff_r5);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd0 + 0x100bc10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd4 + 0x100bc1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd8 + 0x100bc28));
    *pcVar4 = '\x01';
  }
  uVar6 = *(undefined4 *)(iVar3 + 0x18);
  if (*(int *)(**(int **)(_UNK_0100bcdc + 0x100bc40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__AddUnique_object__1484964
            (uVar6,param_1,**(undefined4 **)(_UNK_0100bce4 + 0x100bc90));
  if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar3 + 0x18) + 0xc);
  if (iVar1 < 1) {
    return iVar1;
  }
  pcVar4 = (char *)(_UNK_0100b928 + 0x100b898);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b92c + 0x100b8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b930 + 0x100b8b8));
    *pcVar4 = '\x01';
  }
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    return 0;
  }
  piVar5 = *(int **)(_UNK_0100b934 + 0x100b8e0);
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),0,*(undefined4 *)(iVar3 + 0x14));
  return iVar3;
}

