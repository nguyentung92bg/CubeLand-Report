/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$add_AdHiddenEvent
void Rotatelab_Ads_RewardedAdFormat__add_AdHiddenEvent (Rotatelab_Ads_RewardedAdFormat_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$add_AdHiddenEvent
   void Rotatelab_Ads_RewardedAdFormat__add_AdHiddenEvent (Rotatelab_Ads_RewardedAdFormat_o* __this,
   System_Action_o* value, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__add_AdHiddenEvent_10f3ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  pcVar4 = (char *)(_UNK_01103c34 + 0x1103bb8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103c38 + 0x1103bcc));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01103c3c + 0x1103be4);
  iVar1 = *(int *)(param_1 + 0x38);
  while( true ) {
    piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar1,param_2,0);
    piVar5 = (int *)0x0;
    if ((piVar2 != (int *)0x0) && (piVar5 = piVar2, *piVar2 != *piVar6)) break;
    iVar3 = FUN_00efd180((int *)(param_1 + 0x38),piVar5,iVar1);
    bVar7 = iVar3 == iVar1;
    iVar1 = iVar3;
    if (bVar7) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28();
}

