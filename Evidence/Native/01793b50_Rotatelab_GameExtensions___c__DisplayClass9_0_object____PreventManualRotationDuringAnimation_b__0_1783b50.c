/* IL2CPP: Rotatelab.GameExtensions.<>c__DisplayClass9_0<object>$$<PreventManualRotationDuringAnimation>b__0
void Rotatelab_GameExtensions___c__DisplayClass9_0_object____PreventManualRotationDuringAnimation_b__0 (Rotatelab_GameExtensions___c__DisplayClass9_0_T__o* __this, const MethodInfo_1783B50* method);
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
/* IL2CPP:
   Rotatelab.GameExtensions.<>c__DisplayClass9_0<object>$$<PreventManualRotationDuringAnimation>b__0
   void 
   Rotatelab_GameExtensions___c__DisplayClass9_0_object____PreventManualRotationDuringAnimation_b__0
   (Rotatelab_GameExtensions___c__DisplayClass9_0_T__o* __this, const MethodInfo_1783B50* method);
    */

uint Rotatelab_GameExtensions___c__DisplayClass9_0_object____PreventManualRotationDuringAnimation_b__0_1783b50
               (int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01793bbc + 0x1793b64);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01793bc0 + 0x1793b78));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01793bc4 + 0x1793b8c));
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0100bcc8 + 0x100bbf0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bccc + 0x100bc04),1,uVar4,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd0 + 0x100bc10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd4 + 0x100bc1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd8 + 0x100bc28));
    *pcVar5 = '\x01';
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (*(int *)(**(int **)(_UNK_0100bcdc + 0x100bc40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_0100bce0 + 0x100bc68);
  if ((*(int *)(iVar3 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar3 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar3);
  }
  if (iVar2 != 0) {
    uVar1 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (iVar2,uVar4,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
    if (-1 < (int)uVar1) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (iVar2,uVar1,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc));
    }
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

