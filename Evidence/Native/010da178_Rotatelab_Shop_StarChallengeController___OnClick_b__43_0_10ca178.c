/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<OnClick>b__43_0
void Rotatelab_Shop_StarChallengeController___OnClick_b__43_0 (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<OnClick>b__43_0
   void Rotatelab_Shop_StarChallengeController___OnClick_b__43_0
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___OnClick_b__43_0_10ca178(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x44);
  pcVar3 = (char *)(_UNK_010da1f0 + 0x10da190);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da1f4 + 0x10da1a4));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_010da1f8 + 0x10da1bc) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localEulerAngles_3615014(iVar2,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

