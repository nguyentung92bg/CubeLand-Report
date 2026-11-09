/* IL2CPP: Rotatelab.Ads.BannerBackgroundCanvas$$OnDestroy
void Rotatelab_Ads_BannerBackgroundCanvas__OnDestroy (Rotatelab_Ads_BannerBackgroundCanvas_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerBackgroundCanvas$$OnDestroy
   void Rotatelab_Ads_BannerBackgroundCanvas__OnDestroy (Rotatelab_Ads_BannerBackgroundCanvas_o*
   __this, const MethodInfo* method); */

void Rotatelab_Ads_BannerBackgroundCanvas__OnDestroy_10f9264(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar5 = (char *)(_UNK_01109340 + 0x1109278);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109344 + 0x110928c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109348 + 0x1109298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110934c + 0x11092a4));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0) {
    return;
  }
  puVar8 = *(undefined4 **)(_UNK_01109350 + 0x11092c4);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_01109354 + 0x11092e0),0);
  Rotatelab_Ads_BannerAdFormat__remove_AdDisplayedEvent_10ee680(iVar6,uVar3);
  iVar6 = *(int *)(param_1 + 0x18);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_01109358 + 0x1109318),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_010fe854 + 0x10fe7d8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe858 + 0x10fe7ec));
    *pcVar5 = '\x01';
  }
  piVar4 = (int *)(iVar6 + 0x34);
  piVar9 = *(int **)(_UNK_010fe85c + 0x10fe804);
  iVar6 = *piVar4;
  while( true ) {
    piVar1 = (int *)System_Delegate__Remove_2bbcc8c(iVar6,uVar3,0);
    piVar7 = (int *)0x0;
    if ((piVar1 != (int *)0x0) && (piVar7 = piVar1, *piVar1 != *piVar9)) break;
    iVar2 = FUN_00efd180(piVar4,piVar7,iVar6);
    bVar10 = iVar2 == iVar6;
    iVar6 = iVar2;
    if (bVar10) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28();
}

