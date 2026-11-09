/* IL2CPP: Rotatelab.Ads.AdManager$$add_OnNeftaSessionResolved
void Rotatelab_Ads_AdManager__add_OnNeftaSessionResolved (Rotatelab_Ads_AdManager_o* __this, System_Action_AdManager_NeftaSession__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$add_OnNeftaSessionResolved
   void Rotatelab_Ads_AdManager__add_OnNeftaSessionResolved (Rotatelab_Ads_AdManager_o* __this,
   System_Action_AdManager_NeftaSession__o* value, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__add_OnNeftaSessionResolved_10f57d8(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01105920 + 0x11057f4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105924 + 0x1105808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105928 + 0x1105814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110592c + 0x1105820));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    if (param_2 != 0) {
      System_Nullable_AdManager_NeftaSession___get_Value_17e28c4
                (&uStack_30,(char *)(param_1 + 0x1c),**(undefined4 **)(_UNK_01105930 + 0x110584c));
      (**(code **)(param_2 + 0xc))
                (*(undefined4 *)(param_2 + 0x20),uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20,
                 uStack_1c,*(undefined4 *)(param_2 + 0x14));
    }
    return;
  }
  piVar5 = (int *)(param_1 + 0x38);
  iVar3 = System_Delegate__Combine_2bbca94(*piVar5,param_2,0);
  if (iVar3 == 0) {
    *piVar5 = 0;
  }
  else {
    puVar8 = *(undefined4 **)(_UNK_01105934 + 0x11058b4);
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

