/* IL2CPP: Rotatelab.MetaProgressionController$$GetStageIndex
int32_t Rotatelab_MetaProgressionController__GetStageIndex (Rotatelab_MetaProgressionController_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$GetStageIndex
   int32_t Rotatelab_MetaProgressionController__GetStageIndex
   (Rotatelab_MetaProgressionController_o* __this, int32_t level, const MethodInfo* method); */

int Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar1 = (char *)(_UNK_00fcddcc + 0xfcdd08);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcddd0 + 0xfcdd1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcddd4 + 0xfcdd28));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0xc) + 1;
  puVar4 = *(undefined4 **)(_UNK_00fcddd8 + 0xfcdd64);
  while( true ) {
    if (iVar2 + -2 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar2 + -2,*puVar4);
    if (iVar3 == 0) break;
    iVar2 = iVar2 + -1;
    if (*(int *)(iVar3 + 8) <= param_2) {
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

