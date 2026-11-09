/* IL2CPP: Rotatelab.GameExtensions.<>c__DisplayClass6_0<object>$$<PreventFailSearchDuringAnimation>b__0
void Rotatelab_GameExtensions___c__DisplayClass6_0_object____PreventFailSearchDuringAnimation_b__0 (Rotatelab_GameExtensions___c__DisplayClass6_0_T__o* __this, const MethodInfo_178098C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027a1c) */
/* WARNING: Removing unreachable block (ram,0x01027a24) */
/* WARNING: Removing unreachable block (ram,0x01027a28) */
/* WARNING: Removing unreachable block (ram,0x01494980) */
/* WARNING: Removing unreachable block (ram,0x01494988) */
/* WARNING: Removing unreachable block (ram,0x01494990) */
/* WARNING: Removing unreachable block (ram,0x01494994) */
/* WARNING: Removing unreachable block (ram,0x014949a8) */
/* WARNING: Removing unreachable block (ram,0x014949b4) */
/* WARNING: Removing unreachable block (ram,0x014949c4) */
/* WARNING: Removing unreachable block (ram,0x014949cc) */
/* WARNING: Removing unreachable block (ram,0x014949f4) */
/* WARNING: Removing unreachable block (ram,0x014949d8) */
/* WARNING: Removing unreachable block (ram,0x014949e4) */
/* WARNING: Removing unreachable block (ram,0x01494a00) */
/* WARNING: Removing unreachable block (ram,0x01494a20) */
/* WARNING: Removing unreachable block (ram,0x01494a34) */
/* WARNING: Removing unreachable block (ram,0x01494a40) */
/* WARNING: Removing unreachable block (ram,0x01494a50) */
/* WARNING: Removing unreachable block (ram,0x01494a58) */
/* WARNING: Removing unreachable block (ram,0x01494a80) */
/* WARNING: Removing unreachable block (ram,0x01494a64) */
/* WARNING: Removing unreachable block (ram,0x01494a70) */
/* WARNING: Removing unreachable block (ram,0x01494a8c) */
/* WARNING: Removing unreachable block (ram,0x01494aa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.GameExtensions.<>c__DisplayClass6_0<object>$$<PreventFailSearchDuringAnimation>b__0
   void 
   Rotatelab_GameExtensions___c__DisplayClass6_0_object____PreventFailSearchDuringAnimation_b__0
   (Rotatelab_GameExtensions___c__DisplayClass6_0_T__o* __this, const MethodInfo_178098C* method);
    */

uint Rotatelab_GameExtensions___c__DisplayClass6_0_object____PreventFailSearchDuringAnimation_b__0_178098c
               (int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_017909f8 + 0x17909a0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_017909fc + 0x17909b4));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01790a00 + 0x17909c8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01027a44 + 0x10279a4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a48 + 0x10279b8),1,uVar4,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a4c + 0x10279c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a50 + 0x10279d0));
    *pcVar5 = '\x01';
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (*(int *)(**(int **)(_UNK_01027a54 + 0x10279e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_01027a58 + 0x1027a10);
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

