/* IL2CPP: Rotatelab.Ads.AdManager$$remove_OnNeftaSessionResolved
void Rotatelab_Ads_AdManager__remove_OnNeftaSessionResolved (Rotatelab_Ads_AdManager_o* __this, System_Action_AdManager_NeftaSession__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$remove_OnNeftaSessionResolved
   void Rotatelab_Ads_AdManager__remove_OnNeftaSessionResolved (Rotatelab_Ads_AdManager_o* __this,
   System_Action_AdManager_NeftaSession__o* value, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__remove_OnNeftaSessionResolved_10f5938(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_01105a00 + 0x1105950);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105a04 + 0x1105964));
    *pcVar6 = '\x01';
  }
  piVar5 = (int *)(param_1 + 0x38);
  iVar3 = System_Delegate__Remove_2bbcc8c(*piVar5,param_2,0);
  if (iVar3 == 0) {
    *piVar5 = 0;
  }
  else {
    puVar8 = *(undefined4 **)(_UNK_01105a08 + 0x1105998);
    uVar7 = *puVar8;
    iVar4 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
    uVar7 = *puVar8;
    *piVar5 = iVar4;
    iVar4 = thunk_FUN_00f00bc8(iVar3,uVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar7);
    }
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

