/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckRefreshRoutine
System_Collections_IEnumerator_o* Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckRefreshRoutine
   System_Collections_IEnumerator_o* Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

int Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_10a3750(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010b37bc + 0x10b3764);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b37c0 + 0x10b3778));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b37c4 + 0x10b378c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

