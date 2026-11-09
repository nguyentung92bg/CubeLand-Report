/* IL2CPP: Rotatelab.Ads.AdManager.<>c$$<InitializeCoroutine>b__48_2
bool Rotatelab_Ads_AdManager___c___InitializeCoroutine_b__48_2 (Rotatelab_Ads_AdManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<>c$$<InitializeCoroutine>b__48_2
   bool Rotatelab_Ads_AdManager___c___InitializeCoroutine_b__48_2 (Rotatelab_Ads_AdManager___c_o*
   __this, const MethodInfo* method); */

uint Rotatelab_Ads_AdManager___c___InitializeCoroutine_b__48_2_10f67c0(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01106820 + 0x11067d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106824 + 0x11067e4));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01106828 + 0x11067f8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iVar1 + 0x14),0);
  return uVar2 ^ 1;
}

