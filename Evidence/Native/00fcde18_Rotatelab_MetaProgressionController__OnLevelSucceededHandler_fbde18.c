/* IL2CPP: Rotatelab.MetaProgressionController$$OnLevelSucceededHandler
void Rotatelab_MetaProgressionController__OnLevelSucceededHandler (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$OnLevelSucceededHandler
   void Rotatelab_MetaProgressionController__OnLevelSucceededHandler
   (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__OnLevelSucceededHandler_fbde18(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_00fcdef4 + 0xfcde2c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdef8 + 0xfcde40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdefc + 0xfcde4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdf00 + 0xfcde58));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fcdf04 + 0xfcde6c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68(0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar4,*(int *)(iVar4 + 0xc) + -1,**(undefined4 **)(_UNK_00fcdf08 + 0xfcdebc));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = iVar1 + 1;
  iVar2 = *(int *)(iVar4 + 8);
  if (iVar1 < *(int *)(iVar4 + 8)) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x44) = iVar2;
  return;
}

