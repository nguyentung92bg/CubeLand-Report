/* IL2CPP: Rotatelab.Shop.StarChallenge$$RequestChestView
void Rotatelab_Shop_StarChallenge__RequestChestView (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$RequestChestView
   void Rotatelab_Shop_StarChallenge__RequestChestView (Rotatelab_Shop_StarChallenge_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__RequestChestView_10c598c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_010d5aac + 0x10d59a4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5ab0 + 0x10d59b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5ab4 + 0x10d59c4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x1c),0);
  DG_Tweening_ShortcutExtensions__DOShakePosition_116bbe8
            (uVar1,0x3e4ccccd,0x41200000,10,0x42b40000,0,1,0,0);
  piVar5 = *(int **)(_UNK_010d5ab8 + 0x10d5a2c);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))
            (*(undefined4 *)(iVar2 + 0x20),uVar1,uVar3,*(undefined4 *)(iVar2 + 0x14));
  return;
}

