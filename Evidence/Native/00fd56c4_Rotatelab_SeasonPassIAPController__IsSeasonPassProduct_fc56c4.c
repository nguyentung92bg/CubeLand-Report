/* IL2CPP: Rotatelab.SeasonPassIAPController$$IsSeasonPassProduct
bool Rotatelab_SeasonPassIAPController__IsSeasonPassProduct (Rotatelab_SeasonPassIAPController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SeasonPassIAPController$$IsSeasonPassProduct
   bool Rotatelab_SeasonPassIAPController__IsSeasonPassProduct (Rotatelab_SeasonPassIAPController_o*
   __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method); */

undefined4 Rotatelab_SeasonPassIAPController__IsSeasonPassProduct_fc56c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 8);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (iVar3 == iVar1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((iVar3 != 0 && iVar1 != 0) && (uVar4 = *(uint *)(iVar3 + 8), uVar4 == *(uint *)(iVar1 + 8)))
    {
      uVar2 = System_SpanHelpers__SequenceEqual_2b865c4
                        (iVar3 + 0xc,iVar1 + 0xc,uVar4 << 1,
                         ((int)uVar4 >> 0x1f) << 1 | uVar4 >> 0x1f,0);
      return uVar2;
    }
  }
  return uVar2;
}

