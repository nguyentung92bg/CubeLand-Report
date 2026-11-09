/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$UpdateHpTexts
void Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$UpdateHpTexts
   void Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts
   (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts_100ec08(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  undefined4 uVar5;
  
  pcVar1 = (char *)(_UNK_0101ecc0 + 0x101ec1c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ecc4 + 0x101ec30));
    *pcVar1 = '\x01';
  }
  uVar3 = 0;
  puVar4 = *(undefined4 **)(_UNK_0101ecc8 + 0x101ec48);
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar3) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
    iVar2 = *(int *)(iVar2 + uVar3 * 4 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x38),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(iVar2,*puVar4,uVar5,0);
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

