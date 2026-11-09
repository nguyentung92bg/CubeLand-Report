/* IL2CPP: Rotatelab.Ads.AdManager$$WaitForegroundCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__WaitForegroundCoroutine (Rotatelab_Ads_AdManager_o* __this, System_Func_bool__o* isDone, float timeoutSeconds, bool restartOnResume, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$WaitForegroundCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__WaitForegroundCoroutine
   (Rotatelab_Ads_AdManager_o* __this, System_Func_bool__o* isDone, float timeoutSeconds, bool
   restartOnResume, const MethodInfo* method); */

int Rotatelab_Ads_AdManager__WaitForegroundCoroutine_10f5d94
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01105e2c + 0x1105db4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105e30 + 0x1105dcc));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105e34 + 0x1105de0));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),param_2);
  *(undefined1 *)(iVar1 + 0x14) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return iVar1;
}

