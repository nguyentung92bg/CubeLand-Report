/* IL2CPP: Rotatelab.Ads.AdManager.<WaitForInitializationCoroutine>d__53$$MoveNext
bool Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_d__53__MoveNext (Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_d__53_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.AdManager.<WaitForInitializationCoroutine>d__53$$MoveNext
   bool Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_d__53__MoveNext
   (Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_d__53_o* __this, const MethodInfo*
   method); */

bool Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_d__53__MoveNext_10f88bc(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return false;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Ads_AdManager__get_IsEnabled_10f5748();
    if (iVar1 == 0) {
      return false;
    }
  }
  if (iVar2 != 0) {
    bVar3 = *(char *)(iVar2 + 0x10) == '\0';
    if (bVar3) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

