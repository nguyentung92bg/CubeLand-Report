/* IL2CPP: Rotatelab.Pool.BulletPool$$OnWinSequenceStartedHandler
void Rotatelab_Pool_BulletPool__OnWinSequenceStartedHandler (Rotatelab_Pool_BulletPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$OnWinSequenceStartedHandler
   void Rotatelab_Pool_BulletPool__OnWinSequenceStartedHandler (Rotatelab_Pool_BulletPool_o* __this,
   const MethodInfo* method); */

void Rotatelab_Pool_BulletPool__OnWinSequenceStartedHandler_1102dd0(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_01112f70 + 0x1112de8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f74 + 0x1112dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f78 + 0x1112e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f7c + 0x1112e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f80 + 0x1112e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f84 + 0x1112e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112f88 + 0x1112e38));
    *pcVar2 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar3 = *(int **)(_UNK_01112f8c + 0x1112e54);
  uStack_20 = 0;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_01112f90 + 0x1112e7c));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_20,*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_01112f94 + 0x1112eac));
    uVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_01112f98 + 0x1112ecc);
    puVar6 = &uStack_20;
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_20,*puVar4), iVar1 != 0) {
      if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BulletController__SetWinSequenceActive_ff86e8
                (iStack_14,1,0,extraout_r3,uVar5,puVar6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_20,**(undefined4 **)(_UNK_01112f9c + 0x1112f0c));
  }
  return;
}

