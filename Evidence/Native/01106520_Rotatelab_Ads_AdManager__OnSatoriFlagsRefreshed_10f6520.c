/* IL2CPP: Rotatelab.Ads.AdManager$$OnSatoriFlagsRefreshed
void Rotatelab_Ads_AdManager__OnSatoriFlagsRefreshed (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$OnSatoriFlagsRefreshed
   void Rotatelab_Ads_AdManager__OnSatoriFlagsRefreshed (Rotatelab_Ads_AdManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_AdManager__OnSatoriFlagsRefreshed_10f6520(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_011065d0 + 0x1106538);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011065d4 + 0x110654c));
    *pcVar2 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 != 0) {
    uVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_011065d8 + 0x110656c));
    if ((int)uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)((int)uVar5 + 0x34);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds_fe719c
                      (iVar3,(int)((ulonglong)uVar5 >> 0x20),*(int *)(param_1 + 0x50),
                       *(int *)(param_1 + 0x50) >> 0x1f,0);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar4 + 0x40) = uVar1;
  }
  return;
}

