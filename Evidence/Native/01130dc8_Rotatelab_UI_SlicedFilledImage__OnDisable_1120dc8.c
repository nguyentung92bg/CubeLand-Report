/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$OnDisable
void Rotatelab_UI_SlicedFilledImage__OnDisable (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$OnDisable
   void Rotatelab_UI_SlicedFilledImage__OnDisable (Rotatelab_UI_SlicedFilledImage_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__OnDisable_1120dc8(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char *pcVar3;
  int *piVar4;
  
  UnityEngine_UI_MaskableGraphic__OnDisable_39b59ec(param_1,0);
  if (*(char *)(param_1 + 0x9c) == '\0') {
    return;
  }
  pcVar3 = (char *)(_UNK_01130e84 + 0x1130e04);
  uVar2 = extraout_r3;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130e88 + 0x1130e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130e8c + 0x1130e24));
    *pcVar3 = '\x01';
    uVar2 = extraout_r3_00;
  }
  piVar4 = *(int **)(_UNK_01130e90 + 0x1130e38);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
    uVar2 = extraout_r3_01;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (iVar1,param_1,**(undefined4 **)(_UNK_01130e94 + 0x1130e70),uVar2,unaff_r4);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return;
}

