/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$GetCurrentTopBarTarget
int32_t Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$GetCurrentTopBarTarget
   int32_t Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cp, const MethodInfo* method); */

undefined4
Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_010b6fa4 + 0x10b6ee8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6fa8 + 0x10b6efc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6fac + 0x10b6f08));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (param_2 < *(int *)(iVar4 + 0xc)) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar2 + 0xc),param_2,**(undefined4 **)(_UNK_010b6fb0 + 0x10b6f6c));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined4 *)(iVar4 + 0xc);
  }
  else {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined4 *)(iVar2 + 0x1c);
  }
  return *puVar1;
}

