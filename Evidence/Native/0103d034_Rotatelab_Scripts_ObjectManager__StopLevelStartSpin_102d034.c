/* IL2CPP: Rotatelab.Scripts.ObjectManager$$StopLevelStartSpin
void Rotatelab_Scripts_ObjectManager__StopLevelStartSpin (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0100bc74) */
/* WARNING: Removing unreachable block (ram,0x0100bc7c) */
/* WARNING: Removing unreachable block (ram,0x0100bc80) */
/* WARNING: Removing unreachable block (ram,0x0100bca4) */
/* WARNING: Removing unreachable block (ram,0x0100bca8) */
/* WARNING: Removing unreachable block (ram,0x0100bcc4) */
/* WARNING: Removing unreachable block (ram,0x0100b880) */
/* WARNING: Removing unreachable block (ram,0x0100b8a0) */
/* WARNING: Removing unreachable block (ram,0x0100b8c0) */
/* WARNING: Removing unreachable block (ram,0x0100b8c8) */
/* WARNING: Removing unreachable block (ram,0x0100b8cc) */
/* WARNING: Removing unreachable block (ram,0x0100b8d0) */
/* WARNING: Removing unreachable block (ram,0x0100b8d4) */
/* WARNING: Removing unreachable block (ram,0x0100b8f0) */
/* WARNING: Removing unreachable block (ram,0x0100b8f8) */
/* WARNING: Removing unreachable block (ram,0x0100b908) */
/* WARNING: Removing unreachable block (ram,0x0100b90c) */
/* WARNING: Removing unreachable block (ram,0x023b2814) */
/* WARNING: Removing unreachable block (ram,0x023b2818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$StopLevelStartSpin
   void Rotatelab_Scripts_ObjectManager__StopLevelStartSpin (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

uint Rotatelab_Scripts_ObjectManager__StopLevelStartSpin_102d034(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0103d0ac + 0x103d048);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d0b0 + 0x103d05c));
    *pcVar6 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_0103d0b4 + 0x103d074);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0100bcc8 + 0x100bbf0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bccc + 0x100bc04),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd0 + 0x100bc10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd4 + 0x100bc1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd8 + 0x100bc28));
    *pcVar6 = '\x01';
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (*(int *)(**(int **)(_UNK_0100bcdc + 0x100bc40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = **(int **)(_UNK_0100bce0 + 0x100bc68);
  if ((*(int *)(iVar5 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar5 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar5);
  }
  if (iVar3 != 0) {
    uVar4 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (iVar3,param_1,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 8));
    if (-1 < (int)uVar4) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (iVar3,uVar4,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0xc));
    }
    return ~uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

