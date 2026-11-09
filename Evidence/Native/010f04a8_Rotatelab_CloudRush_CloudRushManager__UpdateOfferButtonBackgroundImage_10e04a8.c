/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$UpdateOfferButtonBackgroundImage
void Rotatelab_CloudRush_CloudRushManager__UpdateOfferButtonBackgroundImage (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$UpdateOfferButtonBackgroundImage
   void Rotatelab_CloudRush_CloudRushManager__UpdateOfferButtonBackgroundImage
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__UpdateOfferButtonBackgroundImage_10e04a8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint in_fpscr;
  float fVar5;
  
  piVar3 = *(int **)(param_1 + 0x54);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x9c),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = fVar5 / 7.0;
  bVar1 = fVar5 < 0.0;
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  if (bVar1) {
    fVar5 = _UNK_010f0504;
  }
  pcVar4 = (char *)(_UNK_03731e0c + 0x3731d88);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar5,0);
    *pcVar4 = '\x01';
  }
  bVar1 = fVar5 < 0.0;
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  if (bVar1) {
    fVar5 = _UNK_03731e08;
  }
  iVar2 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                    (piVar3 + 0x25,fVar5,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x1a0))(piVar3,*(undefined4 *)(*piVar3 + 0x1a4));
    return;
  }
  return;
}

