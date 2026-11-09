/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$DecreaseHpVisually
void Rotatelab_Scripts_GiftWrapperController__DecreaseHpVisually (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$DecreaseHpVisually
   void Rotatelab_Scripts_GiftWrapperController__DecreaseHpVisually
   (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_GiftWrapperController__DecreaseHpVisually_100ecdc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_38 [20];
  
  pcVar3 = (char *)(_UNK_0101ee58 + 0x101ecf4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ee5c + 0x101ed08));
    *pcVar3 = '\x01';
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts_100ec08(param_1);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar9 = 0;
    piVar8 = *(int **)(_UNK_0101ee60 + 0x101ed4c);
    while( true ) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar9) break;
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = TMPro_TMP_Text__get_transform_34fc774(iVar4,0);
      if (*(char *)(_UNK_0101ee64 + 0x101edb4) == '\0') {
        FUN_00ec37c0(piVar8);
        *(undefined1 *)(_UNK_0101ee68 + 0x101edd4) = 1;
      }
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
      uVar6 = *puVar2;
      uVar5 = puVar2[1];
      uVar7 = puVar2[2];
      if (*(int *)(**(int **)(_UNK_0101ee6c + 0x101ede4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce6560
                (auStack_38,uVar1,uVar6,uVar5,uVar7,0x3eb33333,0,0,0,0,0,1,0,0,0,0,0);
      uVar9 = uVar9 + 1;
    }
  }
  return;
}

