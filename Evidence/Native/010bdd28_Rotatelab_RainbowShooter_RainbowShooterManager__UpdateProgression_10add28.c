/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$UpdateProgression
void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateProgression (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$UpdateProgression
   void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateProgression
   (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateProgression_10add28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint in_fpscr;
  undefined4 uVar10;
  
  pcVar6 = (char *)(_UNK_010bdf04 + 0x10bdd40);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf08 + 0x10bdd54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf0c + 0x10bdd60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf10 + 0x10bdd6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf14 + 0x10bdd78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf18 + 0x10bdd84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdf1c + 0x10bdd90));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bdf20 + 0x10bdda4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = 0;
  iVar2 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    (iVar1,0);
  puVar8 = *(undefined4 **)(_UNK_010bdf24 + 0x10bddd8);
  while( true ) {
    if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x50) + 0xc) <= iVar7) break;
    if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x50),iVar7,*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar3,iVar7 < iVar2,0);
    iVar7 = iVar7 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_RainbowShooter_RainbowShooterController__get_MaxProgression_10ab8a0(iVar1,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffee4(iVar7,**(undefined4 **)(_UNK_010bdf28 + 0x10bde8c),uVar10,uVar4,0)
  ;
  piVar9 = *(int **)(param_1 + 0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_RainbowShooter_RainbowShooterController__get_MaxProgression_10ab8a0(iVar1,0);
  if (piVar9 != (int *)0x0) {
    iVar7 = **(int **)(_UNK_010bdf2c + 0x10bded0);
    if (iVar2 == iVar1) {
      iVar7 = **(int **)(_UNK_010bdf30 + 0x10bdedc);
    }
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar7 + 8);
    }
    TMPro_TMP_Text__PopulateTextBackingArray_34fef3c(piVar9,iVar7,0,uVar4);
    piVar9[0x20] = iVar7;
    thunk_FUN_00ec5080(piVar9 + 0x20,iVar7);
    piVar9[0xd1] = 3;
    TMPro_TMP_Text__PopulateTextProcessingArray_34fe2c8(piVar9);
    pcVar5 = *(code **)(*piVar9 + 0x1a0);
    uVar4 = *(undefined4 *)(*piVar9 + 0x1a4);
    *(undefined1 *)(piVar9 + 0xb6) = 1;
    (*pcVar5)(piVar9,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0350fbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar9 + 0x198))(piVar9,*(undefined4 *)(*piVar9 + 0x19c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

