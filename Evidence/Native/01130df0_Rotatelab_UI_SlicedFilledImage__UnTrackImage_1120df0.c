/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnTrackImage
void Rotatelab_UI_SlicedFilledImage__UnTrackImage (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnTrackImage
   void Rotatelab_UI_SlicedFilledImage__UnTrackImage (Rotatelab_UI_SlicedFilledImage_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__UnTrackImage_1120df0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01130e84 + 0x1130e04);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130e88 + 0x1130e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130e8c + 0x1130e24));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01130e90 + 0x1130e38);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (iVar1,param_1,**(undefined4 **)(_UNK_01130e94 + 0x1130e70));
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return;
}

